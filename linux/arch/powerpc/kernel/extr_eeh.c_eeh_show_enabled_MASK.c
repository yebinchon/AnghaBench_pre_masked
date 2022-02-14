
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;

void FUNC_2(void)
{
 if (FUNC_0(VAR_1))
  FUNC_1("EEH: Recovery disabled by kernel parameter.\n");
 else if (FUNC_0(VAR_0))
  FUNC_1("EEH: Capable adapter found: recovery enabled.\n");
 else
  FUNC_1("EEH: No capable adapters found: recovery disabled.\n");
}
