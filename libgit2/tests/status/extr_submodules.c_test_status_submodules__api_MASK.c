
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_submodule ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int **,int ,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;

void FUNC_8(void)
{
 git_submodule *VAR_2;

 VAR_1 = FUNC_7();

 FUNC_0(FUNC_4(((void*)0), VAR_1, "nonexistent") == VAR_0);

 FUNC_0(FUNC_4(((void*)0), VAR_1, "modified") == VAR_0);

 FUNC_2(FUNC_4(&VAR_2, VAR_1, "testrepo"));
 FUNC_0(VAR_2 != ((void*)0));
 FUNC_1("testrepo", FUNC_5(VAR_2));
 FUNC_1("testrepo", FUNC_6(VAR_2));
 FUNC_3(VAR_2);
}
