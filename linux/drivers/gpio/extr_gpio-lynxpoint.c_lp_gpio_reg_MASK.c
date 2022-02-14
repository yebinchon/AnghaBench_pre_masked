
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp_gpio {unsigned long reg_base; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct lp_gpio* FUNC_0 (struct gpio_chip*) ;

__attribute__((used)) static unsigned long FUNC_1(struct gpio_chip *VAR_2, unsigned VAR_3,
     int VAR_4)
{
 struct lp_gpio *VAR_5 = FUNC_0(VAR_2);
 int VAR_6;

 if (VAR_4 == VAR_0 || VAR_4 == VAR_1)

  VAR_6 = VAR_3 * 8;
 else

  VAR_6 = (VAR_3 / 32) * 4;

 return VAR_5->reg_base + VAR_4 + VAR_6;
}
