
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int bgpio_lock; int bgpio_dir; scalar_t__ reg_dir_out; int (* write_reg ) (scalar_t__,int ) ;scalar_t__ reg_dir_in; int (* set ) (struct gpio_chip*,unsigned int,int) ;} ;


 int FUNC_0 (struct gpio_chip*,unsigned int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct gpio_chip*,unsigned int,int) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_6(struct gpio_chip *VAR_0, unsigned int VAR_1, int VAR_2)
{
 unsigned long VAR_3;

 VAR_0->set(VAR_0, VAR_1, VAR_2);

 FUNC_1(&VAR_0->bgpio_lock, VAR_3);

 VAR_0->bgpio_dir |= FUNC_0(VAR_0, VAR_1);

 if (VAR_0->reg_dir_in)
  VAR_0->write_reg(VAR_0->reg_dir_in, ~VAR_0->bgpio_dir);
 if (VAR_0->reg_dir_out)
  VAR_0->write_reg(VAR_0->reg_dir_out, VAR_0->bgpio_dir);

 FUNC_2(&VAR_0->bgpio_lock, VAR_3);

 return 0;
}
