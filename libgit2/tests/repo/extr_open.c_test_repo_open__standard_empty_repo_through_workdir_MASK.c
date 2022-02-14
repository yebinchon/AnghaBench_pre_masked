
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;


 int FUNC_0 (int) ;
 int * FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,char*) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;

void FUNC_5(void)
{
 git_repository *VAR_0 = FUNC_1("empty_standard_repo");

 FUNC_0(FUNC_3(VAR_0) != ((void*)0));
 FUNC_0(FUNC_2(FUNC_3(VAR_0), "/") == 0);

 FUNC_0(FUNC_4(VAR_0) != ((void*)0));
 FUNC_0(FUNC_2(FUNC_4(VAR_0), "/") == 0);
}
