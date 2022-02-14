
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int target ;
typedef int git_tree ;
typedef int git_repository ;
typedef int git_oid ;
typedef int git_note ;
typedef int git_commit ;


 int VAR_0 ;
 int FUNC_0 (int **,int *) ;
 int FUNC_1 (char*,int,int const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int *,int *,int *,char*) ;

int FUNC_4(
 git_note **VAR_1,
 git_repository *VAR_2,
 git_commit *VAR_3,
 const git_oid *VAR_4)
{
 int VAR_5;
 git_tree *VAR_6 = ((void*)0);
 char VAR_7[VAR_0 + 1];

 FUNC_1(VAR_7, sizeof(VAR_7), VAR_4);

 if ((VAR_5 = FUNC_0(&VAR_6, VAR_3)) < 0)
  goto cleanup;

 VAR_5 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_6, VAR_7);

cleanup:
 FUNC_2(VAR_6);
 return VAR_5;
}
