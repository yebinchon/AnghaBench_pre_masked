
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mb86s70_gpio_chip {scalar_t__ base; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 struct mb86s70_gpio_chip* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct mb86s70_gpio_chip *VAR_2 = FUNC_2(VAR_0);

 return !!(FUNC_3(VAR_2->base + FUNC_1(VAR_1)) & FUNC_0(VAR_1));
}
