
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct ep93xx_gpio {struct gpio_chip* gc; } ;


 int FUNC_0 (struct gpio_chip*) ;
 struct ep93xx_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_0)
{
 struct ep93xx_gpio *VAR_1 = FUNC_1(VAR_0);
 int VAR_2 = 0;

 while (VAR_2 < FUNC_0(VAR_1->gc) && VAR_0 != &VAR_1->gc[VAR_2])
  VAR_2++;


 if (VAR_2 == FUNC_0(VAR_1->gc)) {
  FUNC_2("can't find the GPIO port\n");
  return 0;
 }

 return VAR_2;
}
