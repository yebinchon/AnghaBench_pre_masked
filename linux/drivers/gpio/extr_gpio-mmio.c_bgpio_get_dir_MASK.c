
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int bgpio_dir; int (* read_reg ) (scalar_t__) ;scalar_t__ reg_dir_in; scalar_t__ reg_dir_out; scalar_t__ bgpio_dir_unreadable; } ;


 int FUNC_0 (struct gpio_chip*,unsigned int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_0, unsigned int VAR_1)
{

 if (VAR_0->bgpio_dir_unreadable)
  return !(VAR_0->bgpio_dir & FUNC_0(VAR_0, VAR_1));
 if (VAR_0->reg_dir_out)
  return !(VAR_0->read_reg(VAR_0->reg_dir_out) & FUNC_0(VAR_0, VAR_1));
 if (VAR_0->reg_dir_in)
  return !!(VAR_0->read_reg(VAR_0->reg_dir_in) & FUNC_0(VAR_0, VAR_1));


 return 1;
}
