
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reference_iterator ;
typedef int git_refdb ;


 int FUNC_0 (int **,int *,int *) ;
 scalar_t__ FUNC_1 (int **,int *) ;

int FUNC_2(git_reference_iterator **VAR_0, git_repository *VAR_1)
{
 git_refdb *VAR_2;

 if (FUNC_1(&VAR_2, VAR_1) < 0)
  return -1;

 return FUNC_0(VAR_0, VAR_2, ((void*)0));
}
