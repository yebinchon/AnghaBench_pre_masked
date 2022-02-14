
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct patch_id_args {int first_file; int ctx; int result; } ;
typedef int git_oid ;
typedef int git_diff_patchid_options ;
typedef int git_diff ;
typedef int args ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ,int *,int *,int ,struct patch_id_args*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct patch_id_args*,int ,int) ;
 int VAR_2 ;

int FUNC_7(git_oid *VAR_3, git_diff *VAR_4, git_diff_patchid_options *VAR_5)
{
 struct patch_id_args VAR_6;
 int VAR_7;

 FUNC_0(
  VAR_5, VAR_0, "git_diff_patchid_options");

 FUNC_6(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.first_file = 1;
 if ((VAR_7 = FUNC_4(&VAR_6.ctx)) < 0)
  goto out;

 if ((VAR_7 = FUNC_2(VAR_4, VAR_1, ((void*)0), ((void*)0), VAR_2, &VAR_6)) < 0)
  goto out;

 if ((VAR_7 = (FUNC_1(&VAR_6.result, &VAR_6.ctx))) < 0)
  goto out;

 FUNC_5(VAR_3, &VAR_6.result);

out:
 FUNC_3(&VAR_6.ctx);
 return VAR_7;
}
