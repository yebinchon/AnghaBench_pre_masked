
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct gpio_chip {int dummy; } ;
struct dio48e_gpio {int lock; int irq_mask; scalar_t__ base; } ;


 int FUNC_0 (int) ;
 struct dio48e_gpio* FUNC_1 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_2 (struct irq_data*) ;
 unsigned long FUNC_3 (struct irq_data*) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct irq_data *VAR_0)
{
 struct gpio_chip *VAR_1 = FUNC_2(VAR_0);
 struct dio48e_gpio *const VAR_2 = FUNC_1(VAR_1);
 const unsigned long VAR_3 = FUNC_3(VAR_0);
 unsigned long VAR_4;


 if (VAR_3 != 19 && VAR_3 != 43)
  return;

 FUNC_5(&VAR_2->lock, VAR_4);

 if (!VAR_2->irq_mask) {

  FUNC_4(0x00, VAR_2->base + 0xF);
  FUNC_4(0x00, VAR_2->base + 0xB);
 }

 if (VAR_3 == 19)
  VAR_2->irq_mask |= FUNC_0(0);
 else
  VAR_2->irq_mask |= FUNC_0(1);

 FUNC_6(&VAR_2->lock, VAR_4);
}
