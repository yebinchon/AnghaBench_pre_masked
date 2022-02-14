
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct da9055_gpio {int da9055; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int) ;
 struct da9055_gpio* FUNC_1 (struct gpio_chip*) ;

__attribute__((used)) static void FUNC_2(struct gpio_chip *VAR_1, unsigned VAR_2, int VAR_3)
{
 struct da9055_gpio *VAR_4 = FUNC_1(VAR_1);

 FUNC_0(VAR_4->da9055,
   VAR_0,
   1 << VAR_2,
   VAR_3 << VAR_2);
}
