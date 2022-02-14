
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {void* savePWM_CONTROL_LOGIC; void* saveHISTOGRAM_LOGIC_CONTROL_REG; void* saveHISTOGRAM_INT_CONTROL_REG; void* saveOV_OGAMC5; void* saveOV_OGAMC4; void* saveOV_OGAMC3; void* saveOV_OGAMC2; void* saveOV_OGAMC1; void* saveOV_OGAMC0; void* saveOV_OVADD; void* savePP_DIVISOR; void* savePP_OFF_DELAYS; void* savePP_ON_DELAYS; void* savePFIT_CONTROL; void* saveLVDS; void* savePFIT_AUTO_RATIOS; void* savePFIT_PGM_RATIOS; void* savePP_CONTROL; void* savePERF_MODE; void* saveDSPACURSOR_POS; void* saveDSPACURSOR_BASE; void* saveDSPACURSOR_CTRL; void* saveBCLRPAT_A; void* saveCHICKENBIT; void* saveDSPFW6; void* saveDSPFW5; void* saveDSPFW4; void* saveDSPFW3; void* saveDSPFW2; void* saveDSPFW1; void* saveDSPARB; } ;
struct psb_save_area {TYPE_1__ psb; void* saveBLC_PWM_CTL2; void* saveBLC_PWM_CTL; struct psb_pipe* pipe; } ;
struct psb_pipe {void** palette; void* tileoff; void* linoff; void* surf; void* addr; void* stride; void* cntr; void* vsync; void* vblank; void* vtotal; void* hsync; void* hblank; void* htotal; void* dpll; void* fp1; void* fp0; void* src; void* conf; } ;
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
 scalar_t__ VAR_46 ;
 scalar_t__ VAR_47 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 scalar_t__ VAR_48 ;
 scalar_t__ VAR_49 ;
 scalar_t__ VAR_50 ;
 scalar_t__ VAR_51 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct drm_device*) ;

__attribute__((used)) static int FUNC_4(struct drm_device *VAR_52)
{
 struct drm_psb_private *VAR_53 = VAR_52->dev_private;
 struct psb_save_area *VAR_54 = &VAR_53->regs;
 struct psb_pipe *VAR_55 = &VAR_54->pipe[0];
 int VAR_56;
 u32 VAR_57;


 VAR_54->psb.saveDSPARB = FUNC_0(VAR_9);
 VAR_54->psb.saveDSPFW1 = FUNC_0(VAR_14);
 VAR_54->psb.saveDSPFW2 = FUNC_0(VAR_15);
 VAR_54->psb.saveDSPFW3 = FUNC_0(VAR_16);
 VAR_54->psb.saveDSPFW4 = FUNC_0(VAR_17);
 VAR_54->psb.saveDSPFW5 = FUNC_0(VAR_18);
 VAR_54->psb.saveDSPFW6 = FUNC_0(VAR_19);
 VAR_54->psb.saveCHICKENBIT = FUNC_0(VAR_13);


 VAR_55->conf = FUNC_0(VAR_43);
 VAR_55->src = FUNC_0(VAR_44);
 VAR_55->fp0 = FUNC_0(VAR_29);
 VAR_55->fp1 = FUNC_0(VAR_30);
 VAR_55->dpll = FUNC_0(VAR_28);
 VAR_55->htotal = FUNC_0(VAR_24);
 VAR_55->hblank = FUNC_0(VAR_20);
 VAR_55->hsync = FUNC_0(VAR_23);
 VAR_55->vtotal = FUNC_0(VAR_51);
 VAR_55->vblank = FUNC_0(VAR_49);
 VAR_55->vsync = FUNC_0(VAR_50);
 VAR_54->psb.saveBCLRPAT_A = FUNC_0(VAR_0);
 VAR_55->cntr = FUNC_0(VAR_7);
 VAR_55->stride = FUNC_0(VAR_10);
 VAR_55->addr = FUNC_0(VAR_6);
 VAR_55->surf = FUNC_0(VAR_11);
 VAR_55->linoff = FUNC_0(VAR_8);
 VAR_55->tileoff = FUNC_0(VAR_12);


 VAR_54->psb.saveDSPACURSOR_CTRL = FUNC_0(VAR_4);
 VAR_54->psb.saveDSPACURSOR_BASE = FUNC_0(VAR_3);
 VAR_54->psb.saveDSPACURSOR_POS = FUNC_0(VAR_5);


 for (VAR_56 = 0; VAR_56 < 256; VAR_56++)
  VAR_55->palette[VAR_56] = FUNC_0(VAR_39 + (VAR_56 << 2));

 if (VAR_53->hdmi_priv)
  FUNC_3(VAR_52);


 VAR_54->psb.savePERF_MODE = FUNC_0(VAR_31);


 VAR_54->psb.savePP_CONTROL = FUNC_0(VAR_45);
 VAR_54->psb.savePFIT_PGM_RATIOS = FUNC_0(VAR_42);
 VAR_54->psb.savePFIT_AUTO_RATIOS = FUNC_0(VAR_40);
 VAR_54->saveBLC_PWM_CTL = FUNC_0(VAR_1);
 VAR_54->saveBLC_PWM_CTL2 = FUNC_0(VAR_2);
 VAR_54->psb.saveLVDS = FUNC_0(VAR_25);
 VAR_54->psb.savePFIT_CONTROL = FUNC_0(VAR_41);
 VAR_54->psb.savePP_ON_DELAYS = FUNC_0(VAR_27);
 VAR_54->psb.savePP_OFF_DELAYS = FUNC_0(VAR_26);
 VAR_54->psb.savePP_DIVISOR = FUNC_0(VAR_46);


 VAR_54->psb.saveOV_OVADD = FUNC_0(VAR_38);
 VAR_54->psb.saveOV_OGAMC0 = FUNC_0(VAR_32);
 VAR_54->psb.saveOV_OGAMC1 = FUNC_0(VAR_33);
 VAR_54->psb.saveOV_OGAMC2 = FUNC_0(VAR_34);
 VAR_54->psb.saveOV_OGAMC3 = FUNC_0(VAR_35);
 VAR_54->psb.saveOV_OGAMC4 = FUNC_0(VAR_36);
 VAR_54->psb.saveOV_OGAMC5 = FUNC_0(VAR_37);


 VAR_54->psb.saveHISTOGRAM_INT_CONTROL_REG =
     FUNC_0(VAR_21);
 VAR_54->psb.saveHISTOGRAM_LOGIC_CONTROL_REG =
     FUNC_0(VAR_22);
 VAR_54->psb.savePWM_CONTROL_LOGIC = FUNC_0(VAR_48);

 if (VAR_53->iLVDS_enable) {

  FUNC_1(0, VAR_45);

  do {
   VAR_57 = FUNC_0(VAR_47);
  } while (VAR_57 & 0x80000000);


  FUNC_1(0x58000000, VAR_7);

  FUNC_1(0, VAR_11);


  FUNC_2(4);


  FUNC_1(0x0, VAR_43);

  FUNC_2(8);


  FUNC_1(0, VAR_28);
 }
 return 0;
}
