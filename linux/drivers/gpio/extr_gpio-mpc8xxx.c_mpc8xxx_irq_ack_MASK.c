
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int (* write_reg ) (scalar_t__,int ) ;} ;
struct mpc8xxx_gpio_chip {scalar_t__ regs; struct gpio_chip gc; } ;
struct irq_data {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct mpc8xxx_gpio_chip* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_1)
{
 struct mpc8xxx_gpio_chip *VAR_2 = FUNC_0(VAR_1);
 struct gpio_chip *VAR_3 = &VAR_2->gc;

 VAR_3->write_reg(VAR_2->regs + VAR_0,
        FUNC_2(FUNC_1(VAR_1)));
}
