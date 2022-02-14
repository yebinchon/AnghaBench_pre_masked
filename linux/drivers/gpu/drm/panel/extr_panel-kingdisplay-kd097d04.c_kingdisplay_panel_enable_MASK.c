
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kingdisplay_panel {int enabled; int backlight; } ;
struct drm_panel {TYPE_1__* drm; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 struct kingdisplay_panel* FUNC_2 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_3(struct drm_panel *VAR_0)
{
 struct kingdisplay_panel *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 if (VAR_1->enabled)
  return 0;

 VAR_2 = FUNC_1(VAR_1->backlight);
 if (VAR_2) {
  FUNC_0(VAR_0->drm->dev,
         "Failed to enable backlight %d\n", VAR_2);
  return VAR_2;
 }

 VAR_1->enabled = 1;

 return 0;
}
