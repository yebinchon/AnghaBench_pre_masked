
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_reg {int* irqs; scalar_t__ irqdomain; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (scalar_t__,int) ;
 struct gpio_reg* FUNC_1 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct gpio_reg *VAR_2 = FUNC_1(VAR_0);
 int VAR_3 = VAR_2->irqs[VAR_1];

 if (VAR_3 >= 0 && VAR_2->irqdomain)
  VAR_3 = FUNC_0(VAR_2->irqdomain, VAR_3);

 return VAR_3;
}
