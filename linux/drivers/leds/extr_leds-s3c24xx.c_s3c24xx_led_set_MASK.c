
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c24xx_led_platdata {int flags; int gpio; } ;
struct s3c24xx_gpio_led {struct s3c24xx_led_platdata* pdata; } ;
struct led_classdev {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 struct s3c24xx_gpio_led* FUNC_3 (struct led_classdev*) ;

__attribute__((used)) static void FUNC_4(struct led_classdev *VAR_2,
       enum led_brightness VAR_3)
{
 struct s3c24xx_gpio_led *VAR_4 = FUNC_3(VAR_2);
 struct s3c24xx_led_platdata *VAR_5 = VAR_4->pdata;
 int VAR_6 = (VAR_3 ? 1 : 0) ^ (VAR_5->flags & VAR_0);




 FUNC_2(VAR_5->gpio, VAR_6);

 if (VAR_5->flags & VAR_1) {
  if (VAR_3)
   FUNC_1(VAR_5->gpio, VAR_6);
  else
   FUNC_0(VAR_5->gpio);
 }
}
