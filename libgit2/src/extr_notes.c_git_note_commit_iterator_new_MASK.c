
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree ;
typedef int git_note_iterator ;
typedef int git_commit ;


 int FUNC_0 (int **,int *) ;
 int FUNC_1 (int **,int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(
 git_note_iterator **VAR_0,
 git_commit *VAR_1)
{
 int VAR_2;
 git_tree *VAR_3;

 if ((VAR_2 = FUNC_0(&VAR_3, VAR_1)) < 0)
  goto cleanup;

 if ((VAR_2 = FUNC_1(VAR_0, VAR_3, ((void*)0))) < 0)
  FUNC_2(*VAR_0);

cleanup:
 FUNC_3(VAR_3);

 return VAR_2;
}
