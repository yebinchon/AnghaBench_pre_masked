
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct panel_lvds {TYPE_2__* backlight; } ;
struct drm_panel {int dummy; } ;
struct TYPE_3__ {int state; int power; } ;
struct TYPE_4__ {TYPE_1__ props; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 struct panel_lvds* FUNC_1 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_2(struct drm_panel *VAR_2)
{
 struct panel_lvds *VAR_3 = FUNC_1(VAR_2);

 if (VAR_3->backlight) {
  VAR_3->backlight->props.power = VAR_1;
  VAR_3->backlight->props.state |= VAR_0;
  FUNC_0(VAR_3->backlight);
 }

 return 0;
}
