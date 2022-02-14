
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int backlight_duty_cycle; } ;
struct drm_psb_private {TYPE_1__ mode_dev; } ;
struct drm_encoder {int dummy; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct drm_device*,int ) ;
 int FUNC_3 (struct drm_device*,int) ;
 int FUNC_4 (struct drm_device*) ;

__attribute__((used)) static void FUNC_5(struct drm_device *VAR_4,
         struct drm_encoder *VAR_5, bool VAR_6)
{
 struct drm_psb_private *VAR_7 = VAR_4->dev_private;
 u32 VAR_8;

 if (!FUNC_3(VAR_4, 1))
  return;

 if (VAR_6) {
  FUNC_1(VAR_1, FUNC_0(VAR_1) |
     VAR_0);
  do {
   VAR_8 = FUNC_0(VAR_3);
  } while ((VAR_8 & VAR_2) == 0);

  FUNC_2(VAR_4,
    VAR_7->mode_dev.backlight_duty_cycle);
 } else {
  FUNC_2(VAR_4, 0);

  FUNC_1(VAR_1, FUNC_0(VAR_1) &
     ~VAR_0);
  do {
   VAR_8 = FUNC_0(VAR_3);
  } while (VAR_8 & VAR_2);
 }
 FUNC_4(VAR_4);
}
