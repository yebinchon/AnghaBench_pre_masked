
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct davinci_gpio_controller {scalar_t__ irq_domain; } ;


 int VAR_0 ;
 struct davinci_gpio_controller* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (scalar_t__,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct davinci_gpio_controller *VAR_3 = FUNC_0(VAR_1);

 if (VAR_3->irq_domain)
  return FUNC_1(VAR_3->irq_domain, VAR_2);
 else
  return -VAR_0;
}
