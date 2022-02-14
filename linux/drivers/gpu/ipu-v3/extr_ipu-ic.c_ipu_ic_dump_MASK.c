
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu_soc {int dev; } ;
struct ipu_ic_priv {struct ipu_soc* ipu; } ;
struct ipu_ic {struct ipu_ic_priv* priv; } ;


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
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct ipu_ic*,int ) ;

void FUNC_2(struct ipu_ic *VAR_10)
{
 struct ipu_ic_priv *VAR_11 = VAR_10->priv;
 struct ipu_soc *VAR_12 = VAR_11->ipu;

 FUNC_0(VAR_12->dev, "IC_CONF = \t0x%08X\n",
  FUNC_1(VAR_10, VAR_2));
 FUNC_0(VAR_12->dev, "IC_PRP_ENC_RSC = \t0x%08X\n",
  FUNC_1(VAR_10, VAR_8));
 FUNC_0(VAR_12->dev, "IC_PRP_VF_RSC = \t0x%08X\n",
  FUNC_1(VAR_10, VAR_9));
 FUNC_0(VAR_12->dev, "IC_PP_RSC = \t0x%08X\n",
  FUNC_1(VAR_10, VAR_7));
 FUNC_0(VAR_12->dev, "IC_CMBP_1 = \t0x%08X\n",
  FUNC_1(VAR_10, VAR_0));
 FUNC_0(VAR_12->dev, "IC_CMBP_2 = \t0x%08X\n",
  FUNC_1(VAR_10, VAR_1));
 FUNC_0(VAR_12->dev, "IC_IDMAC_1 = \t0x%08X\n",
  FUNC_1(VAR_10, VAR_3));
 FUNC_0(VAR_12->dev, "IC_IDMAC_2 = \t0x%08X\n",
  FUNC_1(VAR_10, VAR_4));
 FUNC_0(VAR_12->dev, "IC_IDMAC_3 = \t0x%08X\n",
  FUNC_1(VAR_10, VAR_5));
 FUNC_0(VAR_12->dev, "IC_IDMAC_4 = \t0x%08X\n",
  FUNC_1(VAR_10, VAR_6));
}
