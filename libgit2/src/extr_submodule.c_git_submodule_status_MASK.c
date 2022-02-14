
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_submodule_ignore_t ;
typedef int git_submodule ;
typedef int git_repository ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int*,int *,int *,int *,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int *,char const*) ;

int FUNC_4(unsigned int *VAR_0, git_repository *VAR_1, const char *VAR_2, git_submodule_ignore_t VAR_3)
{
 git_submodule *VAR_4;
 int VAR_5;

 FUNC_0(VAR_0 && VAR_1 && VAR_2);

 if ((VAR_5 = FUNC_3(&VAR_4, VAR_1, VAR_2)) < 0)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_0, ((void*)0), ((void*)0), ((void*)0), VAR_4, VAR_3);
 FUNC_2(VAR_4);

 return VAR_5;
}
