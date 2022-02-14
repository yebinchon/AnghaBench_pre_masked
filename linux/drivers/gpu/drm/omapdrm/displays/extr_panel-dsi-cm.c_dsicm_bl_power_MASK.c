
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct panel_drv_data {struct backlight_device* extbldev; struct backlight_device* bldev; } ;
struct TYPE_2__ {int state; void* power; void* fb_blank; } ;
struct backlight_device {TYPE_1__ props; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (struct backlight_device*) ;

__attribute__((used)) static void FUNC_1(struct panel_drv_data *VAR_5, bool VAR_6)
{
 struct backlight_device *VAR_7;

 if (VAR_5->bldev)
  VAR_7 = VAR_5->bldev;
 else if (VAR_5->extbldev)
  VAR_7 = VAR_5->extbldev;
 else
  return;

 if (VAR_6) {
  VAR_7->props.fb_blank = VAR_4;
  VAR_7->props.state = ~(VAR_0 | VAR_1);
  VAR_7->props.power = VAR_4;
 } else {
  VAR_7->props.fb_blank = VAR_2;
  VAR_7->props.power = VAR_3;
  VAR_7->props.state |= VAR_0 | VAR_1;
 }

 FUNC_0(VAR_7);
}
