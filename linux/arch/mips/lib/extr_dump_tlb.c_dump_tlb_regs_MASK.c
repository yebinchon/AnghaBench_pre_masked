
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int const,...) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;

void FUNC_14(void)
{
 const int VAR_5 = 2 * sizeof(unsigned long);

 FUNC_1("Index    : %0x\n", FUNC_7());
 FUNC_1("PageMask : %0x\n", FUNC_9());
 if (VAR_0)
  FUNC_1("GuestCtl1: %0x\n", FUNC_6());
 FUNC_1("EntryHi  : %0*lx\n", VAR_5, FUNC_2());
 FUNC_1("EntryLo0 : %0*lx\n", VAR_5, FUNC_3());
 FUNC_1("EntryLo1 : %0*lx\n", VAR_5, FUNC_4());
 FUNC_1("Wired    : %0x\n", FUNC_13());
 switch (FUNC_0()) {
 case 131:
 case 130:
 case 129:
 case 128:
  FUNC_1("FrameMask: %0x\n", FUNC_5());
  break;
 }
 if (VAR_3 || VAR_2 || VAR_4)
  FUNC_1("PageGrain: %0x\n", FUNC_8());
 if (VAR_1) {
  FUNC_1("PWField  : %0*lx\n", VAR_5, FUNC_11());
  FUNC_1("PWSize   : %0*lx\n", VAR_5, FUNC_12());
  FUNC_1("PWCtl    : %0x\n", FUNC_10());
 }
}
