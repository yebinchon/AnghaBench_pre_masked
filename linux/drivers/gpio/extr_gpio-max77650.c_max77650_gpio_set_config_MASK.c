
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77650_gpio_chip {int map; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 struct max77650_gpio_chip* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_7,
        unsigned int VAR_8, unsigned long VAR_9)
{
 struct max77650_gpio_chip *VAR_10 = FUNC_0(VAR_7);

 switch (FUNC_1(VAR_9)) {
 case 130:
  return FUNC_2(VAR_10->map,
       VAR_6,
       VAR_3,
       VAR_4);
 case 129:
  return FUNC_2(VAR_10->map,
       VAR_6,
       VAR_3,
       VAR_5);
 case 128:
  return FUNC_2(VAR_10->map,
       VAR_6,
       VAR_2,
       VAR_1);
 default:
  return -VAR_0;
 }
}
