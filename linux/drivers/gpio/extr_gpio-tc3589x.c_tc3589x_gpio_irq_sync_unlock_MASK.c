
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct tc3589x_gpio {scalar_t__** oldregs; scalar_t__** regs; int irq_lock; struct tc3589x* tc3589x; } ;
struct tc3589x {int dummy; } ;
struct irq_data {int dummy; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tc3589x_gpio* FUNC_0 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tc3589x*,scalar_t__ const,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_2)
{
 struct gpio_chip *VAR_3 = FUNC_1(VAR_2);
 struct tc3589x_gpio *VAR_4 = FUNC_0(VAR_3);
 struct tc3589x *VAR_5 = VAR_4->tc3589x;
 static const u8 VAR_6[] = {
  [135] = 131,
  [133] = 129,
  [132] = 128,
  [134] = 130,
 };
 int VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
   u8 VAR_9 = VAR_4->oldregs[VAR_7][VAR_8];
   u8 VAR_10 = VAR_4->regs[VAR_7][VAR_8];

   if (VAR_10 == VAR_9)
    continue;

   VAR_4->oldregs[VAR_7][VAR_8] = VAR_10;
   FUNC_3(VAR_5, VAR_6[VAR_7] + VAR_8 * 8, VAR_10);
  }
 }

 FUNC_2(&VAR_4->irq_lock);
}
