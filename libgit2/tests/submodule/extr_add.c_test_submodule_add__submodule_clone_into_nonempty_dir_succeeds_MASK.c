
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_submodule ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int VAR_0 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ,int ,char*,int) ;
 int FUNC_9 (int *,int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,int) ;

void FUNC_12(void)
{
 git_submodule *VAR_1;

 VAR_0 = FUNC_5("empty_standard_repo");

 FUNC_4(FUNC_11("empty_standard_repo/sm", 0777));
 FUNC_3("empty_standard_repo/sm/foobar", "");


 FUNC_4(FUNC_8(&VAR_1, VAR_0, FUNC_2("testrepo.git"), "sm", 1));
 FUNC_4(FUNC_9(((void*)0), VAR_1, ((void*)0)));
 FUNC_4(FUNC_7(VAR_1));

 FUNC_1(FUNC_6("empty_standard_repo/sm/foobar"));

 FUNC_0(VAR_0, "sm");

 FUNC_10(VAR_1);
}
