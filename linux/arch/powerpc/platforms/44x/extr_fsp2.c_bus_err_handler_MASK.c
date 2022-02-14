
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_27, void *VAR_28)
{
 FUNC_3("Bus Error\n");

 FUNC_0();

 FUNC_3("\nPLB6 Controller:\n");
 FUNC_3("BC_SHD: 0x%08x\n", FUNC_1(VAR_26));
 FUNC_3("BC_ERR: 0x%08x\n", FUNC_1(VAR_25));

 FUNC_3("\nPLB6-to-PLB4 Bridge:\n");
 FUNC_3("ESR:  0x%08x\n", FUNC_1(VAR_24));
 FUNC_3("EARH: 0x%08x\n", FUNC_1(VAR_22));
 FUNC_3("EARL: 0x%08x\n", FUNC_1(VAR_23));

 FUNC_3("\nPLB4-to-PLB6 Bridge:\n");
 FUNC_3("ESR:  0x%08x\n", FUNC_1(VAR_11));
 FUNC_3("EARH: 0x%08x\n", FUNC_1(VAR_9));
 FUNC_3("EARL: 0x%08x\n", FUNC_1(VAR_10));

 FUNC_3("\nPLB6-to-MCIF Bridge:\n");
 FUNC_3("BESR0: 0x%08x\n", FUNC_1(VAR_20));
 FUNC_3("BESR1: 0x%08x\n", FUNC_1(VAR_21));
 FUNC_3("BEARH: 0x%08x\n", FUNC_1(VAR_18));
 FUNC_3("BEARL: 0x%08x\n", FUNC_1(VAR_19));

 FUNC_3("\nPLB4 Arbiter:\n");
 FUNC_3("P0ESRH 0x%08x\n", FUNC_1(VAR_13));
 FUNC_3("P0ESRL 0x%08x\n", FUNC_1(VAR_14));
 FUNC_3("P0EARH 0x%08x\n", FUNC_1(VAR_12));
 FUNC_3("P0EARH 0x%08x\n", FUNC_1(VAR_12));
 FUNC_3("P1ESRH 0x%08x\n", FUNC_1(VAR_16));
 FUNC_3("P1ESRL 0x%08x\n", FUNC_1(VAR_17));
 FUNC_3("P1EARH 0x%08x\n", FUNC_1(VAR_15));
 FUNC_3("P1EARH 0x%08x\n", FUNC_1(VAR_15));

 FUNC_4(VAR_5, 0);
 FUNC_4(VAR_6, 1);
 FUNC_4(VAR_7, 2);
 FUNC_4(VAR_8, 3);

 FUNC_3("\nPLB4-to-AHB Bridge:\n");
 FUNC_3("ESR:   0x%08x\n", FUNC_1(VAR_2));
 FUNC_3("SEUAR: 0x%08x\n", FUNC_1(VAR_4));
 FUNC_3("SELAR: 0x%08x\n", FUNC_1(VAR_3));

 FUNC_3("\nAHB-to-PLB4 Bridge:\n");
 FUNC_3("\nESR: 0x%08x\n", FUNC_1(VAR_1));
 FUNC_3("\nEAR: 0x%08x\n", FUNC_1(VAR_0));
 FUNC_2("Bus Error\n");
}
