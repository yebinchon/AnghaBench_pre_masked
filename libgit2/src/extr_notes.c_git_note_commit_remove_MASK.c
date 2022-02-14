
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int target ;
typedef int git_tree ;
typedef int git_signature ;
typedef int git_repository ;
typedef int git_oid ;
typedef int git_commit ;


 int VAR_0 ;
 int FUNC_0 (int **,int *) ;
 int FUNC_1 (char*,int,int const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int const*,int const*,int *,int *,char*,int **) ;

int FUNC_4(
  git_oid *VAR_1,
  git_repository *VAR_2,
  git_commit *VAR_3,
  const git_signature *VAR_4,
  const git_signature *VAR_5,
  const git_oid *VAR_6)
{
 int VAR_7;
 git_tree *VAR_8 = ((void*)0);
 char VAR_9[VAR_0 + 1];

 FUNC_1(VAR_9, sizeof(VAR_9), VAR_6);

 if ((VAR_7 = FUNC_0(&VAR_8, VAR_3)) < 0)
  goto cleanup;

 VAR_7 = FUNC_3(VAR_1,
  VAR_2, VAR_4, VAR_5, ((void*)0), VAR_8, VAR_9, &VAR_3);

cleanup:
 FUNC_2(VAR_8);
 return VAR_7;
}
