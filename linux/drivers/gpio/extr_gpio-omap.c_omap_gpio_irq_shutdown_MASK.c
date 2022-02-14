
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {unsigned int hwirq; } ;
struct gpio_bank {int lock; int mod_usage; int irq_usage; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (struct gpio_bank*,unsigned int) ;
 int FUNC_3 (struct gpio_bank*,unsigned int) ;
 int FUNC_4 (struct gpio_bank*,unsigned int) ;
 struct gpio_bank* FUNC_5 (struct irq_data*) ;
 int FUNC_6 (struct gpio_bank*,unsigned int,int ) ;
 int FUNC_7 (struct gpio_bank*,unsigned int,int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_10(struct irq_data *VAR_1)
{
 struct gpio_bank *VAR_2 = FUNC_5(VAR_1);
 unsigned long VAR_3;
 unsigned VAR_4 = VAR_1->hwirq;

 FUNC_8(&VAR_2->lock, VAR_3);
 VAR_2->irq_usage &= ~(FUNC_0(VAR_4));
 FUNC_7(VAR_2, VAR_4, VAR_0);
 FUNC_3(VAR_2, VAR_4);
 FUNC_6(VAR_2, VAR_4, 0);
 if (!FUNC_1(VAR_2->mod_usage, VAR_4))
  FUNC_2(VAR_2, VAR_4);
 FUNC_4(VAR_2, VAR_4);
 FUNC_9(&VAR_2->lock, VAR_3);
}
