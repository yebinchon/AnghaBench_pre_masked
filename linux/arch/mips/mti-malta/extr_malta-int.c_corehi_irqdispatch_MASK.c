
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int cp0_badvaddr; int cp0_cause; int cp0_status; int cp0_epc; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int FUNC_0 (int ) ;






 int FUNC_1 (char*,struct pt_regs*) ;
 struct pt_regs* FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_11 ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static void FUNC_5(void)
{
 unsigned int VAR_12, VAR_13, VAR_14, VAR_15;
 unsigned int VAR_16, VAR_17, VAR_18, VAR_19;
 unsigned int VAR_20, VAR_21, VAR_22;
 struct pt_regs *VAR_23 = FUNC_2();

 FUNC_4("CoreHI interrupt, shouldn't happen, we die here!\n");
 FUNC_4("epc	 : %08lx\nStatus: %08lx\n"
   "Cause : %08lx\nbadVaddr : %08lx\n",
   VAR_23->cp0_epc, VAR_23->cp0_status,
   VAR_23->cp0_cause, VAR_23->cp0_badvaddr);






 switch (VAR_11) {
 case 130:
 case 131:
 case 129:
 case 128:
  FUNC_3();
  break;
 case 132:
  VAR_20 = FUNC_0(VAR_10);
  VAR_21 = FUNC_0(VAR_9);
  VAR_22 = FUNC_0(VAR_8);
  FUNC_4("GT_INTRCAUSE = %08x\n", VAR_20);
  FUNC_4("GT_CPUERR_ADDR = %02x%08x\n",
    VAR_22, VAR_21);
  break;
 case 133:
  VAR_15 = VAR_5;
  VAR_16 = VAR_7;
  VAR_17 = VAR_2;
  VAR_18 = VAR_1;
  VAR_19 = VAR_3;
  VAR_12 = VAR_0;
  VAR_13 = VAR_4;
  VAR_14 = VAR_6;
  FUNC_4("BONITO_INTISR = %08x\n", VAR_17);
  FUNC_4("BONITO_INTEN = %08x\n", VAR_18);
  FUNC_4("BONITO_INTPOL = %08x\n", VAR_19);
  FUNC_4("BONITO_INTEDGE = %08x\n", VAR_12);
  FUNC_4("BONITO_INTSTEER = %08x\n", VAR_13);
  FUNC_4("BONITO_PCICMD = %08x\n", VAR_14);
  FUNC_4("BONITO_PCIBADADDR = %08x\n", VAR_15);
  FUNC_4("BONITO_PCIMSTAT = %08x\n", VAR_16);
  break;
 }

 FUNC_1("CoreHi interrupt", VAR_23);
}
