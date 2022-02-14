
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree ;
typedef int git_repository ;
typedef int git_merge_options ;
typedef int git_index ;
typedef int git_commit ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int *) ;
 int FUNC_6 (int **,int *,int *,int *,int *,int const*) ;
 int FUNC_7 (int *) ;

int FUNC_8(
 git_index **VAR_0,
 git_repository *VAR_1,
 git_commit *VAR_2,
 git_commit *VAR_3,
 unsigned int VAR_4,
 const git_merge_options *VAR_5)
{
 git_commit *VAR_6 = ((void*)0);
 git_tree *VAR_7 = ((void*)0), *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
 int VAR_10 = 0, VAR_11 = 0;

 FUNC_0(VAR_0 && VAR_1 && VAR_2 && VAR_3);

 if (FUNC_4(VAR_2) > 1) {
  if (!VAR_4)
   return FUNC_1(VAR_2,
    "mainline branch is not specified but %s is a merge commit");

  VAR_10 = VAR_4;
 } else {
  if (VAR_4)
   return FUNC_1(VAR_2,
    "mainline branch specified but %s is not a merge commit");

  VAR_10 = FUNC_4(VAR_2);
 }

 if (VAR_10 &&
  ((VAR_11 = FUNC_3(&VAR_6, VAR_2, (VAR_10 - 1))) < 0 ||
  (VAR_11 = FUNC_5(&VAR_7, VAR_6)) < 0))
  goto done;

 if ((VAR_11 = FUNC_5(&VAR_9, VAR_2)) < 0 ||
  (VAR_11 = FUNC_5(&VAR_8, VAR_3)) < 0)
  goto done;

 VAR_11 = FUNC_6(VAR_0, VAR_1, VAR_7, VAR_8, VAR_9, VAR_5);

done:
 FUNC_7(VAR_7);
 FUNC_7(VAR_8);
 FUNC_7(VAR_9);
 FUNC_2(VAR_6);

 return VAR_11;
}
