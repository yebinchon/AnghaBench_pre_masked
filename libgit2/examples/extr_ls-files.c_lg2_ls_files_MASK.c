
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ls_options ;
typedef int git_repository ;
typedef int git_index ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int **,int *) ;
 int FUNC_2 (int *,int,char**) ;
 int FUNC_3 (int *,int *) ;

int FUNC_4(git_repository *VAR_0, int VAR_1, char *VAR_2[])
{
 git_index *VAR_3 = ((void*)0);
 ls_options VAR_4;
 int VAR_5;

 if ((VAR_5 = FUNC_2(&VAR_4, VAR_1, VAR_2)) < 0)
  return VAR_5;

 if ((VAR_5 = FUNC_1(&VAR_3, VAR_0)) < 0)
  goto cleanup;

 VAR_5 = FUNC_3(&VAR_4, VAR_3);

cleanup:
 FUNC_0(VAR_3);

 return VAR_5;
}
