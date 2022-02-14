
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct of_mm_gpio_chip {scalar_t__ regs; } ;
struct irq_data {int dummy; } ;
struct altera_gpio_chip {int gpio_lock; struct of_mm_gpio_chip mmchip; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 struct altera_gpio_chip* FUNC_1 (int ) ;
 int FUNC_2 (struct irq_data*) ;
 int FUNC_3 (struct irq_data*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct irq_data *VAR_1)
{
 struct altera_gpio_chip *VAR_2;
 struct of_mm_gpio_chip *VAR_3;
 unsigned long VAR_4;
 u32 VAR_5;

 VAR_2 = FUNC_1(FUNC_2(VAR_1));
 VAR_3 = &VAR_2->mmchip;

 FUNC_4(&VAR_2->gpio_lock, VAR_4);
 VAR_5 = FUNC_6(VAR_3->regs + VAR_0);

 VAR_5 |= FUNC_0(FUNC_3(VAR_1));
 FUNC_7(VAR_5, VAR_3->regs + VAR_0);
 FUNC_5(&VAR_2->gpio_lock, VAR_4);
}
