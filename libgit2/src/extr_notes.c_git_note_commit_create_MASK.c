
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
 int FUNC_3 (int *,int *,int *,int const*,int const*,int *,char const*,int *,char*,int **,int) ;

int FUNC_4(
 git_oid *VAR_1,
 git_oid *VAR_2,
 git_repository *VAR_3,
 git_commit *VAR_4,
 const git_signature *VAR_5,
 const git_signature *VAR_6,
 const git_oid *VAR_7,
 const char *VAR_8,
 int VAR_9)
{
 int VAR_10;
 git_tree *VAR_11 = ((void*)0);
 char VAR_12[VAR_0 + 1];

 FUNC_1(VAR_12, sizeof(VAR_12), VAR_7);

 if (VAR_4 != ((void*)0) && (VAR_10 = FUNC_0(&VAR_11, VAR_4)) < 0)
  goto cleanup;

 VAR_10 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_5,
   VAR_6, ((void*)0), VAR_8, VAR_11, VAR_12, &VAR_4, VAR_9);

 if (VAR_10 < 0)
  goto cleanup;

cleanup:
 FUNC_2(VAR_11);
 return VAR_10;
}
