
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psb_intel_mode_device {scalar_t__ backlight_duty_cycle; } ;
struct drm_psb_private {struct psb_intel_mode_device mode_dev; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;


 scalar_t__ FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*,int) ;

__attribute__((used)) static void FUNC_2(struct drm_encoder *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 struct drm_psb_private *VAR_2 = VAR_1->dev_private;
 struct psb_intel_mode_device *VAR_3 = &VAR_2->mode_dev;

 if (VAR_3->backlight_duty_cycle == 0)
  VAR_3->backlight_duty_cycle =
      FUNC_0(VAR_1);

 FUNC_1(VAR_1, 1);
}
