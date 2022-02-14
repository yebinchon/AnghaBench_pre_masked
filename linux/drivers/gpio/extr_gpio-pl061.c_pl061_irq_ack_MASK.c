
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pl061 {int lock; scalar_t__ base; } ;
struct irq_data {int dummy; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct pl061* FUNC_1 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_2 (struct irq_data*) ;
 int FUNC_3 (struct irq_data*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct irq_data *VAR_2)
{
 struct gpio_chip *VAR_3 = FUNC_2(VAR_2);
 struct pl061 *VAR_4 = FUNC_1(VAR_3);
 u8 VAR_5 = FUNC_0(FUNC_3(VAR_2) % VAR_1);

 FUNC_4(&VAR_4->lock);
 FUNC_6(VAR_5, VAR_4->base + VAR_0);
 FUNC_5(&VAR_4->lock);
}
