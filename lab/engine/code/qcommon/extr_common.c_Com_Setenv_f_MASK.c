
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 char* FUNC_1 (int) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char*,...) ;
 int FUNC_4 (char*,char*) ;
 char* FUNC_5 (char*) ;

void FUNC_6(void)
{
 int VAR_0 = FUNC_0();
 char *VAR_1 = FUNC_2(1);

 if(VAR_0 > 2)
 {
  char *VAR_2 = FUNC_1(2);

  FUNC_4(VAR_1, VAR_2);
 }
 else if(VAR_0 == 2)
 {
  char *VAR_3 = FUNC_5(VAR_1);

  if(VAR_3)
   FUNC_3("%s=%s\n", VAR_1, VAR_3);
  else
   FUNC_3("%s undefined\n", VAR_1);
        }
}
