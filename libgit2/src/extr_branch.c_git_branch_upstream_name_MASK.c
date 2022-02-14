
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_remote ;
typedef int git_refspec ;
typedef int git_config ;
typedef int git_buf ;


 int GIT_BUF_INIT ;
 int GIT_ENOTFOUND ;
 int GIT_ERROR_REFERENCE ;
 int assert (int) ;
 int git_buf_cstr (int *) ;
 int git_buf_dispose (int *) ;
 scalar_t__ git_buf_len (int *) ;
 int git_buf_sanitize (int *) ;
 int git_buf_set (int *,int ,scalar_t__) ;
 int git_config_free (int *) ;
 int git_error_set (int ,char*,char const*) ;
 int git_reference__is_branch (char const*) ;
 scalar_t__ git_refspec_transform (int *,int const*,int ) ;
 int * git_remote__matching_refspec (int *,int ) ;
 int git_remote_free (int *) ;
 int git_remote_lookup (int **,int *,int ) ;
 int git_repository_config_snapshot (int **,int *) ;
 int not_a_local_branch (char const*) ;
 int retrieve_upstream_configuration (int *,int *,char const*,char*) ;
 scalar_t__ strcmp (char*,int ) ;

int git_branch_upstream_name(
 git_buf *out,
 git_repository *repo,
 const char *refname)
{
 git_buf remote_name = GIT_BUF_INIT;
 git_buf merge_name = GIT_BUF_INIT;
 git_buf buf = GIT_BUF_INIT;
 int error = -1;
 git_remote *remote = ((void*)0);
 const git_refspec *refspec;
 git_config *config;

 assert(out && refname);

 git_buf_sanitize(out);

 if (!git_reference__is_branch(refname))
  return not_a_local_branch(refname);

 if ((error = git_repository_config_snapshot(&config, repo)) < 0)
  return error;

 if ((error = retrieve_upstream_configuration(
  &remote_name, config, refname, "branch.%s.remote")) < 0)
   goto cleanup;

 if ((error = retrieve_upstream_configuration(
  &merge_name, config, refname, "branch.%s.merge")) < 0)
   goto cleanup;

 if (git_buf_len(&remote_name) == 0 || git_buf_len(&merge_name) == 0) {
  git_error_set(GIT_ERROR_REFERENCE,
   "branch '%s' does not have an upstream", refname);
  error = GIT_ENOTFOUND;
  goto cleanup;
 }

 if (strcmp(".", git_buf_cstr(&remote_name)) != 0) {
  if ((error = git_remote_lookup(&remote, repo, git_buf_cstr(&remote_name))) < 0)
   goto cleanup;

  refspec = git_remote__matching_refspec(remote, git_buf_cstr(&merge_name));
  if (!refspec) {
   error = GIT_ENOTFOUND;
   goto cleanup;
  }

  if (git_refspec_transform(&buf, refspec, git_buf_cstr(&merge_name)) < 0)
   goto cleanup;
 } else
  if (git_buf_set(&buf, git_buf_cstr(&merge_name), git_buf_len(&merge_name)) < 0)
   goto cleanup;

 error = git_buf_set(out, git_buf_cstr(&buf), git_buf_len(&buf));

cleanup:
 git_config_free(config);
 git_remote_free(remote);
 git_buf_dispose(&remote_name);
 git_buf_dispose(&merge_name);
 git_buf_dispose(&buf);
 return error;
}
