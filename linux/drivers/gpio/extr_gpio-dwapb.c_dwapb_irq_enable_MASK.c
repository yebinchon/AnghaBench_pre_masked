
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct irq_data {int hwirq; } ;
struct irq_chip_generic {struct dwapb_gpio* private; } ;
struct gpio_chip {int bgpio_lock; } ;
struct dwapb_gpio {TYPE_1__* ports; } ;
struct TYPE_2__ {struct gpio_chip gc; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct dwapb_gpio*,int ) ;
 int FUNC_2 (struct dwapb_gpio*,int ,int ) ;
 struct irq_chip_generic* FUNC_3 (struct irq_data*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct irq_data *VAR_1)
{
 struct irq_chip_generic *VAR_2 = FUNC_3(VAR_1);
 struct dwapb_gpio *VAR_3 = VAR_2->private;
 struct gpio_chip *VAR_4 = &VAR_3->ports[0].gc;
 unsigned long VAR_5;
 u32 VAR_6;

 FUNC_4(&VAR_4->bgpio_lock, VAR_5);
 VAR_6 = FUNC_1(VAR_3, VAR_0);
 VAR_6 |= FUNC_0(VAR_1->hwirq);
 FUNC_2(VAR_3, VAR_0, VAR_6);
 FUNC_5(&VAR_4->bgpio_lock, VAR_5);
}
