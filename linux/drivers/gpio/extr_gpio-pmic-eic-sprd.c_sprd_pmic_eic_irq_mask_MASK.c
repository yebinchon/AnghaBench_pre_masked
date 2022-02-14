
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sprd_pmic_eic {scalar_t__* reg; } ;
struct irq_data {int dummy; } ;
struct gpio_chip {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 struct sprd_pmic_eic* FUNC_0 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_1 (struct irq_data*) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_2)
{
 struct gpio_chip *VAR_3 = FUNC_1(VAR_2);
 struct sprd_pmic_eic *VAR_4 = FUNC_0(VAR_3);

 VAR_4->reg[VAR_0] = 0;
 VAR_4->reg[VAR_1] = 0;
}
