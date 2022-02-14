
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orion_gpio_chip {int dummy; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (struct orion_gpio_chip*) ;
 int FUNC_1 (struct orion_gpio_chip*) ;
 int FUNC_2 (struct orion_gpio_chip*) ;
 int FUNC_3 (struct orion_gpio_chip*) ;
 struct orion_gpio_chip* FUNC_4 (struct gpio_chip*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct orion_gpio_chip *VAR_2 = FUNC_4(VAR_0);
 int VAR_3;

 if (FUNC_5(FUNC_2(VAR_2)) & (1 << VAR_1)) {
  VAR_3 = FUNC_5(FUNC_0(VAR_2)) ^ FUNC_5(FUNC_1(VAR_2));
 } else {
  VAR_3 = FUNC_5(FUNC_3(VAR_2));
 }

 return (VAR_3 >> VAR_1) & 1;
}
