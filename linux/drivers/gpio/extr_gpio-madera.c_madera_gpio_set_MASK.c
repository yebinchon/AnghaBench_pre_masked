
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct madera_gpio {struct madera* madera; } ;
struct madera {int dev; int regmap; } ;
struct gpio_chip {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,scalar_t__,int) ;
 struct madera_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int ,scalar_t__,int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct gpio_chip *VAR_3, unsigned int VAR_4,
       int VAR_5)
{
 struct madera_gpio *VAR_6 = FUNC_1(VAR_3);
 struct madera *VAR_7 = VAR_6->madera;
 unsigned int VAR_8 = 2 * VAR_4;
 unsigned int VAR_9 = VAR_5 ? VAR_0 : 0;
 int VAR_10;

 VAR_10 = FUNC_2(VAR_7->regmap,
     VAR_2 + VAR_8,
     VAR_1, VAR_9);


 if (VAR_10)
  FUNC_0(VAR_7->dev, "Failed to write to 0x%x (%d)\n",
    VAR_2 + VAR_8, VAR_10);
}
