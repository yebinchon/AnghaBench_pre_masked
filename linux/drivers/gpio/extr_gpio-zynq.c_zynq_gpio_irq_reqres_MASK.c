
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int hwirq; } ;
struct gpio_chip {int parent; } ;


 int FUNC_0 (struct gpio_chip*,int ) ;
 struct gpio_chip* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct irq_data *VAR_0)
{
 struct gpio_chip *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1->parent);
 if (VAR_2 < 0)
  return VAR_2;

 return FUNC_0(VAR_1, VAR_0->hwirq);
}
