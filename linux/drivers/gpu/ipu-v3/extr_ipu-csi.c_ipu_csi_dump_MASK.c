
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipu_csi {TYPE_1__* ipu; } ;
struct TYPE_2__ {int dev; } ;


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
 int FUNC_1 (struct ipu_csi*,int ) ;

void FUNC_2(struct ipu_csi *VAR_10)
{
 FUNC_0(VAR_10->ipu->dev, "CSI_SENS_CONF:     %08x\n",
  FUNC_1(VAR_10, VAR_6));
 FUNC_0(VAR_10->ipu->dev, "CSI_SENS_FRM_SIZE: %08x\n",
  FUNC_1(VAR_10, VAR_7));
 FUNC_0(VAR_10->ipu->dev, "CSI_ACT_FRM_SIZE:  %08x\n",
  FUNC_1(VAR_10, VAR_0));
 FUNC_0(VAR_10->ipu->dev, "CSI_OUT_FRM_CTRL:  %08x\n",
  FUNC_1(VAR_10, VAR_5));
 FUNC_0(VAR_10->ipu->dev, "CSI_TST_CTRL:      %08x\n",
  FUNC_1(VAR_10, VAR_9));
 FUNC_0(VAR_10->ipu->dev, "CSI_CCIR_CODE_1:   %08x\n",
  FUNC_1(VAR_10, VAR_1));
 FUNC_0(VAR_10->ipu->dev, "CSI_CCIR_CODE_2:   %08x\n",
  FUNC_1(VAR_10, VAR_2));
 FUNC_0(VAR_10->ipu->dev, "CSI_CCIR_CODE_3:   %08x\n",
  FUNC_1(VAR_10, VAR_3));
 FUNC_0(VAR_10->ipu->dev, "CSI_MIPI_DI:       %08x\n",
  FUNC_1(VAR_10, VAR_4));
 FUNC_0(VAR_10->ipu->dev, "CSI_SKIP:          %08x\n",
  FUNC_1(VAR_10, VAR_8));
}
