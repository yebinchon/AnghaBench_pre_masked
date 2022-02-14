
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct gpio_chip {int dummy; } ;
struct cp2112_device {int gpio_poll; int gpio_poll_worker; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct irq_data*) ;
 int VAR_0 ;
 struct cp2112_device* FUNC_2 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_3 (struct irq_data*) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static unsigned int FUNC_5(struct irq_data *VAR_1)
{
 struct gpio_chip *VAR_2 = FUNC_3(VAR_1);
 struct cp2112_device *VAR_3 = FUNC_2(VAR_2);

 FUNC_0(&VAR_3->gpio_poll_worker, VAR_0);

 if (!VAR_3->gpio_poll) {
  VAR_3->gpio_poll = 1;
  FUNC_4(&VAR_3->gpio_poll_worker, 0);
 }

 FUNC_1(VAR_1);
 return 0;
}
