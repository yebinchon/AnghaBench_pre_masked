
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree ;
typedef int git_diff_options ;
typedef int git_diff ;
typedef int git_commit ;


 int FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int *,size_t) ;
 int FUNC_4 (int **,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int **,int ,int *,int *,int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(git_commit *VAR_0, int VAR_1, git_diff_options *VAR_2)
{
 git_commit *VAR_3;
 git_tree *VAR_4, *VAR_5;
 git_diff *VAR_6;
 int VAR_7;

 FUNC_0(
  FUNC_3(&VAR_3, VAR_0, (size_t)VAR_1), "Get parent", ((void*)0));
 FUNC_0(FUNC_4(&VAR_4, VAR_3), "Tree for parent", ((void*)0));
 FUNC_0(FUNC_4(&VAR_5, VAR_0), "Tree for commit", ((void*)0));
 FUNC_0(
  FUNC_7(&VAR_6, FUNC_2(VAR_0), VAR_4, VAR_5, VAR_2),
  "Checking diff between parent and commit", ((void*)0));

 VAR_7 = (int)FUNC_6(VAR_6);

 FUNC_5(VAR_6);
 FUNC_8(VAR_4);
 FUNC_8(VAR_5);
 FUNC_1(VAR_3);

 return VAR_7 > 0;
}
