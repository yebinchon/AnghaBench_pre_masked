
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc3589x_gpio {int** regs; } ;
struct irq_data {int hwirq; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 struct tc3589x_gpio* FUNC_1 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_2 (struct irq_data*) ;

__attribute__((used)) static int FUNC_3(struct irq_data *VAR_7, unsigned int VAR_8)
{
 struct gpio_chip *VAR_9 = FUNC_2(VAR_7);
 struct tc3589x_gpio *VAR_10 = FUNC_1(VAR_9);
 int VAR_11 = VAR_7->hwirq;
 int VAR_12 = VAR_11 / 8;
 int VAR_13 = FUNC_0(VAR_11 % 8);

 if (VAR_8 == VAR_0) {
  VAR_10->regs[VAR_4][VAR_12] |= VAR_13;
  return 0;
 }

 VAR_10->regs[VAR_4][VAR_12] &= ~VAR_13;

 if (VAR_8 == VAR_3 || VAR_8 == VAR_2)
  VAR_10->regs[VAR_6][VAR_12] |= VAR_13;
 else
  VAR_10->regs[VAR_6][VAR_12] &= ~VAR_13;

 if (VAR_8 == VAR_1 || VAR_8 == VAR_2)
  VAR_10->regs[VAR_5][VAR_12] |= VAR_13;
 else
  VAR_10->regs[VAR_5][VAR_12] &= ~VAR_13;

 return 0;
}
