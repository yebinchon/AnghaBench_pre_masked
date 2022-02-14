
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_data {int dummy; } ;
struct idio_16_gpio {unsigned long irq_mask; int lock; TYPE_1__* reg; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int irq_ctl; } ;


 unsigned long FUNC_0 (int ) ;
 struct idio_16_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int *) ;
 struct gpio_chip* FUNC_3 (struct irq_data*) ;
 int FUNC_4 (struct irq_data*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct irq_data *VAR_0)
{
 struct gpio_chip *VAR_1 = FUNC_3(VAR_0);
 struct idio_16_gpio *const VAR_2 = FUNC_1(VAR_1);
 const unsigned long VAR_3 = FUNC_0(FUNC_4(VAR_0));
 const unsigned long VAR_4 = VAR_2->irq_mask;
 unsigned long VAR_5;

 VAR_2->irq_mask |= VAR_3;

 if (!VAR_4) {
  FUNC_5(&VAR_2->lock, VAR_5);

  FUNC_2(&VAR_2->reg->irq_ctl);

  FUNC_6(&VAR_2->lock, VAR_5);
 }
}
