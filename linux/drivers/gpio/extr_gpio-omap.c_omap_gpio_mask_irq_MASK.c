
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {unsigned int hwirq; } ;
struct gpio_bank {int lock; } ;


 int VAR_0 ;
 struct gpio_bank* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (struct gpio_bank*,unsigned int,int ) ;
 int FUNC_2 (struct gpio_bank*,unsigned int,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_1)
{
 struct gpio_bank *VAR_2 = FUNC_0(VAR_1);
 unsigned VAR_3 = VAR_1->hwirq;
 unsigned long VAR_4;

 FUNC_3(&VAR_2->lock, VAR_4);
 FUNC_2(VAR_2, VAR_3, VAR_0);
 FUNC_1(VAR_2, VAR_3, 0);
 FUNC_4(&VAR_2->lock, VAR_4);
}
