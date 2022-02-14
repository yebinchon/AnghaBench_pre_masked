
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct gpio_chip {int dummy; } ;
struct cp2112_device {int gpio_poll_worker; } ;


 int FUNC_0 (int *) ;
 struct cp2112_device* FUNC_1 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_2 (struct irq_data*) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_0)
{
 struct gpio_chip *VAR_1 = FUNC_2(VAR_0);
 struct cp2112_device *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(&VAR_2->gpio_poll_worker);
}
