
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_gpio_info {int dev; } ;
struct gpio_chip {scalar_t__ base; } ;


 int FUNC_0 (struct tegra_gpio_info*,unsigned int) ;
 int FUNC_1 (int ,char*,scalar_t__,int) ;
 struct tegra_gpio_info* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct tegra_gpio_info*,unsigned int) ;
 int FUNC_5 (struct tegra_gpio_info*,int ,unsigned int,int) ;
 int FUNC_6 (struct gpio_chip*,unsigned int,int) ;

__attribute__((used)) static int FUNC_7(struct gpio_chip *VAR_0,
           unsigned int VAR_1,
           int VAR_2)
{
 struct tegra_gpio_info *VAR_3 = FUNC_2(VAR_0);
 int VAR_4;

 FUNC_6(VAR_0, VAR_1, VAR_2);
 FUNC_5(VAR_3, FUNC_0(VAR_3, VAR_1), VAR_1, 1);
 FUNC_4(VAR_3, VAR_1);

 VAR_4 = FUNC_3(VAR_0->base + VAR_1);
 if (VAR_4 < 0)
  FUNC_1(VAR_3->dev,
   "Failed to set pinctrl output direction of GPIO %d: %d",
    VAR_0->base + VAR_1, VAR_4);

 return VAR_4;
}
