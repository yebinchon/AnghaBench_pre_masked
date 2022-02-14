
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {unsigned int hwirq; } ;
struct gpio_chip {int dummy; } ;
struct adnp {unsigned int reg_shift; int * irq_enable; } ;


 int FUNC_0 (unsigned int) ;
 struct adnp* FUNC_1 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_2 (struct irq_data*) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_0)
{
 struct gpio_chip *VAR_1 = FUNC_2(VAR_0);
 struct adnp *VAR_2 = FUNC_1(VAR_1);
 unsigned int VAR_3 = VAR_0->hwirq >> VAR_2->reg_shift;
 unsigned int VAR_4 = VAR_0->hwirq & 7;

 VAR_2->irq_enable[VAR_3] |= FUNC_0(VAR_4);
}
