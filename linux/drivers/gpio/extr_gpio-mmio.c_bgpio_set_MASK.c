
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {unsigned long bgpio_data; int bgpio_lock; int reg_dat; int (* write_reg ) (int ,unsigned long) ;} ;


 unsigned long FUNC_0 (struct gpio_chip*,unsigned int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct gpio_chip *VAR_0, unsigned int VAR_1, int VAR_2)
{
 unsigned long VAR_3 = FUNC_0(VAR_0, VAR_1);
 unsigned long VAR_4;

 FUNC_1(&VAR_0->bgpio_lock, VAR_4);

 if (VAR_2)
  VAR_0->bgpio_data |= VAR_3;
 else
  VAR_0->bgpio_data &= ~VAR_3;

 VAR_0->write_reg(VAR_0->reg_dat, VAR_0->bgpio_data);

 FUNC_2(&VAR_0->bgpio_lock, VAR_4);
}
