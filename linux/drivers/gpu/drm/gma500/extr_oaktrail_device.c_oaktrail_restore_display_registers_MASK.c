
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int saveDSPARB; int saveDSPFW1; int saveDSPFW2; int saveDSPFW3; int saveDSPFW4; int saveDSPFW5; int saveDSPFW6; int saveCHICKENBIT; int saveBCLRPAT_A; int savePERF_MODE; int saveDSPACURSOR_CTRL; int saveDSPACURSOR_POS; int saveDSPACURSOR_BASE; int saveLVDS; int savePFIT_CONTROL; int savePFIT_PGM_RATIOS; int savePFIT_AUTO_RATIOS; int savePP_ON_DELAYS; int savePP_OFF_DELAYS; int savePP_DIVISOR; int savePP_CONTROL; int saveOV_OVADD; int saveOV_OGAMC0; int saveOV_OGAMC1; int saveOV_OGAMC2; int saveOV_OGAMC3; int saveOV_OGAMC4; int saveOV_OGAMC5; int saveHISTOGRAM_INT_CONTROL_REG; int saveHISTOGRAM_LOGIC_CONTROL_REG; int savePWM_CONTROL_LOGIC; } ;
struct psb_save_area {int saveBLC_PWM_CTL2; int saveBLC_PWM_CTL; TYPE_1__ psb; struct psb_pipe* pipe; } ;
struct psb_pipe {int fp0; int fp1; int dpll; int htotal; int hblank; int hsync; int vtotal; int vblank; int vsync; int src; int conf; int linoff; int stride; int tileoff; int cntr; int surf; int* palette; } ;
struct drm_psb_private {scalar_t__ iLVDS_enable; scalar_t__ hdmi_priv; struct psb_save_area regs; } ;
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
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 scalar_t__ VAR_45 ;
 int VAR_46 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,scalar_t__) ;
 scalar_t__ VAR_47 ;
 scalar_t__ VAR_48 ;
 scalar_t__ VAR_49 ;
 scalar_t__ VAR_50 ;
 scalar_t__ VAR_51 ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct drm_device *VAR_52)
{
 struct drm_psb_private *VAR_53 = VAR_52->dev_private;
 struct psb_save_area *VAR_54 = &VAR_53->regs;
 struct psb_pipe *VAR_55 = &VAR_54->pipe[0];
 u32 VAR_56;
 int VAR_57;


 FUNC_1(VAR_54->psb.saveDSPARB, VAR_8);
 FUNC_1(VAR_54->psb.saveDSPFW1, VAR_13);
 FUNC_1(VAR_54->psb.saveDSPFW2, VAR_14);
 FUNC_1(VAR_54->psb.saveDSPFW3, VAR_15);
 FUNC_1(VAR_54->psb.saveDSPFW4, VAR_16);
 FUNC_1(VAR_54->psb.saveDSPFW5, VAR_17);
 FUNC_1(VAR_54->psb.saveDSPFW6, VAR_18);
 FUNC_1(VAR_54->psb.saveCHICKENBIT, VAR_12);


 FUNC_1(0x80000000, VAR_49);


 FUNC_1(VAR_55->fp0, VAR_28);
 FUNC_1(VAR_55->fp1, VAR_29);


 FUNC_1(VAR_55->dpll, VAR_27);
 FUNC_3(150);


 FUNC_1(VAR_55->htotal, VAR_23);
 FUNC_1(VAR_55->hblank, VAR_19);
 FUNC_1(VAR_55->hsync, VAR_22);
 FUNC_1(VAR_55->vtotal, VAR_51);
 FUNC_1(VAR_55->vblank, VAR_48);
 FUNC_1(VAR_55->vsync, VAR_50);
 FUNC_1(VAR_55->src, VAR_43);
 FUNC_1(VAR_54->psb.saveBCLRPAT_A, VAR_0);


 FUNC_1(VAR_54->psb.savePERF_MODE, VAR_30);


 if (VAR_53->iLVDS_enable)
  FUNC_1(VAR_55->conf, VAR_42);


 FUNC_1(VAR_55->linoff, VAR_7);
 FUNC_1(VAR_55->stride, VAR_9);
 FUNC_1(VAR_55->tileoff, VAR_11);


 FUNC_1(VAR_55->cntr, VAR_6);
 FUNC_1(VAR_55->surf, VAR_10);


 FUNC_1(VAR_54->psb.saveDSPACURSOR_CTRL, VAR_4);
 FUNC_1(VAR_54->psb.saveDSPACURSOR_POS, VAR_5);
 FUNC_1(VAR_54->psb.saveDSPACURSOR_BASE, VAR_3);


 for (VAR_57 = 0; VAR_57 < 256; VAR_57++)
  FUNC_1(VAR_55->palette[VAR_57], VAR_38 + (VAR_57 << 2));

 if (VAR_53->hdmi_priv)
  FUNC_2(VAR_52);

 if (VAR_53->iLVDS_enable) {
  FUNC_1(VAR_54->saveBLC_PWM_CTL2, VAR_2);
  FUNC_1(VAR_54->psb.saveLVDS, VAR_24);
  FUNC_1(VAR_54->psb.savePFIT_CONTROL, VAR_40);
  FUNC_1(VAR_54->psb.savePFIT_PGM_RATIOS, VAR_41);
  FUNC_1(VAR_54->psb.savePFIT_AUTO_RATIOS, VAR_39);
  FUNC_1(VAR_54->saveBLC_PWM_CTL, VAR_1);
  FUNC_1(VAR_54->psb.savePP_ON_DELAYS, VAR_26);
  FUNC_1(VAR_54->psb.savePP_OFF_DELAYS, VAR_25);
  FUNC_1(VAR_54->psb.savePP_DIVISOR, VAR_45);
  FUNC_1(VAR_54->psb.savePP_CONTROL, VAR_44);
 }


 do {
  VAR_56 = FUNC_0(VAR_46);
 } while (VAR_56 & 0x08000000);


 do {
  VAR_56 = FUNC_0(VAR_46);
 } while (VAR_56 & 0x10000000);


 FUNC_1(VAR_54->psb.saveOV_OVADD, VAR_37);
 FUNC_1(VAR_54->psb.saveOV_OGAMC0, VAR_31);
 FUNC_1(VAR_54->psb.saveOV_OGAMC1, VAR_32);
 FUNC_1(VAR_54->psb.saveOV_OGAMC2, VAR_33);
 FUNC_1(VAR_54->psb.saveOV_OGAMC3, VAR_34);
 FUNC_1(VAR_54->psb.saveOV_OGAMC4, VAR_35);
 FUNC_1(VAR_54->psb.saveOV_OGAMC5, VAR_36);


 FUNC_1(VAR_54->psb.saveHISTOGRAM_INT_CONTROL_REG,
      VAR_20);
 FUNC_1(VAR_54->psb.saveHISTOGRAM_LOGIC_CONTROL_REG,
      VAR_21);
 FUNC_1(VAR_54->psb.savePWM_CONTROL_LOGIC, VAR_47);

 return 0;
}
