
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_commit_list_node ;
typedef int git_commit_list ;


 scalar_t__ FUNC_0 (int **,int ,unsigned int) ;
 int * FUNC_1 (int *,int **) ;
 int FUNC_2 (int **) ;

__attribute__((used)) static int FUNC_3(git_commit_list_node *VAR_0, unsigned int VAR_1)
{
 git_commit_list *VAR_2 = ((void*)0);
 if (FUNC_1(VAR_0, &VAR_2) == ((void*)0))
  return -1;
 while (VAR_2)
  if (FUNC_0(&VAR_2, FUNC_2(&VAR_2), VAR_1) < 0)
   return -1;
 return 0;
}
