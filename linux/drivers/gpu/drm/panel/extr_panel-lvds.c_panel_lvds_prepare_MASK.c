
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct panel_lvds {scalar_t__ enable_gpio; int dev; scalar_t__ supply; } ;
struct drm_panel {int dummy; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__) ;
 struct panel_lvds* FUNC_3 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_4(struct drm_panel *VAR_0)
{
 struct panel_lvds *VAR_1 = FUNC_3(VAR_0);

 if (VAR_1->supply) {
  int VAR_2;

  VAR_2 = FUNC_2(VAR_1->supply);
  if (VAR_2 < 0) {
   FUNC_0(VAR_1->dev, "failed to enable supply: %d\n",
    VAR_2);
   return VAR_2;
  }
 }

 if (VAR_1->enable_gpio)
  FUNC_1(VAR_1->enable_gpio, 1);

 return 0;
}
