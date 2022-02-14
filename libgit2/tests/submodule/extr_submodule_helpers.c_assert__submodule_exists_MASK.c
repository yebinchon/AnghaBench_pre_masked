
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_submodule ;
typedef int git_repository ;


 int FUNC_0 (int ,char const*,int) ;
 int FUNC_1 (int,int ,char const*,int,char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int *,char const*) ;

void FUNC_4(
 git_repository *VAR_0, const char *VAR_1,
 const char *VAR_2, const char *VAR_3, int VAR_4)
{
 git_submodule *VAR_5;
 int VAR_6 = FUNC_3(&VAR_5, VAR_0, VAR_1);
 if (VAR_6)
  FUNC_1(VAR_6, 0, VAR_3, VAR_4, VAR_2);
 FUNC_0(VAR_5 != ((void*)0), VAR_3, VAR_4);
 FUNC_2(VAR_5);
}
