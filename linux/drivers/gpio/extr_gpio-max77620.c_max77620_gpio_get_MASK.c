
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77620_gpio {int dev; int rmap; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (int ,char*,int) ;
 struct max77620_gpio* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_3, unsigned int VAR_4)
{
 struct max77620_gpio *VAR_5 = FUNC_2(VAR_3);
 unsigned int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_3(VAR_5->rmap, FUNC_0(VAR_4), &VAR_6);
 if (VAR_7 < 0) {
  FUNC_1(VAR_5->dev, "CNFG_GPIOx read failed: %d\n", VAR_7);
  return VAR_7;
 }

 if (VAR_6 & VAR_0)
  return !!(VAR_6 & VAR_1);
 else
  return !!(VAR_6 & VAR_2);
}
