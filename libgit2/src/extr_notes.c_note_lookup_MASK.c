
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree ;
typedef int git_repository ;
typedef int git_oid ;
typedef int git_note ;
typedef int git_commit ;
typedef int git_blob ;


 int FUNC_0 (int *,int *,char const*) ;
 int FUNC_1 (int **,int *,int *,char const*,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int *,int *,int *) ;

__attribute__((used)) static int FUNC_6(
 git_note **VAR_0,
 git_repository *VAR_1,
 git_commit *VAR_2,
 git_tree *VAR_3,
 const char *VAR_4)
{
 int VAR_5, VAR_6 = 0;
 git_oid VAR_7;
 git_blob *VAR_8 = ((void*)0);
 git_note *VAR_9 = ((void*)0);
 git_tree *VAR_10 = ((void*)0);

 if ((VAR_5 = FUNC_1(&VAR_10, VAR_3, VAR_1, VAR_4, &VAR_6)) < 0)
  goto cleanup;

 if ((VAR_5 = FUNC_0(&VAR_7, VAR_10, VAR_4 + VAR_6)) < 0)
  goto cleanup;

 if ((VAR_5 = FUNC_3(&VAR_8, VAR_1, &VAR_7)) < 0)
  goto cleanup;

 if ((VAR_5 = FUNC_5(&VAR_9, &VAR_7, VAR_2, VAR_8)) < 0)
  goto cleanup;

 *VAR_0 = VAR_9;

cleanup:
 FUNC_4(VAR_10);
 FUNC_2(VAR_8);
 return VAR_5;
}
