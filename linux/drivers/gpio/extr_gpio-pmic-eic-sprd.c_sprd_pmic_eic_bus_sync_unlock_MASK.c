
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sprd_pmic_eic {int* reg; int buslock; } ;
struct irq_data {int dummy; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct sprd_pmic_eic* FUNC_0 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct irq_data*) ;
 int FUNC_3 (struct irq_data*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct gpio_chip*,int) ;
 int FUNC_6 (struct gpio_chip*,int,int ,int) ;

__attribute__((used)) static void FUNC_7(struct irq_data *VAR_7)
{
 struct gpio_chip *VAR_8 = FUNC_1(VAR_7);
 struct sprd_pmic_eic *VAR_9 = FUNC_0(VAR_8);
 u32 VAR_10 = FUNC_2(VAR_7);
 u32 VAR_11 = FUNC_3(VAR_7);
 int VAR_12;


 if (VAR_10 & VAR_0) {
  VAR_12 = FUNC_5(VAR_8, VAR_11);
  if (VAR_12)
   FUNC_6(VAR_8, VAR_11, VAR_5, 0);
  else
   FUNC_6(VAR_8, VAR_11, VAR_5, 1);
 } else {
  FUNC_6(VAR_8, VAR_11, VAR_5,
         VAR_9->reg[VAR_2]);
 }


 FUNC_6(VAR_8, VAR_11, VAR_4,
        VAR_9->reg[VAR_1]);

 FUNC_6(VAR_8, VAR_11, VAR_6,
        VAR_9->reg[VAR_3]);

 FUNC_4(&VAR_9->buslock);
}
