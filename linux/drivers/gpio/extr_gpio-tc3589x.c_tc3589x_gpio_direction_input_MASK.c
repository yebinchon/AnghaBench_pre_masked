
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct tc3589x_gpio {struct tc3589x* tc3589x; } ;
struct tc3589x {int dummy; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_0 ;
 struct tc3589x_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (struct tc3589x*,scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_1,
     unsigned int VAR_2)
{
 struct tc3589x_gpio *VAR_3 = FUNC_1(VAR_1);
 struct tc3589x *VAR_4 = VAR_3->tc3589x;
 u8 VAR_5 = VAR_0 + VAR_2 / 8;
 unsigned int VAR_6 = VAR_2 % 8;

 return FUNC_2(VAR_4, VAR_5, FUNC_0(VAR_6), 0);
}
