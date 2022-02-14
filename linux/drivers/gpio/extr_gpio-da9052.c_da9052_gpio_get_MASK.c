
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct da9052_gpio {int da9052; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned int) ;


 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,scalar_t__) ;
 struct da9052_gpio* FUNC_3 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_9, unsigned VAR_10)
{
 struct da9052_gpio *VAR_11 = FUNC_3(VAR_9);
 int VAR_12 = 0;
 int VAR_13;

 VAR_13 = FUNC_2(VAR_11->da9052,
         VAR_0 + (VAR_10 >> 1));
 if (VAR_13 < 0)
  return VAR_13;

 if (FUNC_1(VAR_10)) {
  VAR_12 = VAR_13 & VAR_5;
  VAR_12 >>= 4;
 } else {
  VAR_12 = VAR_13 & VAR_2;
 }

 switch (VAR_12) {
 case 129:
  if (VAR_10 < VAR_3)
   VAR_13 = FUNC_2(VAR_11->da9052,
           VAR_6);
  else
   VAR_13 = FUNC_2(VAR_11->da9052,
           VAR_7);
  if (VAR_13 < 0)
   return VAR_13;
  return !!(VAR_13 & (1 << FUNC_0(VAR_10)));
 case 128:
  if (FUNC_1(VAR_10))
   return !!(VAR_13 & VAR_4);
  else
   return !!(VAR_13 & VAR_1);
 default:
  return -VAR_8;
 }
}
