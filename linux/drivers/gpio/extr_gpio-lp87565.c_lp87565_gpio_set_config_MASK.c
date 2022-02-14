
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp87565_gpio {int map; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_1 (int ) ;
 struct lp87565_gpio* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_3, unsigned int VAR_4,
       unsigned long VAR_5)
{
 struct lp87565_gpio *VAR_6 = FUNC_2(VAR_3);

 switch (FUNC_3(VAR_5)) {
 case 129:
  return FUNC_4(VAR_6->map,
       VAR_2,
       FUNC_0(VAR_4 +
           FUNC_1(VAR_1)),
       FUNC_0(VAR_4 +
           FUNC_1(VAR_1)));
 case 128:
  return FUNC_4(VAR_6->map,
       VAR_2,
       FUNC_0(VAR_4 +
           FUNC_1(VAR_1)), 0);
 default:
  return -VAR_0;
 }
}
