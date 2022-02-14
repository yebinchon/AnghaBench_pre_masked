
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev_flash {int dummy; } ;
struct led_classdev {int dummy; } ;
struct as3645a {int assist_current; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 int VAR_0 ;
 int FUNC_0 (struct as3645a*,int ,int) ;
 int FUNC_1 (struct as3645a*) ;
 struct as3645a* FUNC_2 (struct led_classdev_flash*) ;
 struct led_classdev_flash* FUNC_3 (struct led_classdev*) ;

__attribute__((used)) static int FUNC_4(struct led_classdev *VAR_1,
      enum led_brightness VAR_2)
{
 struct led_classdev_flash *VAR_3 = FUNC_3(VAR_1);
 struct as3645a *VAR_4 = FUNC_2(VAR_3);
 int VAR_5;

 if (VAR_2) {

  VAR_4->assist_current = VAR_2 - 1;

  VAR_5 = FUNC_1(VAR_4);
  if (VAR_5)
   return VAR_5;
 }

 return FUNC_0(VAR_4, VAR_0, VAR_2);
}
