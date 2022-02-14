
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree ;
typedef int git_commit ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int **,int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(
 git_tree **VAR_0,
 git_tree **VAR_1,
 git_tree **VAR_2,
 git_tree **VAR_3,
 git_tree **VAR_4,
 git_commit *VAR_5)
{
 git_tree *VAR_6 = ((void*)0);
 git_commit *VAR_7 = ((void*)0);
 git_tree *VAR_8 = ((void*)0);
 git_commit *VAR_9 = ((void*)0);
 git_tree *VAR_10 = ((void*)0);
 git_commit *VAR_11 = ((void*)0);
 git_tree *VAR_12 = ((void*)0);
 git_commit *VAR_13 = ((void*)0);
 git_tree *VAR_14 = ((void*)0);
 int VAR_15;

 if ((VAR_15 = FUNC_3(&VAR_6, VAR_5)) < 0)
  goto cleanup;

 if ((VAR_15 = FUNC_1(&VAR_7, VAR_5, 0)) < 0)
  goto cleanup;
 if ((VAR_15 = FUNC_3(&VAR_8, VAR_7)) < 0)
  goto cleanup;

 if ((VAR_15 = FUNC_1(&VAR_9, VAR_5, 1)) < 0)
  goto cleanup;
 if ((VAR_15 = FUNC_3(&VAR_10, VAR_9)) < 0)
  goto cleanup;

 if ((VAR_15 = FUNC_1(&VAR_11, VAR_9, 0)) < 0)
  goto cleanup;
 if ((VAR_15 = FUNC_3(&VAR_12, VAR_11)) < 0)
  goto cleanup;

 if (FUNC_2(VAR_5) == 3) {
  if ((VAR_15 = FUNC_1(&VAR_13, VAR_5, 2)) < 0)
   goto cleanup;
  if ((VAR_15 = FUNC_3(&VAR_14, VAR_13)) < 0)
   goto cleanup;
 }

 *VAR_0 = VAR_6;
 *VAR_1 = VAR_8;
 *VAR_2 = VAR_10;
 *VAR_3 = VAR_12;
 *VAR_4 = VAR_14;

cleanup:
 FUNC_0(VAR_13);
 FUNC_0(VAR_11);
 FUNC_0(VAR_9);
 FUNC_0(VAR_7);
 if (VAR_15 < 0) {
  FUNC_4(VAR_6);
  FUNC_4(VAR_8);
  FUNC_4(VAR_10);
  FUNC_4(VAR_12);
  FUNC_4(VAR_14);
 }
 return VAR_15;
}
