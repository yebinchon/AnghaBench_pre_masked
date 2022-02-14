
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_mockup_chip {int irqsim; } ;
struct gpio_chip {int dummy; } ;


 struct gpio_mockup_chip* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int *,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_0, unsigned int VAR_1)
{
 struct gpio_mockup_chip *VAR_2 = FUNC_0(VAR_0);

 return FUNC_1(&VAR_2->irqsim, VAR_1);
}
