
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ fb_blank; scalar_t__ power; int brightness; } ;
struct backlight_device {TYPE_1__ props; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct backlight_device *VAR_1)
{
 if (VAR_1->props.fb_blank == VAR_0 &&
   VAR_1->props.power == VAR_0)
  return VAR_1->props.brightness;

 return 0;
}
