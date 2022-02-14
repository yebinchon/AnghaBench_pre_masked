
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_config ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int **,int ) ;

void FUNC_7(void)
{
 git_config *VAR_1;

 FUNC_2();
 VAR_0 = FUNC_3("testrepo");


 FUNC_1(FUNC_6(&VAR_1, VAR_0));
 FUNC_1(FUNC_5(VAR_1, "core.logallrefupdates", 0));
 FUNC_4(VAR_1);

 FUNC_0();
}
