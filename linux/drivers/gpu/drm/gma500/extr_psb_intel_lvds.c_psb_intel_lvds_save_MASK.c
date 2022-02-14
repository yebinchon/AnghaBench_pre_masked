
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct psb_intel_lvds_priv {void* saveBLC_PWM_CTL; void* savePP_CYCLE; void* savePP_CONTROL; void* saveLVDS; void* savePP_OFF; void* savePP_ON; void* savePFIT_PGM_RATIOS; void* savePFIT_CONTROL; } ;
struct gma_encoder {scalar_t__ dev_priv; } ;
struct TYPE_2__ {int saveBLC_PWM_CTL; } ;
struct drm_psb_private {int backlight_duty_cycle; TYPE_1__ regs; } ;
struct drm_device {int dev; scalar_t__ dev_private; } ;
struct drm_connector {struct drm_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,void*,void*,void*,void*,void*,void*) ;
 struct gma_encoder* FUNC_2 (struct drm_connector*) ;
 int FUNC_3 (struct drm_device*) ;

__attribute__((used)) static void FUNC_4(struct drm_connector *VAR_9)
{
 struct drm_device *VAR_10 = VAR_9->dev;
 struct drm_psb_private *VAR_11 =
  (struct drm_psb_private *)VAR_10->dev_private;
 struct gma_encoder *VAR_12 = FUNC_2(VAR_9);
 struct psb_intel_lvds_priv *VAR_13 =
  (struct psb_intel_lvds_priv *)VAR_12->dev_priv;

 VAR_13->savePP_ON = FUNC_0(VAR_4);
 VAR_13->savePP_OFF = FUNC_0(VAR_3);
 VAR_13->saveLVDS = FUNC_0(VAR_2);
 VAR_13->savePP_CONTROL = FUNC_0(VAR_7);
 VAR_13->savePP_CYCLE = FUNC_0(VAR_8);

 VAR_13->saveBLC_PWM_CTL = FUNC_0(VAR_1);
 VAR_13->savePFIT_CONTROL = FUNC_0(VAR_5);
 VAR_13->savePFIT_PGM_RATIOS = FUNC_0(VAR_6);


 VAR_11->backlight_duty_cycle = (VAR_11->regs.saveBLC_PWM_CTL &
      VAR_0);





 if (VAR_11->backlight_duty_cycle == 0)
  VAR_11->backlight_duty_cycle =
  FUNC_3(VAR_10);

 FUNC_1(VAR_10->dev, "(0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x)\n",
   VAR_13->savePP_ON,
   VAR_13->savePP_OFF,
   VAR_13->saveLVDS,
   VAR_13->savePP_CONTROL,
   VAR_13->savePP_CYCLE,
   VAR_13->saveBLC_PWM_CTL);
}
