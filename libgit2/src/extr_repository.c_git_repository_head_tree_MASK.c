
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree ;
typedef int git_repository ;
typedef int git_reference ;
typedef int git_object ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int **,int *,int ) ;
 int FUNC_2 (int **,int *) ;

int FUNC_3(git_tree **VAR_1, git_repository *VAR_2)
{
 git_reference *VAR_3;
 git_object *VAR_4;
 int VAR_5;

 if ((VAR_5 = FUNC_2(&VAR_3, VAR_2)) < 0)
  return VAR_5;

 if ((VAR_5 = FUNC_1(&VAR_4, VAR_3, VAR_0)) < 0)
  goto cleanup;

 *VAR_1 = (git_tree *)VAR_4;

cleanup:
 FUNC_0(VAR_3);
 return VAR_5;
}
