
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77620_gpio {int dev; int rmap; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int) ;
 struct max77620_gpio* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_2, unsigned int VAR_3)
{
 struct max77620_gpio *VAR_4 = FUNC_2(VAR_2);
 int VAR_5;

 VAR_5 = FUNC_3(VAR_4->rmap, FUNC_0(VAR_3),
     VAR_1,
     VAR_0);
 if (VAR_5 < 0)
  FUNC_1(VAR_4->dev, "CNFG_GPIOx dir update failed: %d\n", VAR_5);

 return VAR_5;
}
