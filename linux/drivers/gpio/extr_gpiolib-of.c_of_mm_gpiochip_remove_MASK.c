
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int label; } ;
struct of_mm_gpio_chip {int regs; struct gpio_chip gc; } ;


 int FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct of_mm_gpio_chip *VAR_0)
{
 struct gpio_chip *VAR_1 = &VAR_0->gc;

 if (!VAR_0)
  return;

 FUNC_0(VAR_1);
 FUNC_1(VAR_0->regs);
 FUNC_2(VAR_1->label);
}
