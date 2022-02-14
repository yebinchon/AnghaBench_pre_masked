
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmpe_gpio {int** regs; } ;
struct irq_data {int hwirq; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 struct stmpe_gpio* FUNC_1 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_2 (struct irq_data*) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_1)
{
 struct gpio_chip *VAR_2 = FUNC_2(VAR_1);
 struct stmpe_gpio *VAR_3 = FUNC_1(VAR_2);
 int VAR_4 = VAR_1->hwirq;
 int VAR_5 = VAR_4 / 8;
 int VAR_6 = FUNC_0(VAR_4 % 8);

 VAR_3->regs[VAR_0][VAR_5] &= ~VAR_6;
}
