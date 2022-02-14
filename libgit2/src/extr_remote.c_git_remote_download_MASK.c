
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int git_vector ;
struct TYPE_15__ {size_t count; int * strings; } ;
typedef TYPE_1__ git_strarray ;
typedef int git_remote_callbacks ;
struct TYPE_16__ {int passed_refspecs; int * push; int active_refspecs; int refspecs; int passive_refspecs; int repo; } ;
typedef TYPE_2__ git_remote ;
typedef int git_proxy_options ;
struct TYPE_17__ {int proxy_opts; TYPE_1__ custom_headers; int callbacks; } ;
typedef TYPE_3__ git_fetch_options ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (TYPE_2__*,int const*) ;
 int FUNC_7 (TYPE_2__*,TYPE_3__ const*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_2__*,int ,int const*,int const*,TYPE_1__ const*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *,int ,int *) ;
 scalar_t__ FUNC_13 (int *,TYPE_2__*) ;

int FUNC_14(git_remote *VAR_5, const git_strarray *VAR_6, const git_fetch_options *VAR_7)
{
 int VAR_8 = -1;
 size_t VAR_9;
 git_vector *VAR_10, VAR_11 = VAR_4, VAR_12 = VAR_4;
 const git_remote_callbacks *VAR_13 = ((void*)0);
 const git_strarray *VAR_14 = ((void*)0);
 const git_proxy_options *VAR_15 = ((void*)0);

 FUNC_2(VAR_5);

 if (!VAR_5->repo) {
  FUNC_5(VAR_1, "cannot download detached remote");
  return -1;
 }

 if (VAR_7) {
  FUNC_0(&VAR_7->callbacks, VAR_3, "git_remote_callbacks");
  VAR_13 = &VAR_7->callbacks;
  VAR_14 = &VAR_7->custom_headers;
  FUNC_0(&VAR_7->proxy_opts, VAR_2, "git_proxy_options");
  VAR_15 = &VAR_7->proxy_opts;
 }

 if (!FUNC_10(VAR_5) &&
     (VAR_8 = FUNC_9(VAR_5, VAR_0, VAR_13, VAR_15, VAR_14)) < 0)
  goto on_error;

 if (FUNC_13(&VAR_12, VAR_5) < 0)
  return -1;

 if ((FUNC_12(&VAR_11, 0, ((void*)0))) < 0)
  goto on_error;

 VAR_5->passed_refspecs = 0;
 if (!VAR_6 || !VAR_6->count) {
  VAR_10 = &VAR_5->refspecs;
 } else {
  for (VAR_9 = 0; VAR_9 < VAR_6->count; VAR_9++) {
   if ((VAR_8 = FUNC_1(&VAR_11, VAR_6->strings[VAR_9], 1)) < 0)
    goto on_error;
  }

  VAR_10 = &VAR_11;
  VAR_5->passed_refspecs = 1;
 }

 FUNC_4(&VAR_5->passive_refspecs);
 if ((VAR_8 = FUNC_3(&VAR_5->passive_refspecs, &VAR_5->refspecs, &VAR_12)) < 0)
  goto on_error;

 FUNC_4(&VAR_5->active_refspecs);
 VAR_8 = FUNC_3(&VAR_5->active_refspecs, VAR_10, &VAR_12);

 FUNC_11(&VAR_12);
 FUNC_4(&VAR_11);
 FUNC_11(&VAR_11);

 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_5->push) {
  FUNC_8(VAR_5->push);
  VAR_5->push = ((void*)0);
 }

 if ((VAR_8 = FUNC_7(VAR_5, VAR_7)) < 0)
  return VAR_8;

 return FUNC_6(VAR_5, VAR_13);

on_error:
 FUNC_11(&VAR_12);
 FUNC_4(&VAR_11);
 FUNC_11(&VAR_11);
 return VAR_8;
}
