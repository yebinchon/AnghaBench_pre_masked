
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp87565_gpio {int map; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct lp87565_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_2, unsigned int VAR_3)
{
 struct lp87565_gpio *VAR_4 = FUNC_1(VAR_2);
 int VAR_5;

 switch (VAR_3) {
 case 0:
 case 1:
 case 2:





  VAR_5 = FUNC_2(VAR_4->map,
      VAR_1,
      FUNC_0(VAR_3), FUNC_0(VAR_3));
  if (VAR_5)
   return VAR_5;

  break;
 default:
  return -VAR_0;
 }

 return 0;
}
