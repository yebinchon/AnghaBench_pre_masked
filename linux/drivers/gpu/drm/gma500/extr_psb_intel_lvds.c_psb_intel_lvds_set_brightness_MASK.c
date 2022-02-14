
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_psb_private {TYPE_1__* lvds_bl; } ;
struct drm_device {int dev; struct drm_psb_private* dev_private; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct drm_device*,int) ;
 int FUNC_3 (struct drm_device*,int) ;

void FUNC_4(struct drm_device *VAR_1, int VAR_2)
{
 struct drm_psb_private *VAR_3 = VAR_1->dev_private;

 FUNC_0(VAR_1->dev, "backlight level is %d\n", VAR_2);

 if (!VAR_3->lvds_bl) {
  FUNC_1(VAR_1->dev, "NO LVDS backlight info\n");
  return;
 }

 if (VAR_3->lvds_bl->type == VAR_0)
  FUNC_2(VAR_1, VAR_2);
 else
  FUNC_3(VAR_1, VAR_2);
}
