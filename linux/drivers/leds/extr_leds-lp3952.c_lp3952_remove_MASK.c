
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp3952_led_array {int enable_gpio; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct lp3952_led_array* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct lp3952_led_array*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_1)
{
 struct lp3952_led_array *VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 FUNC_2(VAR_2, VAR_0, 0);
 FUNC_0(VAR_2->enable_gpio, 0);

 return 0;
}
