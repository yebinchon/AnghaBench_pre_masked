
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct da9055_gpio {int da9055; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char FUNC_0 (unsigned int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,scalar_t__,unsigned char,unsigned char) ;
 struct da9055_gpio* FUNC_2 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_4, unsigned VAR_5)
{
 struct da9055_gpio *VAR_6 = FUNC_2(VAR_4);
 unsigned char VAR_7;

 VAR_7 = (VAR_0 | VAR_1)
    << FUNC_0(VAR_5);

 return FUNC_1(VAR_6->da9055, (VAR_5 >> 1) +
    VAR_3,
    VAR_2 <<
    FUNC_0(VAR_5),
    VAR_7);
}
