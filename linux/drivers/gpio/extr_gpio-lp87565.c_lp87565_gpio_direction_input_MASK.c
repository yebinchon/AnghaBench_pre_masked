
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp87565_gpio {int map; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 struct lp87565_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_1,
     unsigned int VAR_2)
{
 struct lp87565_gpio *VAR_3 = FUNC_1(VAR_1);

 return FUNC_2(VAR_3->map,
      VAR_0,
      FUNC_0(VAR_2), 0);
}
