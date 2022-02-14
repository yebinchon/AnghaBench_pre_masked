
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stmpe_gpio {int** regs; TYPE_1__* stmpe; } ;
struct irq_data {int hwirq; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {scalar_t__ partnum; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 struct stmpe_gpio* FUNC_1 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_2 (struct irq_data*) ;

__attribute__((used)) static int FUNC_3(struct irq_data *VAR_9, unsigned int VAR_10)
{
 struct gpio_chip *VAR_11 = FUNC_2(VAR_9);
 struct stmpe_gpio *VAR_12 = FUNC_1(VAR_11);
 int VAR_13 = VAR_9->hwirq;
 int VAR_14 = VAR_13 / 8;
 int VAR_15 = FUNC_0(VAR_13 % 8);

 if (VAR_10 & VAR_4 || VAR_10 & VAR_3)
  return -VAR_0;


 if (VAR_12->stmpe->partnum == VAR_8 ||
     VAR_12->stmpe->partnum == VAR_7)
  return 0;

 if (VAR_10 & VAR_2)
  VAR_12->regs[VAR_6][VAR_14] |= VAR_15;
 else
  VAR_12->regs[VAR_6][VAR_14] &= ~VAR_15;

 if (VAR_10 & VAR_1)
  VAR_12->regs[VAR_5][VAR_14] |= VAR_15;
 else
  VAR_12->regs[VAR_5][VAR_14] &= ~VAR_15;

 return 0;
}
