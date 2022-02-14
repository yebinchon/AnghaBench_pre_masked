
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {unsigned int hwirq; } ;
struct gpio_bank {int lock; int irq_usage; int mod_usage; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (struct gpio_bank*,unsigned int) ;
 int FUNC_3 (struct irq_data*) ;
 struct gpio_bank* FUNC_4 (struct irq_data*) ;
 int FUNC_5 (struct gpio_bank*,unsigned int,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static unsigned int FUNC_8(struct irq_data *VAR_0)
{
 struct gpio_bank *VAR_1 = FUNC_4(VAR_0);
 unsigned long VAR_2;
 unsigned VAR_3 = VAR_0->hwirq;

 FUNC_6(&VAR_1->lock, VAR_2);

 if (!FUNC_1(VAR_1->mod_usage, VAR_3))
  FUNC_5(VAR_1, VAR_3, 1);
 FUNC_2(VAR_1, VAR_3);
 VAR_1->irq_usage |= FUNC_0(VAR_3);

 FUNC_7(&VAR_1->lock, VAR_2);
 FUNC_3(VAR_0);

 return 0;
}
