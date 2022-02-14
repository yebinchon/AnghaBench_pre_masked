
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct st7789v {TYPE_2__* backlight; } ;
struct drm_panel {int dummy; } ;
struct TYPE_3__ {int power; int state; } ;
struct TYPE_4__ {TYPE_1__ props; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 struct st7789v* FUNC_1 (struct drm_panel*) ;
 int FUNC_2 (struct st7789v*,int ) ;

__attribute__((used)) static int FUNC_3(struct drm_panel *VAR_3)
{
 struct st7789v *VAR_4 = FUNC_1(VAR_3);

 if (VAR_4->backlight) {
  VAR_4->backlight->props.state &= ~VAR_0;
  VAR_4->backlight->props.power = VAR_1;
  FUNC_0(VAR_4->backlight);
 }

 return FUNC_2(VAR_4, VAR_2);
}
