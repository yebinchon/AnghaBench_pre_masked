
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct da9055_gpio {int da9055; } ;




 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,scalar_t__) ;
 struct da9055_gpio* FUNC_2 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_4, unsigned VAR_5)
{
 struct da9055_gpio *VAR_6 = FUNC_2(VAR_4);
 int VAR_7 = 0;
 int VAR_8;


 VAR_8 = FUNC_1(VAR_6->da9055, (VAR_5 >> 1) + VAR_1);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7 = VAR_8 & (VAR_0) << FUNC_0(VAR_5);
 VAR_7 >>= FUNC_0(VAR_5);
 switch (VAR_7) {
 case 129:
  VAR_8 = FUNC_1(VAR_6->da9055, VAR_3);
  if (VAR_8 < 0)
   return VAR_8;
  break;
 case 128:
  VAR_8 = FUNC_1(VAR_6->da9055, VAR_2);
  if (VAR_8 < 0)
   return VAR_8;
 }

 return VAR_8 & (1 << VAR_5);

}
