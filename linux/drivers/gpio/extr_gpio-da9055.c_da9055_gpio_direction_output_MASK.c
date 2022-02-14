
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct da9055_gpio {int da9055; } ;


 unsigned char VAR_0 ;
 unsigned char FUNC_0 (unsigned int) ;
 unsigned char VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned char VAR_3 ;
 int FUNC_1 (struct gpio_chip*,unsigned int,int) ;
 int FUNC_2 (int ,scalar_t__,unsigned char,unsigned char) ;
 struct da9055_gpio* FUNC_3 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_4,
     unsigned VAR_5, int VAR_6)
{
 struct da9055_gpio *VAR_7 = FUNC_3(VAR_4);
 unsigned char VAR_8;
 int VAR_9;

 VAR_8 = (VAR_3 | VAR_1)
     << FUNC_0(VAR_5);

 VAR_9 = FUNC_2(VAR_7->da9055, (VAR_5 >> 1) +
    VAR_2,
    VAR_0 <<
    FUNC_0(VAR_5),
    VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 FUNC_1(VAR_4, VAR_5, VAR_6);

 return 0;
}
