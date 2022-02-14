
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct gpio_chip {int dummy; } ;
struct adnp {int reg_shift; int irq_lock; int i2c_lock; int * irq_enable; } ;


 scalar_t__ FUNC_0 (struct adnp*) ;
 int FUNC_1 (struct adnp*,scalar_t__,int ) ;
 struct adnp* FUNC_2 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_3 (struct irq_data*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct irq_data *VAR_0)
{
 struct gpio_chip *VAR_1 = FUNC_3(VAR_0);
 struct adnp *VAR_2 = FUNC_2(VAR_1);
 unsigned int VAR_3 = 1 << VAR_2->reg_shift, VAR_4;

 FUNC_4(&VAR_2->i2c_lock);

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  FUNC_1(VAR_2, FUNC_0(VAR_2) + VAR_4, VAR_2->irq_enable[VAR_4]);

 FUNC_5(&VAR_2->i2c_lock);
 FUNC_5(&VAR_2->irq_lock);
}
