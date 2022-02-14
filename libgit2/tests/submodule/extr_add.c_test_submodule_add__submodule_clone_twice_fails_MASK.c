
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_submodule ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int ,char*,int) ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(void)
{
 git_submodule *VAR_1;

 VAR_0 = FUNC_3("empty_standard_repo");


 FUNC_2(FUNC_5(&VAR_1, VAR_0, FUNC_0("testrepo.git"), "sm", 1));
 FUNC_2(FUNC_6(((void*)0), VAR_1, ((void*)0)));
 FUNC_2(FUNC_4(VAR_1));

 FUNC_1(FUNC_6(((void*)0), VAR_1, ((void*)0)));

 FUNC_7(VAR_1);
}
