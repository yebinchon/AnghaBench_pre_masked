
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct tc3589x_gpio {struct tc3589x* tc3589x; } ;
struct tc3589x {int dummy; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 scalar_t__ VAR_0 ;
 struct tc3589x_gpio* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (struct tc3589x*,scalar_t__,int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_4(struct gpio_chip *VAR_1, unsigned int VAR_2, int VAR_3)
{
 struct tc3589x_gpio *VAR_4 = FUNC_2(VAR_1);
 struct tc3589x *VAR_5 = VAR_4->tc3589x;
 u8 VAR_6 = VAR_0 + (VAR_2 / 8) * 2;
 unsigned int VAR_7 = VAR_2 % 8;
 u8 VAR_8[] = {VAR_3 ? FUNC_1(VAR_7) : 0, FUNC_1(VAR_7)};

 FUNC_3(VAR_5, VAR_6, FUNC_0(VAR_8), VAR_8);
}
