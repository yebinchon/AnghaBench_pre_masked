
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_mm_gpio_chip {scalar_t__ regs; } ;
struct gpio_chip {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (scalar_t__) ;
 struct of_mm_gpio_chip* FUNC_2 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct of_mm_gpio_chip *VAR_3;

 VAR_3 = FUNC_2(VAR_1);

 return !!(FUNC_1(VAR_3->regs + VAR_0) & FUNC_0(VAR_2));
}
