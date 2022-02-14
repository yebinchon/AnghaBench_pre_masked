
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reference_iterator ;
typedef int git_refdb ;


 int FUNC_0 (int **,int *,char const*) ;
 scalar_t__ FUNC_1 (int **,int *) ;

int FUNC_2(
 git_reference_iterator **VAR_0, git_repository *VAR_1, const char *VAR_2)
{
 git_refdb *VAR_3;

 if (FUNC_1(&VAR_3, VAR_1) < 0)
  return -1;

 return FUNC_0(VAR_0, VAR_3, VAR_2);
}
