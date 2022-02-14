
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int dummy; } ;
struct as3645a {int indicator_current; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 int VAR_0 ;
 int FUNC_0 (struct as3645a*,int ,int) ;
 int FUNC_1 (struct as3645a*) ;
 struct as3645a* FUNC_2 (struct led_classdev*) ;

__attribute__((used)) static int FUNC_3(struct led_classdev *VAR_1,
         enum led_brightness VAR_2)
{
 struct as3645a *VAR_3 = FUNC_2(VAR_1);
 int VAR_4;

 VAR_3->indicator_current = VAR_2;

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4)
  return VAR_4;

 return FUNC_0(VAR_3, VAR_0, VAR_2);
}
