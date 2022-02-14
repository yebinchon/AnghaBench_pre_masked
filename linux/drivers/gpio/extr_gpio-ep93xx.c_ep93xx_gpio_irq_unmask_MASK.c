
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int irq; } ;
struct gpio_chip {int dummy; } ;
struct ep93xx_gpio {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (struct ep93xx_gpio*,int) ;
 int * VAR_0 ;
 struct ep93xx_gpio* FUNC_3 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_4 (struct irq_data*) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_1)
{
 struct gpio_chip *VAR_2 = FUNC_4(VAR_1);
 struct ep93xx_gpio *VAR_3 = FUNC_3(VAR_2);
 int VAR_4 = FUNC_1(VAR_2);

 VAR_0[VAR_4] |= FUNC_0(VAR_1->irq & 7);
 FUNC_2(VAR_3, VAR_4);
}
