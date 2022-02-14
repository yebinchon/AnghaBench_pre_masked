
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {unsigned long bgpio_dir; unsigned long (* read_reg ) (int ) ;int reg_dat; int reg_set; } ;


 unsigned long FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_0, unsigned long *VAR_1,
      unsigned long *VAR_2)
{
 unsigned long VAR_3 = 0;
 unsigned long VAR_4 = 0;


 *VAR_2 &= ~*VAR_1;

 VAR_4 = *VAR_1 & VAR_0->bgpio_dir;
 VAR_3 = *VAR_1 & ~VAR_0->bgpio_dir;

 if (VAR_4)
  *VAR_2 |= VAR_0->read_reg(VAR_0->reg_set) & VAR_4;
 if (VAR_3)
  *VAR_2 |= VAR_0->read_reg(VAR_0->reg_dat) & VAR_3;

 return 0;
}
