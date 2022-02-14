
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ws16c48_gpio {int irq_mask; int lock; scalar_t__ base; } ;
struct irq_data {int dummy; } ;
struct gpio_chip {int dummy; } ;


 unsigned int FUNC_0 (unsigned long const) ;
 struct ws16c48_gpio* FUNC_1 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_2 (struct irq_data*) ;
 unsigned long FUNC_3 (struct irq_data*) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct irq_data *VAR_0)
{
 struct gpio_chip *VAR_1 = FUNC_2(VAR_0);
 struct ws16c48_gpio *const VAR_2 = FUNC_1(VAR_1);
 const unsigned long VAR_3 = FUNC_3(VAR_0);
 const unsigned VAR_4 = VAR_3 / 8;
 const unsigned VAR_5 = FUNC_0(VAR_3 % 8);
 unsigned long VAR_6;
 unsigned VAR_7;


 if (VAR_4 > 2)
  return;

 FUNC_5(&VAR_2->lock, VAR_6);

 VAR_7 = VAR_2->irq_mask >> (8*VAR_4);

 FUNC_4(0x80, VAR_2->base + 7);
 FUNC_4(VAR_7 & ~VAR_5, VAR_2->base + 8 + VAR_4);
 FUNC_4(VAR_7 | VAR_5, VAR_2->base + 8 + VAR_4);
 FUNC_4(0xC0, VAR_2->base + 7);

 FUNC_6(&VAR_2->lock, VAR_6);
}
