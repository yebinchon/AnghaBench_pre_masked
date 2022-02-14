
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {scalar_t__ family; int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int ,char*,int ) ;

void FUNC_2(struct radeon_device *VAR_11)
{
 FUNC_1(VAR_11->dev, "  GRBM_STATUS               = 0x%08X\n",
  FUNC_0(VAR_6));
 FUNC_1(VAR_11->dev, "  GRBM_STATUS_SE0           = 0x%08X\n",
  FUNC_0(VAR_7));
 FUNC_1(VAR_11->dev, "  GRBM_STATUS_SE1           = 0x%08X\n",
  FUNC_0(VAR_8));
 FUNC_1(VAR_11->dev, "  SRBM_STATUS               = 0x%08X\n",
  FUNC_0(VAR_9));
 FUNC_1(VAR_11->dev, "  SRBM_STATUS2              = 0x%08X\n",
  FUNC_0(VAR_10));
 FUNC_1(VAR_11->dev, "  R_008674_CP_STALLED_STAT1 = 0x%08X\n",
  FUNC_0(VAR_2));
 FUNC_1(VAR_11->dev, "  R_008678_CP_STALLED_STAT2 = 0x%08X\n",
  FUNC_0(VAR_3));
 FUNC_1(VAR_11->dev, "  R_00867C_CP_BUSY_STAT     = 0x%08X\n",
  FUNC_0(VAR_1));
 FUNC_1(VAR_11->dev, "  R_008680_CP_STAT          = 0x%08X\n",
  FUNC_0(VAR_4));
 FUNC_1(VAR_11->dev, "  R_00D034_DMA_STATUS_REG   = 0x%08X\n",
  FUNC_0(VAR_5));
 if (VAR_11->family >= VAR_0) {
  FUNC_1(VAR_11->dev, "  R_00D834_DMA_STATUS_REG   = 0x%08X\n",
    FUNC_0(VAR_5 + 0x800));
 }
}
