
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_gpio_pin {int dummy; } ;
struct hw_gpio {int dummy; } ;
typedef enum gpio_result { ____Placeholder_gpio_result } gpio_result ;
typedef enum gpio_mode { ____Placeholder_gpio_mode } gpio_mode ;


 struct hw_gpio* FUNC_0 (struct hw_gpio_pin*) ;
 int FUNC_1 (struct hw_gpio*,int) ;

enum gpio_result FUNC_2(
 struct hw_gpio_pin *VAR_0,
 enum gpio_mode VAR_1)
{
 struct hw_gpio *VAR_2 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2, VAR_1);
}
