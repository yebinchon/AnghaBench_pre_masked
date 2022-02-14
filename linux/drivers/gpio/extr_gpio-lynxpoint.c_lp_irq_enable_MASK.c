
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lp_gpio {int lock; int chip; } ;
struct irq_data {int dummy; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct lp_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (unsigned long) ;
 struct gpio_chip* FUNC_3 (struct irq_data*) ;
 int FUNC_4 (struct irq_data*) ;
 unsigned long FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct irq_data *VAR_1)
{
 struct gpio_chip *VAR_2 = FUNC_3(VAR_1);
 struct lp_gpio *VAR_3 = FUNC_1(VAR_2);
 u32 VAR_4 = FUNC_4(VAR_1);
 unsigned long VAR_5 = FUNC_5(&VAR_3->chip, VAR_4, VAR_0);
 unsigned long VAR_6;

 FUNC_7(&VAR_3->lock, VAR_6);
 FUNC_6(FUNC_2(VAR_5) | FUNC_0(VAR_4 % 32), VAR_5);
 FUNC_8(&VAR_3->lock, VAR_6);
}
