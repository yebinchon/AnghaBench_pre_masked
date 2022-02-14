
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cvar_t ;


 int FUNC_0 () ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (int *) ;

void FUNC_5(void)
{
 char *VAR_0;
 cvar_t *VAR_1;

 if(FUNC_0() != 2)
 {
  FUNC_2 ("usage: print <variable>\n");
  return;
 }

 VAR_0 = FUNC_1(1);

 VAR_1 = FUNC_3(VAR_0);

 if(VAR_1)
  FUNC_4(VAR_1);
 else
  FUNC_2 ("Cvar %s does not exist.\n", VAR_0);
}
