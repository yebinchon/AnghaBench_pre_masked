
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kingdisplay_panel {int enabled; int link; int backlight; } ;
struct drm_panel {int dev; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct kingdisplay_panel* FUNC_3 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_4(struct drm_panel *VAR_0)
{
 struct kingdisplay_panel *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 if (!VAR_1->enabled)
  return 0;

 FUNC_1(VAR_1->backlight);

 VAR_2 = FUNC_2(VAR_1->link);
 if (VAR_2 < 0)
  FUNC_0(VAR_0->dev, "failed to set display off: %d\n",
         VAR_2);

 VAR_1->enabled = 0;

 return 0;
}
