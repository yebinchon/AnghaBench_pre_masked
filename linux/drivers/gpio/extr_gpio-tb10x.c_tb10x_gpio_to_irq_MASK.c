
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb10x_gpio {int domain; } ;
struct gpio_chip {int dummy; } ;


 struct tb10x_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct tb10x_gpio *VAR_2 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2->domain, VAR_1);
}
