
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {unsigned long (* read_reg ) (int ) ;int reg_dat; } ;


 unsigned long FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct gpio_chip *VAR_0, unsigned long *VAR_1,
         unsigned long *VAR_2)
{

 *VAR_2 &= ~*VAR_1;
 *VAR_2 |= VAR_0->read_reg(VAR_0->reg_dat) & *VAR_1;
 return 0;
}
