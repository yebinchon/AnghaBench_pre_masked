
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int dev; int regmap; } ;
struct bd70528_gpio {TYPE_1__ chip; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,char*) ;
 struct bd70528_gpio* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_1, unsigned int VAR_2)
{
 struct bd70528_gpio *VAR_3 = FUNC_2(VAR_1);
 int VAR_4, VAR_5;


 VAR_5 = FUNC_3(VAR_3->chip.regmap, FUNC_0(VAR_2), &VAR_4);
 if (VAR_5) {
  FUNC_1(VAR_3->chip.dev, "Could not read gpio direction\n");
  return VAR_5;
 }

 return !(VAR_4 & VAR_0);
}
