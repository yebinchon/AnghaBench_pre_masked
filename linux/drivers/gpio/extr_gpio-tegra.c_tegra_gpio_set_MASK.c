
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_gpio_info {int dummy; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (struct tegra_gpio_info*,unsigned int) ;
 struct tegra_gpio_info* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (struct tegra_gpio_info*,int ,unsigned int,int) ;

__attribute__((used)) static void FUNC_3(struct gpio_chip *VAR_0, unsigned int VAR_1,
      int VAR_2)
{
 struct tegra_gpio_info *VAR_3 = FUNC_1(VAR_0);

 FUNC_2(VAR_3, FUNC_0(VAR_3, VAR_1), VAR_1, VAR_2);
}
