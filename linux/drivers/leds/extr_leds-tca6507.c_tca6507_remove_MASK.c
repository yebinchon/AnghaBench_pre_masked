
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ name; } ;
struct tca6507_led {TYPE_1__ led_cdev; } ;
struct tca6507_chip {int work; struct tca6507_led* leds; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct tca6507_chip* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct tca6507_chip*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_1)
{
 int VAR_2;
 struct tca6507_chip *VAR_3 = FUNC_1(VAR_1);
 struct tca6507_led *VAR_4 = VAR_3->leds;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_4[VAR_2].led_cdev.name)
   FUNC_2(&VAR_4[VAR_2].led_cdev);
 }
 FUNC_3(VAR_3);
 FUNC_0(&VAR_3->work);

 return 0;
}
