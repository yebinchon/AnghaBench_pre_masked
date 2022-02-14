
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_20, void *VAR_21) {
 FUNC_2("DDR: Uncorrectable Error\n");
 FUNC_2("MCSTAT:            0x%08x\n",
  FUNC_0(VAR_3 + VAR_14));
 FUNC_2("MCOPT1:            0x%08x\n",
  FUNC_0(VAR_3 + VAR_12));
 FUNC_2("MCOPT2:            0x%08x\n",
  FUNC_0(VAR_3 + VAR_13));
 FUNC_2("PHYSTAT:           0x%08x\n",
  FUNC_0(VAR_3 + VAR_15));
 FUNC_2("CFGR0:             0x%08x\n",
  FUNC_0(VAR_3 + VAR_4));
 FUNC_2("CFGR1:             0x%08x\n",
  FUNC_0(VAR_3 + VAR_5));
 FUNC_2("CFGR2:             0x%08x\n",
  FUNC_0(VAR_3 + VAR_6));
 FUNC_2("CFGR3:             0x%08x\n",
  FUNC_0(VAR_3 + VAR_7));
 FUNC_2("SCRUB_CNTL:        0x%08x\n",
  FUNC_0(VAR_3 + VAR_16));
 FUNC_2("ECCERR_PORT0:      0x%08x\n",
  FUNC_0(VAR_3 + VAR_10));
 FUNC_2("ECCERR_ADDR_PORT0: 0x%08x\n",
  FUNC_0(VAR_3 + VAR_8));
 FUNC_2("ECCERR_CNT_PORT0:  0x%08x\n",
  FUNC_0(VAR_3 + VAR_9));
 FUNC_2("ECC_CHECK_PORT0:   0x%08x\n",
  FUNC_0(VAR_3 + VAR_11));
 FUNC_2("MCER0:            0x%08x\n",
  FUNC_0(VAR_0 + VAR_1));
 FUNC_2("MCER1:            0x%08x\n",
  FUNC_0(VAR_0 + VAR_2));
 FUNC_2("BESR:             0x%08x\n",
  FUNC_0(VAR_19));
 FUNC_2("BEARL:            0x%08x\n",
  FUNC_0(VAR_18));
 FUNC_2("BEARH:            0x%08x\n",
  FUNC_0(VAR_17));
 FUNC_1("DDR: Uncorrectable Error\n");
}
