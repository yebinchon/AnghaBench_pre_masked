
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_gpio_pin {int dummy; } ;
struct hw_generic {int dummy; } ;


 struct hw_generic* FUNC_0 (struct hw_gpio_pin*) ;
 int FUNC_1 (struct hw_generic*) ;
 int FUNC_2 (struct hw_generic*) ;

__attribute__((used)) static void FUNC_3(
 struct hw_gpio_pin **VAR_0)
{
 struct hw_generic *VAR_1 = FUNC_0(*VAR_0);

 FUNC_1(VAR_1);

 FUNC_2(VAR_1);

 *VAR_0 = ((void*)0);
}
