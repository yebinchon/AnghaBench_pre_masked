
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpc8xxx_gpio_chip {scalar_t__ irq; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 struct mpc8xxx_gpio_chip* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (scalar_t__,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_2, unsigned VAR_3)
{
 struct mpc8xxx_gpio_chip *VAR_4 = FUNC_0(VAR_2);

 if (VAR_4->irq && VAR_3 < VAR_1)
  return FUNC_1(VAR_4->irq, VAR_3);
 else
  return -VAR_0;
}
