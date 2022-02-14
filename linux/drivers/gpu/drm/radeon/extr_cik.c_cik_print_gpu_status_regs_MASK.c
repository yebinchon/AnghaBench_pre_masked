
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dev; } ;


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
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_21)
{
 FUNC_1(VAR_21->dev, "  GRBM_STATUS=0x%08X\n",
  FUNC_0(VAR_10));
 FUNC_1(VAR_21->dev, "  GRBM_STATUS2=0x%08X\n",
  FUNC_0(VAR_11));
 FUNC_1(VAR_21->dev, "  GRBM_STATUS_SE0=0x%08X\n",
  FUNC_0(VAR_12));
 FUNC_1(VAR_21->dev, "  GRBM_STATUS_SE1=0x%08X\n",
  FUNC_0(VAR_13));
 FUNC_1(VAR_21->dev, "  GRBM_STATUS_SE2=0x%08X\n",
  FUNC_0(VAR_14));
 FUNC_1(VAR_21->dev, "  GRBM_STATUS_SE3=0x%08X\n",
  FUNC_0(VAR_15));
 FUNC_1(VAR_21->dev, "  SRBM_STATUS=0x%08X\n",
  FUNC_0(VAR_19));
 FUNC_1(VAR_21->dev, "  SRBM_STATUS2=0x%08X\n",
  FUNC_0(VAR_20));
 FUNC_1(VAR_21->dev, "  SDMA0_STATUS_REG   = 0x%08X\n",
  FUNC_0(VAR_17 + VAR_16));
 FUNC_1(VAR_21->dev, "  SDMA1_STATUS_REG   = 0x%08X\n",
   FUNC_0(VAR_17 + VAR_18));
 FUNC_1(VAR_21->dev, "  CP_STAT = 0x%08x\n", FUNC_0(VAR_9));
 FUNC_1(VAR_21->dev, "  CP_STALLED_STAT1 = 0x%08x\n",
   FUNC_0(VAR_6));
 FUNC_1(VAR_21->dev, "  CP_STALLED_STAT2 = 0x%08x\n",
   FUNC_0(VAR_7));
 FUNC_1(VAR_21->dev, "  CP_STALLED_STAT3 = 0x%08x\n",
   FUNC_0(VAR_8));
 FUNC_1(VAR_21->dev, "  CP_CPF_BUSY_STAT = 0x%08x\n",
   FUNC_0(VAR_3));
 FUNC_1(VAR_21->dev, "  CP_CPF_STALLED_STAT1 = 0x%08x\n",
   FUNC_0(VAR_4));
 FUNC_1(VAR_21->dev, "  CP_CPF_STATUS = 0x%08x\n", FUNC_0(VAR_5));
 FUNC_1(VAR_21->dev, "  CP_CPC_BUSY_STAT = 0x%08x\n", FUNC_0(VAR_0));
 FUNC_1(VAR_21->dev, "  CP_CPC_STALLED_STAT1 = 0x%08x\n",
   FUNC_0(VAR_1));
 FUNC_1(VAR_21->dev, "  CP_CPC_STATUS = 0x%08x\n", FUNC_0(VAR_2));
}
