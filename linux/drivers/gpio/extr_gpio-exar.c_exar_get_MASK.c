
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct exar_gpio_chip {int lock; scalar_t__ regs; } ;


 struct exar_gpio_chip* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_0, unsigned int VAR_1)
{
 struct exar_gpio_chip *VAR_2 = FUNC_0(VAR_0);
 int VAR_3;

 FUNC_1(&VAR_2->lock);
 VAR_3 = FUNC_3(VAR_2->regs + VAR_1);
 FUNC_2(&VAR_2->lock);

 return VAR_3;
}
