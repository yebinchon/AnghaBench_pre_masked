
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sa1100_gpio_chip {unsigned int irqrising; unsigned int irqfalling; } ;
struct irq_data {int hwirq; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 struct sa1100_gpio_chip* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct sa1100_gpio_chip*) ;

__attribute__((used)) static int FUNC_3(struct irq_data *VAR_3, unsigned int VAR_4)
{
 struct sa1100_gpio_chip *VAR_5 = FUNC_1(VAR_3);
 unsigned int VAR_6 = FUNC_0(VAR_3->hwirq);

 if (VAR_4 == VAR_2) {
  if ((VAR_5->irqrising | VAR_5->irqfalling) & VAR_6)
   return 0;
  VAR_4 = VAR_1 | VAR_0;
 }

 if (VAR_4 & VAR_1)
  VAR_5->irqrising |= VAR_6;
 else
  VAR_5->irqrising &= ~VAR_6;
 if (VAR_4 & VAR_0)
  VAR_5->irqfalling |= VAR_6;
 else
  VAR_5->irqfalling &= ~VAR_6;

 FUNC_2(VAR_5);

 return 0;
}
