
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_data {int dummy; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int parent; } ;
struct dln2_gpio {unsigned int* irq_type; int irq_lock; TYPE_1__ gpio; int enabled_irqs; int unmasked_irqs; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct dln2_gpio*,int,unsigned int,int ) ;
 struct dln2_gpio* FUNC_3 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_4 (struct irq_data*) ;
 int FUNC_5 (struct irq_data*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int,int ) ;

__attribute__((used)) static void FUNC_9(struct irq_data *VAR_2)
{
 struct gpio_chip *VAR_3 = FUNC_4(VAR_2);
 struct dln2_gpio *VAR_4 = FUNC_3(VAR_3);
 int VAR_5 = FUNC_5(VAR_2);
 int VAR_6, VAR_7;
 unsigned VAR_8;
 int VAR_9;

 VAR_6 = FUNC_8(VAR_5, VAR_4->enabled_irqs);
 VAR_7 = FUNC_8(VAR_5, VAR_4->unmasked_irqs);

 if (VAR_6 != VAR_7) {
  if (VAR_7) {
   VAR_8 = VAR_4->irq_type[VAR_5] & VAR_0;
   FUNC_7(VAR_5, VAR_4->enabled_irqs);
  } else {
   VAR_8 = VAR_1;
   FUNC_0(VAR_5, VAR_4->enabled_irqs);
  }

  VAR_9 = FUNC_2(VAR_4, VAR_5, VAR_8, 0);
  if (VAR_9)
   FUNC_1(VAR_4->gpio.parent, "failed to set event\n");
 }

 FUNC_6(&VAR_4->irq_lock);
}
