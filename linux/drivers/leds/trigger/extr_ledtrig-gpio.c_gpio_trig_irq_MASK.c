
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int dummy; } ;
struct gpio_trig_data {int led; scalar_t__ desired_brightness; scalar_t__ inverted; int gpio; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 struct gpio_trig_data* FUNC_1 (struct led_classdev*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct led_classdev *VAR_5 = VAR_4;
 struct gpio_trig_data *VAR_6 = FUNC_1(VAR_5);
 int VAR_7;

 VAR_7 = FUNC_0(VAR_6->gpio);
 if (VAR_6->inverted)
  VAR_7 = !VAR_7;

 if (VAR_7) {
  if (VAR_6->desired_brightness)
   FUNC_2(VAR_6->led,
        VAR_6->desired_brightness);
  else
   FUNC_2(VAR_6->led, VAR_1);
 } else {
  FUNC_2(VAR_6->led, VAR_2);
 }

 return VAR_0;
}
