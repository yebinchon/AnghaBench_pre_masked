
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct palmas_gpio {struct palmas* palmas; } ;
struct palmas {int dummy; } ;
struct gpio_chip {int dummy; } ;


 unsigned int VAR_0 ;
 struct palmas_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (struct palmas*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct palmas_gpio *VAR_3 = FUNC_0(VAR_1);
 struct palmas *VAR_4 = VAR_3->palmas;

 return FUNC_1(VAR_4, VAR_0 + VAR_2);
}
