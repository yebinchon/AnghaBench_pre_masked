
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orion_gpio_chip {int dummy; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct orion_gpio_chip* FUNC_0 (struct gpio_chip*) ;
 scalar_t__ FUNC_1 (struct orion_gpio_chip*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_3, unsigned VAR_4)
{
 struct orion_gpio_chip *VAR_5 = FUNC_0(VAR_3);

 if (FUNC_1(VAR_5, VAR_4, VAR_1) ||
     FUNC_1(VAR_5, VAR_4, VAR_2))
  return 0;

 return -VAR_0;
}
