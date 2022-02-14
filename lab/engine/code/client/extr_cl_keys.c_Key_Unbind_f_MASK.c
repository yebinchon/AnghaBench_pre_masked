
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int ) ;

void FUNC_5 (void)
{
 int VAR_0;

 if (FUNC_0() != 2)
 {
  FUNC_2 ("unbind <key> : remove commands from a key\n");
  return;
 }

 VAR_0 = FUNC_4 (FUNC_1(1));
 if (VAR_0==-1)
 {
  FUNC_2 ("\"%s\" isn't a valid key\n", FUNC_1(1));
  return;
 }

 FUNC_3 (VAR_0, "");
}
