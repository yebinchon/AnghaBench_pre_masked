
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psb_intel_mode_device {int saveBLC_PWM_CTL; int backlight_duty_cycle; } ;
struct drm_psb_private {struct psb_intel_mode_device mode_dev; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_device*,int) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*,int) ;

__attribute__((used)) static void FUNC_4(struct drm_encoder *VAR_2)
{
 struct drm_device *VAR_3 = VAR_2->dev;
 struct drm_psb_private *VAR_4 = VAR_3->dev_private;
 struct psb_intel_mode_device *VAR_5 = &VAR_4->mode_dev;

 if (!FUNC_1(VAR_3, 1))
  return;

 VAR_5->saveBLC_PWM_CTL = FUNC_0(VAR_1);
 VAR_5->backlight_duty_cycle = (VAR_5->saveBLC_PWM_CTL &
       VAR_0);

 FUNC_3(VAR_3, 0);

 FUNC_2(VAR_3);
}
