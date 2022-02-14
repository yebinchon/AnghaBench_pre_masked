
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int VAR_0 ;

void FUNC_3(void)
{
 VAR_0 = FUNC_2("testrepo");
 FUNC_0(VAR_0, "refs/heads/master", 1);
 FUNC_0(VAR_0, "refs/heads/executable", 0);
 FUNC_1();
}
