
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int (* read_reg ) (scalar_t__) ;int (* write_reg ) (scalar_t__,int) ;} ;
struct mpc8xxx_gpio_chip {int lock; scalar_t__ regs; struct gpio_chip gc; } ;
struct irq_data {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct mpc8xxx_gpio_chip* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct irq_data *VAR_1)
{
 struct mpc8xxx_gpio_chip *VAR_2 = FUNC_0(VAR_1);
 struct gpio_chip *VAR_3 = &VAR_2->gc;
 unsigned long VAR_4;

 FUNC_3(&VAR_2->lock, VAR_4);

 VAR_3->write_reg(VAR_2->regs + VAR_0,
  VAR_3->read_reg(VAR_2->regs + VAR_0)
  | FUNC_2(FUNC_1(VAR_1)));

 FUNC_4(&VAR_2->lock, VAR_4);
}
