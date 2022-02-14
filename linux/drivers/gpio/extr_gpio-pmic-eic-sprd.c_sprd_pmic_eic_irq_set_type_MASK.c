
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sprd_pmic_eic {int* reg; } ;
struct irq_data {int dummy; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;





 size_t VAR_1 ;
 struct sprd_pmic_eic* FUNC_0 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_1 (struct irq_data*) ;

__attribute__((used)) static int FUNC_2(struct irq_data *VAR_2,
          unsigned int VAR_3)
{
 struct gpio_chip *VAR_4 = FUNC_1(VAR_2);
 struct sprd_pmic_eic *VAR_5 = FUNC_0(VAR_4);

 switch (VAR_3) {
 case 129:
  VAR_5->reg[VAR_1] = 1;
  break;
 case 128:
  VAR_5->reg[VAR_1] = 0;
  break;
 case 130:
 case 131:
 case 132:




  break;
 default:
  return -VAR_0;
 }

 return 0;
}
