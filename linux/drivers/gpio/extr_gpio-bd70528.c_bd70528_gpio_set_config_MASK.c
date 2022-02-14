
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int regmap; } ;
struct bd70528_gpio {TYPE_1__ chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int) ;



 int FUNC_1 (struct bd70528_gpio*,unsigned int,int ) ;
 struct bd70528_gpio* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct gpio_chip *VAR_4, unsigned int VAR_5,
       unsigned long VAR_6)
{
 struct bd70528_gpio *VAR_7 = FUNC_2(VAR_4);

 switch (FUNC_4(VAR_6)) {
 case 130:
  return FUNC_5(VAR_7->chip.regmap,
       FUNC_0(VAR_5),
       VAR_0,
       VAR_1);
  break;
 case 129:
  return FUNC_5(VAR_7->chip.regmap,
       FUNC_0(VAR_5),
       VAR_0,
       VAR_2);
  break;
 case 128:
  return FUNC_1(VAR_7, VAR_5,
         FUNC_3(VAR_6));
  break;
 default:
  break;
 }
 return -VAR_3;
}
