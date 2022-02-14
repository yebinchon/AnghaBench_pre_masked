
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct panel_simple {int enabled; TYPE_4__* backlight; TYPE_3__* desc; } ;
struct drm_panel {int dummy; } ;
struct TYPE_5__ {int power; int state; } ;
struct TYPE_8__ {TYPE_1__ props; } ;
struct TYPE_6__ {scalar_t__ enable; } ;
struct TYPE_7__ {TYPE_2__ delay; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (scalar_t__) ;
 struct panel_simple* FUNC_2 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_3(struct drm_panel *VAR_2)
{
 struct panel_simple *VAR_3 = FUNC_2(VAR_2);

 if (VAR_3->enabled)
  return 0;

 if (VAR_3->desc->delay.enable)
  FUNC_1(VAR_3->desc->delay.enable);

 if (VAR_3->backlight) {
  VAR_3->backlight->props.state &= ~VAR_0;
  VAR_3->backlight->props.power = VAR_1;
  FUNC_0(VAR_3->backlight);
 }

 VAR_3->enabled = 1;

 return 0;
}
