
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thunderx_gpio {scalar_t__ register_base; } ;
struct irq_data {int dummy; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 struct thunderx_gpio* FUNC_0 (struct gpio_chip*) ;
 scalar_t__ FUNC_1 (int ) ;
 struct gpio_chip* FUNC_2 (struct irq_data*) ;
 int FUNC_3 (struct irq_data*) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_1)
{
 struct gpio_chip *VAR_2 = FUNC_2(VAR_1);
 struct thunderx_gpio *VAR_3 = FUNC_0(VAR_2);

 FUNC_4(VAR_0,
        VAR_3->register_base + FUNC_1(FUNC_3(VAR_1)));
}
