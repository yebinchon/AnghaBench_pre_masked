
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct psb_intel_mode_device {int backlight_duty_cycle; } ;
struct drm_psb_private {struct psb_intel_mode_device mode_dev; } ;
struct drm_device {int dev; struct drm_psb_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct drm_device*,int) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*,int ) ;

__attribute__((used)) static void FUNC_6(struct drm_device *VAR_4, bool VAR_5)
{
 struct drm_psb_private *VAR_6 = VAR_4->dev_private;
 struct psb_intel_mode_device *VAR_7 = &VAR_6->mode_dev;
 u32 VAR_8;

 if (!FUNC_3(VAR_4, 1)) {
         FUNC_2(VAR_4->dev, "set power, chip off!\n");
  return;
        }

 if (VAR_5) {
  FUNC_1(VAR_1, FUNC_0(VAR_1) |
     VAR_0);
  do {
   VAR_8 = FUNC_0(VAR_3);
  } while ((VAR_8 & VAR_2) == 0);

  FUNC_5(VAR_4,
          VAR_7->backlight_duty_cycle);
 } else {
  FUNC_5(VAR_4, 0);

  FUNC_1(VAR_1, FUNC_0(VAR_1) &
     ~VAR_0);
  do {
   VAR_8 = FUNC_0(VAR_3);
  } while (VAR_8 & VAR_2);
 }

 FUNC_4(VAR_4);
}
