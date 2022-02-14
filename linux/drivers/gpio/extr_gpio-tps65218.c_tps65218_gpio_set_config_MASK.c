
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps65218_gpio {struct tps65218* tps65218; } ;
struct tps65218 {int dummy; } ;
struct gpio_chip {int dummy; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct tps65218_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct tps65218*,int ,int ,int ) ;
 int FUNC_3 (struct tps65218*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_6, unsigned VAR_7,
        unsigned long VAR_8)
{
 struct tps65218_gpio *VAR_9 = FUNC_0(VAR_6);
 struct tps65218 *VAR_10 = VAR_9->tps65218;
 enum pin_config_param VAR_11 = FUNC_1(VAR_8);

 switch (VAR_7) {
 case 0:
 case 2:

  if (VAR_11 == VAR_1)
   return 0;
  return -VAR_0;
 case 1:

  if (VAR_11 == VAR_1)
   return FUNC_2(VAR_10,
         VAR_5,
         VAR_3,
         VAR_4);
  if (VAR_11 == VAR_2)
   return FUNC_3(VAR_10,
       VAR_5,
       VAR_3,
       VAR_3,
       VAR_4);
  return -VAR_0;
 default:
  break;
 }
 return -VAR_0;
}
