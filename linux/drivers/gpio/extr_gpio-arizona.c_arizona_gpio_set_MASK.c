
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct arizona_gpio {struct arizona* arizona; } ;
struct arizona {int regmap; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 struct arizona_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ,unsigned int,int,int) ;

__attribute__((used)) static void FUNC_2(struct gpio_chip *VAR_2, unsigned VAR_3, int VAR_4)
{
 struct arizona_gpio *VAR_5 = FUNC_0(VAR_2);
 struct arizona *VAR_6 = VAR_5->arizona;

 if (VAR_4)
  VAR_4 = VAR_1;

 FUNC_1(VAR_6->regmap, VAR_0 + VAR_3,
      VAR_1, VAR_4);
}
