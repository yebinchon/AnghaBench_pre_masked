
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct psb_state {void* saveDSPBCURSOR_POS; void* saveDSPBCURSOR_BASE; void* saveDSPBCURSOR_CTRL; } ;
struct psb_pipe {void** palette; void* tileoff; void* linoff; void* surf; void* addr; void* stride; void* cntr; void* vsync; void* vblank; void* vtotal; void* hsync; void* hblank; void* htotal; void* src; void* conf; } ;
struct oaktrail_hdmi_dev {void* savePCH_VSYNC_B; void* savePCH_VBLANK_B; void* savePCH_VTOTAL_B; void* savePCH_HSYNC_B; void* savePCH_HBLANK_B; void* savePCH_HTOTAL_B; void* savePCH_PIPEBSRC; void* savePCH_PIPEBCONF; void* saveDPLL_CLK_ENABLE; void* saveDPLL_UPDATE; void* saveDPLL_ADJUST; void* saveDPLL_DIV_CTRL; void* saveDPLL_CTRL; } ;
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
 scalar_t__ VAR_27 ;
 void* FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;

void FUNC_1(struct drm_device *VAR_31)
{
 struct drm_psb_private *VAR_32 = VAR_31->dev_private;
 struct oaktrail_hdmi_dev *VAR_33 = VAR_32->hdmi_priv;
 struct psb_state *VAR_34 = &VAR_32->regs.psb;
 struct psb_pipe *VAR_35 = &VAR_32->regs.pipe[1];
 int VAR_36;


 VAR_33->saveDPLL_CTRL = FUNC_0(VAR_5);
 VAR_33->saveDPLL_DIV_CTRL = FUNC_0(VAR_6);
 VAR_33->saveDPLL_ADJUST = FUNC_0(VAR_3);
 VAR_33->saveDPLL_UPDATE = FUNC_0(VAR_7);
 VAR_33->saveDPLL_CLK_ENABLE = FUNC_0(VAR_4);


 VAR_35->conf = FUNC_0(VAR_26);
 VAR_35->src = FUNC_0(VAR_27);
 VAR_35->htotal = FUNC_0(VAR_16);
 VAR_35->hblank = FUNC_0(VAR_14);
 VAR_35->hsync = FUNC_0(VAR_15);
 VAR_35->vtotal = FUNC_0(VAR_30);
 VAR_35->vblank = FUNC_0(VAR_28);
 VAR_35->vsync = FUNC_0(VAR_29);

 VAR_33->savePCH_PIPEBCONF = FUNC_0(VAR_21);
 VAR_33->savePCH_PIPEBSRC = FUNC_0(VAR_22);
 VAR_33->savePCH_HTOTAL_B = FUNC_0(VAR_20);
 VAR_33->savePCH_HBLANK_B = FUNC_0(VAR_18);
 VAR_33->savePCH_HSYNC_B = FUNC_0(VAR_19);
 VAR_33->savePCH_VTOTAL_B = FUNC_0(VAR_25);
 VAR_33->savePCH_VBLANK_B = FUNC_0(VAR_23);
 VAR_33->savePCH_VSYNC_B = FUNC_0(VAR_24);


 VAR_35->cntr = FUNC_0(VAR_9);
 VAR_35->stride = FUNC_0(VAR_11);
 VAR_35->addr = FUNC_0(VAR_8);
 VAR_35->surf = FUNC_0(VAR_12);
 VAR_35->linoff = FUNC_0(VAR_10);
 VAR_35->tileoff = FUNC_0(VAR_13);


 VAR_34->saveDSPBCURSOR_CTRL = FUNC_0(VAR_1);
 VAR_34->saveDSPBCURSOR_BASE = FUNC_0(VAR_0);
 VAR_34->saveDSPBCURSOR_POS = FUNC_0(VAR_2);


 for (VAR_36 = 0; VAR_36 < 256; VAR_36++)
  VAR_35->palette[VAR_36] = FUNC_0(VAR_17 + (VAR_36 << 2));
}
