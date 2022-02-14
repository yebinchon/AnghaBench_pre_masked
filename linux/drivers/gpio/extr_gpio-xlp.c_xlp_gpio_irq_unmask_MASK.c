
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlp_gpio_priv {int lock; int gpio_enabled_mask; int gpio_intr_en; } ;
struct irq_data {int hwirq; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 struct xlp_gpio_priv* FUNC_1 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_2 (struct irq_data*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static void FUNC_6(struct irq_data *VAR_0)
{
 struct gpio_chip *VAR_1 = FUNC_2(VAR_0);
 struct xlp_gpio_priv *VAR_2 = FUNC_1(VAR_1);
 unsigned long VAR_3;

 FUNC_3(&VAR_2->lock, VAR_3);
 FUNC_5(VAR_2->gpio_intr_en, VAR_0->hwirq, 0x1);
 FUNC_0(VAR_0->hwirq, VAR_2->gpio_enabled_mask);
 FUNC_4(&VAR_2->lock, VAR_3);
}
