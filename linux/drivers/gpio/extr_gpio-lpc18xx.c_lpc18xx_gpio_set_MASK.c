
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpc18xx_gpio_chip {unsigned int base; } ;
struct gpio_chip {int dummy; } ;


 struct lpc18xx_gpio_chip* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct gpio_chip *VAR_0, unsigned VAR_1, int VAR_2)
{
 struct lpc18xx_gpio_chip *VAR_3 = FUNC_0(VAR_0);
 FUNC_1(VAR_2 ? 1 : 0, VAR_3->base + VAR_1);
}
