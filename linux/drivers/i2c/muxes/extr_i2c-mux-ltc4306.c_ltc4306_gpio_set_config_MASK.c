
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltc4306 {int regmap; } ;
struct gpio_chip {int dummy; } ;


 unsigned int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;


 struct ltc4306* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int ,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_2,
       unsigned int VAR_3, unsigned long VAR_4)
{
 struct ltc4306 *VAR_5 = FUNC_1(VAR_2);
 unsigned int VAR_6;

 switch (FUNC_2(VAR_4)) {
 case 129:
  VAR_6 = 0;
  break;
 case 128:
  VAR_6 = FUNC_0(4 - VAR_3);
  break;
 default:
  return -VAR_0;
 }

 return FUNC_3(VAR_5->regmap, VAR_1,
      FUNC_0(4 - VAR_3), VAR_6);
}
