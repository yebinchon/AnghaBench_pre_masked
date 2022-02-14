
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int (* read_reg ) (int ) ;int reg_dat; } ;


 int FUNC_0 (struct gpio_chip*,unsigned int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_0, unsigned int VAR_1)
{
 return !!(VAR_0->read_reg(VAR_0->reg_dat) & FUNC_0(VAR_0, VAR_1));
}
