
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct zx_gpio {int lock; scalar_t__ base; } ;
struct irq_data {int dummy; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct zx_gpio* FUNC_1 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_2 (struct irq_data*) ;
 int FUNC_3 (struct irq_data*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct irq_data *VAR_3)
{
 struct gpio_chip *VAR_4 = FUNC_2(VAR_3);
 struct zx_gpio *VAR_5 = FUNC_1(VAR_4);
 u16 VAR_6 = FUNC_0(FUNC_3(VAR_3) % VAR_2);
 u16 VAR_7;

 FUNC_4(&VAR_5->lock);
 VAR_7 = FUNC_6(VAR_5->base + VAR_1) | VAR_6;
 FUNC_7(VAR_7, VAR_5->base + VAR_1);
 VAR_7 = FUNC_6(VAR_5->base + VAR_0) & ~VAR_6;
 FUNC_7(VAR_7, VAR_5->base + VAR_0);
 FUNC_5(&VAR_5->lock);
}
