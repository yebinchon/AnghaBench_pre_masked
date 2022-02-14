
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ) ;
 int * FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;

void FUNC_8(void)
{
 git_repository *VAR_0;

 FUNC_2(FUNC_5(&VAR_0, FUNC_1("empty_standard_repo/.gitted")));

 FUNC_0(FUNC_6(VAR_0) != ((void*)0));
 FUNC_0(FUNC_3(FUNC_6(VAR_0), "/") == 0);

 FUNC_0(FUNC_7(VAR_0) != ((void*)0));
 FUNC_0(FUNC_3(FUNC_7(VAR_0), "/") == 0);

 FUNC_4(VAR_0);
}
