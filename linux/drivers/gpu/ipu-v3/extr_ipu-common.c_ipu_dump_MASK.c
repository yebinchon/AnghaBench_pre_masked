
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu_soc {int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,int,...) ;
 int FUNC_6 (struct ipu_soc*,int ) ;
 int FUNC_7 (struct ipu_soc*,int ) ;

void FUNC_8(struct ipu_soc *VAR_6)
{
 int VAR_7;

 FUNC_5(VAR_6->dev, "IPU_CONF = \t0x%08X\n",
  FUNC_6(VAR_6, VAR_1));
 FUNC_5(VAR_6->dev, "IDMAC_CONF = \t0x%08X\n",
  FUNC_7(VAR_6, VAR_0));
 FUNC_5(VAR_6->dev, "IDMAC_CHA_EN1 = \t0x%08X\n",
  FUNC_7(VAR_6, FUNC_1(0)));
 FUNC_5(VAR_6->dev, "IDMAC_CHA_EN2 = \t0x%08X\n",
  FUNC_7(VAR_6, FUNC_1(32)));
 FUNC_5(VAR_6->dev, "IDMAC_CHA_PRI1 = \t0x%08X\n",
  FUNC_7(VAR_6, FUNC_2(0)));
 FUNC_5(VAR_6->dev, "IDMAC_CHA_PRI2 = \t0x%08X\n",
  FUNC_7(VAR_6, FUNC_2(32)));
 FUNC_5(VAR_6->dev, "IDMAC_BAND_EN1 = \t0x%08X\n",
  FUNC_7(VAR_6, FUNC_0(0)));
 FUNC_5(VAR_6->dev, "IDMAC_BAND_EN2 = \t0x%08X\n",
  FUNC_7(VAR_6, FUNC_0(32)));
 FUNC_5(VAR_6->dev, "IPU_CHA_DB_MODE_SEL0 = \t0x%08X\n",
  FUNC_6(VAR_6, FUNC_3(0)));
 FUNC_5(VAR_6->dev, "IPU_CHA_DB_MODE_SEL1 = \t0x%08X\n",
  FUNC_6(VAR_6, FUNC_3(32)));
 FUNC_5(VAR_6->dev, "IPU_FS_PROC_FLOW1 = \t0x%08X\n",
  FUNC_6(VAR_6, VAR_3));
 FUNC_5(VAR_6->dev, "IPU_FS_PROC_FLOW2 = \t0x%08X\n",
  FUNC_6(VAR_6, VAR_4));
 FUNC_5(VAR_6->dev, "IPU_FS_PROC_FLOW3 = \t0x%08X\n",
  FUNC_6(VAR_6, VAR_5));
 FUNC_5(VAR_6->dev, "IPU_FS_DISP_FLOW1 = \t0x%08X\n",
  FUNC_6(VAR_6, VAR_2));
 for (VAR_7 = 0; VAR_7 < 15; VAR_7++)
  FUNC_5(VAR_6->dev, "IPU_INT_CTRL(%d) = \t%08X\n", VAR_7,
   FUNC_6(VAR_6, FUNC_4(VAR_7)));
}
