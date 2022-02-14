
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
 int FUNC_1 (int ,char*,int) ;
 struct max77620_gpio* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct gpio_chip *VAR_3, unsigned int VAR_4,
         int VAR_5)
{
 struct max77620_gpio *VAR_6 = FUNC_2(VAR_3);
 u8 VAR_7;
 int VAR_8;

 VAR_7 = (VAR_5) ? VAR_0 :
    VAR_1;

 VAR_8 = FUNC_3(VAR_6->rmap, FUNC_0(VAR_4),
     VAR_2, VAR_7);
 if (VAR_8 < 0)
  FUNC_1(VAR_6->dev, "CNFG_GPIO_OUT update failed: %d\n", VAR_8);
}
