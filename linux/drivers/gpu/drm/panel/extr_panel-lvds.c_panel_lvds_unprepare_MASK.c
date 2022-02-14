
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct panel_lvds {scalar_t__ supply; scalar_t__ enable_gpio; } ;
struct drm_panel {int dummy; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__) ;
 struct panel_lvds* FUNC_2 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_3(struct drm_panel *VAR_0)
{
 struct panel_lvds *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1->enable_gpio)
  FUNC_0(VAR_1->enable_gpio, 0);

 if (VAR_1->supply)
  FUNC_1(VAR_1->supply);

 return 0;
}
