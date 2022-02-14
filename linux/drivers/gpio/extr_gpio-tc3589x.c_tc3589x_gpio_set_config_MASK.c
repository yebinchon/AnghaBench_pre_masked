
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct tc3589x_gpio {struct tc3589x* tc3589x; } ;
struct tc3589x {int dummy; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;



 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct tc3589x_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct tc3589x*,scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_3, unsigned int VAR_4,
       unsigned long VAR_5)
{
 struct tc3589x_gpio *VAR_6 = FUNC_1(VAR_3);
 struct tc3589x *VAR_7 = VAR_6->tc3589x;





 u8 VAR_8 = VAR_2 + (VAR_4 / 8) * 2;
 u8 VAR_9 = VAR_1 + (VAR_4 / 8) * 2;
 unsigned int VAR_10 = VAR_4 % 8;
 int VAR_11;

 switch (FUNC_2(VAR_5)) {
 case 130:

  VAR_11 = FUNC_3(VAR_7, VAR_8, FUNC_0(VAR_10), 0);
  if (VAR_11)
   return VAR_11;

  return FUNC_3(VAR_7, VAR_9, FUNC_0(VAR_10), FUNC_0(VAR_10));
 case 129:

  VAR_11 = FUNC_3(VAR_7, VAR_8, FUNC_0(VAR_10), FUNC_0(VAR_10));
  if (VAR_11)
   return VAR_11;

  return FUNC_3(VAR_7, VAR_9, FUNC_0(VAR_10), FUNC_0(VAR_10));
 case 128:

  return FUNC_3(VAR_7, VAR_9, FUNC_0(VAR_10), 0);
 default:
  break;
 }
 return -VAR_0;
}
