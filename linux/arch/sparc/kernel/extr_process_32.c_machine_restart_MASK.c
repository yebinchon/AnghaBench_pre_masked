
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 char* VAR_0 ;
 char* FUNC_6 (char*,char) ;

void FUNC_7(char * VAR_1)
{
 char *VAR_2;

 FUNC_1();
 FUNC_2(8);
 FUNC_0();

 VAR_2 = FUNC_6 (VAR_0, '\n');
 if (VAR_2) *VAR_2 = 0;
 if (VAR_1)
  FUNC_5(VAR_1);
 if (*VAR_0)
  FUNC_5(VAR_0);
 FUNC_4 ("reset");
 FUNC_3("Reboot failed!");
}
