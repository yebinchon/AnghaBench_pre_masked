
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_refdb ;


 int FUNC_0 (int *,char const*,int *,int *) ;
 int FUNC_1 (int **,int *) ;

int FUNC_2(git_repository *VAR_0, const char *VAR_1)
{
 git_refdb *VAR_2;
 int VAR_3;

 if ((VAR_3 = FUNC_1(&VAR_2, VAR_0)) < 0)
  return VAR_3;

 return FUNC_0(VAR_2, VAR_1, ((void*)0), ((void*)0));
}
