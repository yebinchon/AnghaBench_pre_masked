
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct it87_gpio {scalar_t__ io_base; } ;
struct gpio_chip {int dummy; } ;


 struct it87_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 u16 VAR_2;
 u8 VAR_3;
 struct it87_gpio *VAR_4 = FUNC_0(VAR_0);

 VAR_3 = 1 << (VAR_1 % 8);
 VAR_2 = (VAR_1 / 8) + VAR_4->io_base;

 return !!(FUNC_1(VAR_2) & VAR_3);
}
