
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,...) ;
 int VAR_0 ;
 int FUNC_4 (char*,int,char*,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_1)
{
 time_t VAR_2;
 char VAR_3[1024];

 FUNC_0();
 FUNC_3("\n---------------------------------------------\n");
 VAR_2 = FUNC_5(((void*)0));
 FUNC_4(VAR_3, 1024, "Time: %d %b %H:%M", FUNC_2(&VAR_2));
 FUNC_3("%s\n", VAR_3);
 FUNC_3("%s\n", VAR_1);
 FUNC_3("---------------------------------------------\n");
 FUNC_1(VAR_0);
}
