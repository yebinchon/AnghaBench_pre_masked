
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct max77620_gpio {int dev; int rmap; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int) ;
 struct max77620_gpio* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_5, unsigned int VAR_6,
        int VAR_7)
{
 struct max77620_gpio *VAR_8 = FUNC_2(VAR_5);
 u8 VAR_9;
 int VAR_10;

 VAR_9 = (VAR_7) ? VAR_2 :
    VAR_3;

 VAR_10 = FUNC_3(VAR_8->rmap, FUNC_0(VAR_6),
     VAR_4, VAR_9);
 if (VAR_10 < 0) {
  FUNC_1(VAR_8->dev, "CNFG_GPIOx val update failed: %d\n", VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_3(VAR_8->rmap, FUNC_0(VAR_6),
     VAR_0,
     VAR_1);
 if (VAR_10 < 0)
  FUNC_1(VAR_8->dev, "CNFG_GPIOx dir update failed: %d\n", VAR_10);

 return VAR_10;
}
