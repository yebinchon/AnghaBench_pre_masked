
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct truly_nt35597 {int enabled; int dev; scalar_t__ backlight; } ;
struct drm_panel {int dummy; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (scalar_t__) ;
 struct truly_nt35597* FUNC_2 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_3(struct drm_panel *VAR_0)
{
 struct truly_nt35597 *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 if (VAR_1->enabled)
  return 0;

 if (VAR_1->backlight) {
  VAR_2 = FUNC_1(VAR_1->backlight);
  if (VAR_2 < 0)
   FUNC_0(VAR_1->dev, "backlight enable failed %d\n",
        VAR_2);
 }

 VAR_1->enabled = 1;

 return 0;
}
