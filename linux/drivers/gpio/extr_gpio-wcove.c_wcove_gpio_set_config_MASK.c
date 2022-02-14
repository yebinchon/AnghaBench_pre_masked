
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcove_gpio {int regmap; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 struct wcove_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ,int,int ,int ) ;
 int FUNC_3 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_5, unsigned int VAR_6,
     unsigned long VAR_7)
{
 struct wcove_gpio *VAR_8 = FUNC_0(VAR_5);
 int VAR_9 = FUNC_3(VAR_6, VAR_3);

 if (VAR_9 < 0)
  return 0;

 switch (FUNC_1(VAR_7)) {
 case 129:
  return FUNC_2(VAR_8->regmap, VAR_9, VAR_1,
       VAR_2);
 case 128:
  return FUNC_2(VAR_8->regmap, VAR_9, VAR_1,
       VAR_0);
 default:
  break;
 }

 return -VAR_4;
}
