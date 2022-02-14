
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_config ;
typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,char*,char const*) ;
 scalar_t__ FUNC_3 (int *,int ,char const*) ;
 scalar_t__ FUNC_4 (int **,int *) ;

__attribute__((used)) static int FUNC_5(
 git_repository *VAR_1,
 const char *VAR_2,
 const char *VAR_3,
 const char *VAR_4)
{
 git_config *VAR_5;
 git_buf VAR_6 = VAR_0, VAR_7 = VAR_0;
 int VAR_8 = -1;

 if (FUNC_4(&VAR_5, VAR_1) < 0)
  return -1;

 if (FUNC_2(&VAR_6, "branch.%s.remote", VAR_2) < 0)
  goto cleanup;

 if (FUNC_2(&VAR_7, "branch.%s.merge", VAR_2) < 0)
  goto cleanup;

 if (FUNC_3(VAR_5, FUNC_0(&VAR_6), VAR_3) < 0)
  goto cleanup;

 if (FUNC_3(VAR_5, FUNC_0(&VAR_7), VAR_4) < 0)
  goto cleanup;

 VAR_8 = 0;

cleanup:
 FUNC_1(&VAR_6);
 FUNC_1(&VAR_7);
 return VAR_8;
}
