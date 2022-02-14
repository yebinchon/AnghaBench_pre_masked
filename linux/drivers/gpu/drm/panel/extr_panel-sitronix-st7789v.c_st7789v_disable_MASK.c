
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct st7789v {TYPE_2__* backlight; } ;
struct drm_panel {int dummy; } ;
struct TYPE_3__ {int state; int power; } ;
struct TYPE_4__ {TYPE_1__ props; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 struct st7789v* FUNC_2 (struct drm_panel*) ;
 int FUNC_3 (struct st7789v*,int ) ;

__attribute__((used)) static int FUNC_4(struct drm_panel *VAR_3)
{
 struct st7789v *VAR_4 = FUNC_2(VAR_3);
 int VAR_5;

 FUNC_0(VAR_5, FUNC_3(VAR_4, VAR_2));

 if (VAR_4->backlight) {
  VAR_4->backlight->props.power = VAR_1;
  VAR_4->backlight->props.state |= VAR_0;
  FUNC_1(VAR_4->backlight);
 }

 return 0;
}
