
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mpc8xxx_gpio_chip {scalar_t__ regs; } ;
struct gpio_chip {int (* read_reg ) (scalar_t__) ;int bgpio_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct mpc8xxx_gpio_chip* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_2, unsigned int VAR_3)
{
 u32 VAR_4;
 struct mpc8xxx_gpio_chip *VAR_5 = FUNC_0(VAR_2);
 u32 VAR_6, VAR_7;

 VAR_6 = VAR_2->read_reg(VAR_5->regs + VAR_1);
 VAR_4 = VAR_2->read_reg(VAR_5->regs + VAR_0) & ~VAR_6;
 VAR_7 = VAR_2->bgpio_data & VAR_6;

 return !!((VAR_4 | VAR_7) & FUNC_1(VAR_3));
}
