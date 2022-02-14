
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb532_gpio_chip {scalar_t__ regbase; } ;
struct gpio_chip {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct rb532_gpio_chip* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ,unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_2, unsigned VAR_3)
{
 struct rb532_gpio_chip *VAR_4;

 VAR_4 = FUNC_0(VAR_2);


 FUNC_1(0, VAR_3, VAR_4->regbase + VAR_1);

 FUNC_1(0, VAR_3, VAR_4->regbase + VAR_0);
 return 0;
}
