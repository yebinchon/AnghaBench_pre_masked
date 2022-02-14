
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int parent; } ;
struct arizona_gpio {struct arizona* arizona; } ;
struct arizona {int regmap; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 struct arizona_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (struct gpio_chip*,unsigned int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,unsigned int,unsigned int*) ;
 int FUNC_5 (int ,unsigned int,unsigned int,int) ;

__attribute__((used)) static int FUNC_6(struct gpio_chip *VAR_3,
         unsigned VAR_4, int VAR_5)
{
 struct arizona_gpio *VAR_6 = FUNC_1(VAR_3);
 struct arizona *VAR_7 = VAR_6->arizona;
 bool VAR_8 = FUNC_2(VAR_3, VAR_4);
 unsigned int VAR_9;
 int VAR_10;

 VAR_10 = FUNC_4(VAR_7->regmap, VAR_0 + VAR_4, &VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 if ((VAR_9 & VAR_1) && VAR_8) {
  VAR_10 = FUNC_3(VAR_3->parent);
  if (VAR_10 < 0) {
   FUNC_0(VAR_3->parent, "Failed to resume: %d\n", VAR_10);
   return VAR_10;
  }
 }

 if (VAR_5)
  VAR_5 = VAR_2;

 return FUNC_5(VAR_7->regmap, VAR_0 + VAR_4,
      VAR_1 | VAR_2, VAR_5);
}
