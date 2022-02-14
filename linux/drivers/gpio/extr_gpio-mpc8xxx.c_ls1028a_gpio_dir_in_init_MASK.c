
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpc8xxx_gpio_chip {scalar_t__ regs; } ;
struct gpio_chip {int bgpio_lock; int (* write_reg ) (scalar_t__,int) ;} ;


 scalar_t__ VAR_0 ;
 struct mpc8xxx_gpio_chip* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_1)
{
 unsigned long VAR_2;
 struct mpc8xxx_gpio_chip *VAR_3 = FUNC_0(VAR_1);

 FUNC_1(&VAR_1->bgpio_lock, VAR_2);

 VAR_1->write_reg(VAR_3->regs + VAR_0, 0xffffffff);

 FUNC_2(&VAR_1->bgpio_lock, VAR_2);

 return 0;
}
