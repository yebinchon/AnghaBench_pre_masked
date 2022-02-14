
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct gpio_rcar_priv {int wakeup_path; scalar_t__ irq_parent; int dev; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 struct gpio_rcar_priv* FUNC_3 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_4 (struct irq_data*) ;
 int FUNC_5 (scalar_t__,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct irq_data *VAR_0, unsigned int VAR_1)
{
 struct gpio_chip *VAR_2 = FUNC_4(VAR_0);
 struct gpio_rcar_priv *VAR_3 = FUNC_3(VAR_2);
 int VAR_4;

 if (VAR_3->irq_parent) {
  VAR_4 = FUNC_5(VAR_3->irq_parent, VAR_1);
  if (VAR_4) {
   FUNC_2(VAR_3->dev, "irq %u doesn't support irq_set_wake\n",
    VAR_3->irq_parent);
   VAR_3->irq_parent = 0;
  }
 }

 if (VAR_1)
  FUNC_1(&VAR_3->wakeup_path);
 else
  FUNC_0(&VAR_3->wakeup_path);

 return 0;
}
