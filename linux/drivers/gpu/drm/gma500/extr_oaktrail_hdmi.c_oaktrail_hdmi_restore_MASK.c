
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct psb_state {int saveDSPBCURSOR_BASE; int saveDSPBCURSOR_POS; int saveDSPBCURSOR_CTRL; } ;
struct psb_pipe {int * palette; int surf; int cntr; int tileoff; int stride; int linoff; int conf; int vsync; int vblank; int vtotal; int hsync; int hblank; int htotal; int src; } ;
struct oaktrail_hdmi_dev {int savePCH_PIPEBCONF; int savePCH_VSYNC_B; int savePCH_VBLANK_B; int savePCH_VTOTAL_B; int savePCH_HSYNC_B; int savePCH_HBLANK_B; int savePCH_HTOTAL_B; int savePCH_PIPEBSRC; int saveDPLL_CLK_ENABLE; int saveDPLL_UPDATE; int saveDPLL_ADJUST; int saveDPLL_DIV_CTRL; int saveDPLL_CTRL; } ;
struct TYPE_2__ {struct psb_pipe* pipe; struct psb_state psb; } ;
struct drm_psb_private {TYPE_1__ regs; struct oaktrail_hdmi_dev* hdmi_priv; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;


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
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 int FUNC_1 (int) ;

void FUNC_2(struct drm_device *VAR_30)
{
 struct drm_psb_private *VAR_31 = VAR_30->dev_private;
 struct oaktrail_hdmi_dev *VAR_32 = VAR_31->hdmi_priv;
 struct psb_state *VAR_33 = &VAR_31->regs.psb;
 struct psb_pipe *VAR_34 = &VAR_31->regs.pipe[1];
 int VAR_35;


 FUNC_0(VAR_32->saveDPLL_CTRL, VAR_5);
 FUNC_0(VAR_32->saveDPLL_DIV_CTRL, VAR_6);
 FUNC_0(VAR_32->saveDPLL_ADJUST, VAR_3);
 FUNC_0(VAR_32->saveDPLL_UPDATE, VAR_7);
 FUNC_0(VAR_32->saveDPLL_CLK_ENABLE, VAR_4);
 FUNC_1(150);


 FUNC_0(VAR_34->src, VAR_26);
 FUNC_0(VAR_34->htotal, VAR_15);
 FUNC_0(VAR_34->hblank, VAR_13);
 FUNC_0(VAR_34->hsync, VAR_14);
 FUNC_0(VAR_34->vtotal, VAR_29);
 FUNC_0(VAR_34->vblank, VAR_27);
 FUNC_0(VAR_34->vsync, VAR_28);

 FUNC_0(VAR_32->savePCH_PIPEBSRC, VAR_21);
 FUNC_0(VAR_32->savePCH_HTOTAL_B, VAR_19);
 FUNC_0(VAR_32->savePCH_HBLANK_B, VAR_17);
 FUNC_0(VAR_32->savePCH_HSYNC_B, VAR_18);
 FUNC_0(VAR_32->savePCH_VTOTAL_B, VAR_24);
 FUNC_0(VAR_32->savePCH_VBLANK_B, VAR_22);
 FUNC_0(VAR_32->savePCH_VSYNC_B, VAR_23);

 FUNC_0(VAR_34->conf, VAR_25);
 FUNC_0(VAR_32->savePCH_PIPEBCONF, VAR_20);


 FUNC_0(VAR_34->linoff, VAR_9);
 FUNC_0(VAR_34->stride, VAR_10);
 FUNC_0(VAR_34->tileoff, VAR_12);
 FUNC_0(VAR_34->cntr, VAR_8);
 FUNC_0(VAR_34->surf, VAR_11);


 FUNC_0(VAR_33->saveDSPBCURSOR_CTRL, VAR_1);
 FUNC_0(VAR_33->saveDSPBCURSOR_POS, VAR_2);
 FUNC_0(VAR_33->saveDSPBCURSOR_BASE, VAR_0);


 for (VAR_35 = 0; VAR_35 < 256; VAR_35++)
  FUNC_0(VAR_34->palette[VAR_35], VAR_16 + (VAR_35 << 2));
}
