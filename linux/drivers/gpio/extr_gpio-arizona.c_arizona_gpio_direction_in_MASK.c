
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int parent; } ;
struct arizona_gpio {struct arizona* arizona; } ;
struct arizona {int regmap; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 struct arizona_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (struct gpio_chip*,unsigned int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,unsigned int,int ,int ,int*) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_2, unsigned VAR_3)
{
 struct arizona_gpio *VAR_4 = FUNC_0(VAR_2);
 struct arizona *VAR_5 = VAR_4->arizona;
 bool VAR_6 = FUNC_1(VAR_2, VAR_3);
 bool VAR_7;
 int VAR_8;

 VAR_8 = FUNC_4(VAR_5->regmap,
           VAR_0 + VAR_3,
           VAR_1, VAR_1,
           &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_7 && VAR_6) {
  FUNC_2(VAR_2->parent);
  FUNC_3(VAR_2->parent);
 }

 return 0;
}
