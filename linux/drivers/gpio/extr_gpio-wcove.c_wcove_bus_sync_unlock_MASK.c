
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcove_gpio {int update; int buslock; } ;
struct irq_data {int hwirq; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct wcove_gpio* FUNC_0 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct wcove_gpio*,int) ;
 int FUNC_4 (struct wcove_gpio*,int) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_2)
{
 struct gpio_chip *VAR_3 = FUNC_1(VAR_2);
 struct wcove_gpio *VAR_4 = FUNC_0(VAR_3);
 int VAR_5 = VAR_2->hwirq;

 if (VAR_4->update & VAR_1)
  FUNC_3(VAR_4, VAR_5);
 if (VAR_4->update & VAR_0)
  FUNC_4(VAR_4, VAR_5);
 VAR_4->update = 0;

 FUNC_2(&VAR_4->buslock);
}
