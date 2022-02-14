
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_gpio_pin {int opened; int mode; } ;
struct hw_gpio {int dummy; } ;


 struct hw_gpio* FUNC_0 (struct hw_gpio_pin*) ;
 int VAR_0 ;
 int FUNC_1 (struct hw_gpio*) ;

void FUNC_2(
 struct hw_gpio_pin *VAR_1)
{
 struct hw_gpio *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_2);

 VAR_1->mode = VAR_0;
 VAR_1->opened = 0;
}
