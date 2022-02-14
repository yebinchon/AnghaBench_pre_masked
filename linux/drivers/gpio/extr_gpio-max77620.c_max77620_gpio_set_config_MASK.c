
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77620_gpio {int rmap; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 struct max77620_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (struct max77620_gpio*,unsigned int,int ) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct gpio_chip *VAR_4, unsigned int VAR_5,
        unsigned long VAR_6)
{
 struct max77620_gpio *VAR_7 = FUNC_1(VAR_4);

 switch (FUNC_4(VAR_6)) {
 case 130:
  return FUNC_5(VAR_7->rmap, FUNC_0(VAR_5),
       VAR_1,
       VAR_2);
 case 129:
  return FUNC_5(VAR_7->rmap, FUNC_0(VAR_5),
       VAR_1,
       VAR_3);
 case 128:
  return FUNC_2(VAR_7, VAR_5,
   FUNC_3(VAR_6));
 default:
  break;
 }

 return -VAR_0;
}
