
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {unsigned long bgpio_dir; unsigned long (* read_reg ) (int ) ;int reg_dat; int reg_set; } ;


 unsigned long FUNC_0 (struct gpio_chip*,unsigned int) ;
 unsigned long FUNC_1 (int ) ;
 unsigned long FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_0, unsigned int VAR_1)
{
 unsigned long VAR_2 = FUNC_0(VAR_0, VAR_1);
 bool VAR_3 = !!(VAR_0->bgpio_dir & VAR_2);

 if (VAR_3)
  return !!(VAR_0->read_reg(VAR_0->reg_set) & VAR_2);
 else
  return !!(VAR_0->read_reg(VAR_0->reg_dat) & VAR_2);
}
