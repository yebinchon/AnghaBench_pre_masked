
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int irq; } ;
struct gpio_chip {int dummy; } ;
struct ep93xx_gpio {scalar_t__ base; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (struct ep93xx_gpio*,int) ;
 int* VAR_2 ;
 struct ep93xx_gpio* FUNC_3 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_4 (struct irq_data*) ;
 scalar_t__ FUNC_5 (struct irq_data*) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct irq_data *VAR_3)
{
 struct gpio_chip *VAR_4 = FUNC_4(VAR_3);
 struct ep93xx_gpio *VAR_5 = FUNC_3(VAR_4);
 int VAR_6 = FUNC_1(VAR_4);
 int VAR_7 = FUNC_0(VAR_3->irq & 7);

 if (FUNC_5(VAR_3) == VAR_0) {
  VAR_2[VAR_6] ^= VAR_7;
  FUNC_2(VAR_5, VAR_6);
 }

 FUNC_6(VAR_7, VAR_5->base + VAR_1[VAR_6]);
}
