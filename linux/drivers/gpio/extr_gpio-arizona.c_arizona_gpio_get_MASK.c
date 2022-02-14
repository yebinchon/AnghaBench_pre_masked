
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
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,unsigned int,unsigned int) ;
 int FUNC_6 (int ,unsigned int,unsigned int*) ;

__attribute__((used)) static int FUNC_7(struct gpio_chip *VAR_3, unsigned VAR_4)
{
 struct arizona_gpio *VAR_5 = FUNC_1(VAR_3);
 struct arizona *VAR_6 = VAR_5->arizona;
 unsigned int VAR_7, VAR_8;
 int VAR_9;

 VAR_7 = VAR_0 + VAR_4;
 VAR_9 = FUNC_6(VAR_6->regmap, VAR_7, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;


 if (VAR_8 & VAR_1) {
  VAR_9 = FUNC_2(VAR_3->parent);
  if (VAR_9 < 0) {
   FUNC_0(VAR_3->parent, "Failed to resume: %d\n", VAR_9);
   return VAR_9;
  }


  VAR_9 = FUNC_5(VAR_6->regmap, VAR_7, VAR_7);
  if (VAR_9 < 0) {
   FUNC_0(VAR_3->parent, "Failed to drop cache: %d\n",
    VAR_9);
   return VAR_9;
  }

  VAR_9 = FUNC_6(VAR_6->regmap, VAR_7, &VAR_8);
  if (VAR_9 < 0)
   return VAR_9;

  FUNC_3(VAR_3->parent);
  FUNC_4(VAR_3->parent);
 }

 if (VAR_8 & VAR_2)
  return 1;
 else
  return 0;
}
