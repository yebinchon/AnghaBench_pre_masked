
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (char*,...) ;
 unsigned long FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 unsigned long FUNC_9 () ;
 scalar_t__ FUNC_10 () ;
 unsigned long FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 (int) ;
 int FUNC_19 (int) ;

void FUNC_20(unsigned long VAR_5)
{
 unsigned long VAR_6;
 unsigned long VAR_7;
 unsigned long VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 unsigned long VAR_13;
 unsigned long VAR_14;

 FUNC_3(VAR_6);
 VAR_7 = FUNC_0();
 FUNC_4("=== MIPS MT State Dump ===\n");
 FUNC_4("-- Global State --\n");
 FUNC_4("   MVPControl Passed: %08lx\n", VAR_5);
 FUNC_4("   MVPControl Read: %08lx\n", VAR_7);
 FUNC_4("   MVPConf0 : %08lx\n", (VAR_8 = FUNC_5()));
 VAR_9 = ((VAR_8 & VAR_2) >> VAR_3) + 1;
 VAR_10 = ((VAR_8 & VAR_0) >> VAR_1) + 1;
 FUNC_4("-- per-VPE State --\n");
 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
  for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
   FUNC_18(VAR_12);
   if ((FUNC_7() & VAR_4) == VAR_11) {
    FUNC_4("  VPE %d\n", VAR_11);
    FUNC_4("   VPEControl : %08lx\n",
           FUNC_17());
    FUNC_4("   VPEConf0 : %08lx\n",
           FUNC_16());
    FUNC_4("   VPE%d.Status : %08lx\n",
           VAR_11, FUNC_15());
    FUNC_4("   VPE%d.EPC : %08lx %pS\n",
           VAR_11, FUNC_14(),
           (void *) FUNC_14());
    FUNC_4("   VPE%d.Cause : %08lx\n",
           VAR_11, FUNC_12());
    FUNC_4("   VPE%d.Config7 : %08lx\n",
           VAR_11, FUNC_13());
    break;
   }
  }
 }
 FUNC_4("-- per-TC State --\n");
 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
  FUNC_18(VAR_12);
  if (FUNC_7() == FUNC_6()) {

   VAR_13 = 0;
   VAR_14 = VAR_6;
   FUNC_4("  TC %d (current TC with VPE EPC above)\n", VAR_12);
  } else {
   VAR_13 = FUNC_9();
   FUNC_19(1);
   VAR_14 = FUNC_11();
   FUNC_4("  TC %d\n", VAR_12);
  }
  FUNC_4("   TCStatus : %08lx\n", VAR_14);
  FUNC_4("   TCBind : %08lx\n", FUNC_7());
  FUNC_4("   TCRestart : %08lx %pS\n",
         FUNC_10(), (void *) FUNC_10());
  FUNC_4("   TCHalt : %08lx\n", VAR_13);
  FUNC_4("   TCContext : %08lx\n", FUNC_8());
  if (!VAR_13)
   FUNC_19(0);
 }
 FUNC_4("===========================\n");
 FUNC_1(VAR_7);
 FUNC_2(VAR_6);
}
