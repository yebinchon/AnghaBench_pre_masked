
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_gpio_info {int dummy; } ;
struct gpio_chip {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct tegra_gpio_info*,unsigned int) ;
 int FUNC_3 (struct tegra_gpio_info*,unsigned int) ;
 int FUNC_4 (struct tegra_gpio_info*,unsigned int) ;
 struct tegra_gpio_info* FUNC_5 (struct gpio_chip*) ;
 unsigned int FUNC_6 (struct tegra_gpio_info*,int ) ;

__attribute__((used)) static int FUNC_7(struct gpio_chip *VAR_0, unsigned int VAR_1)
{
 struct tegra_gpio_info *VAR_2 = FUNC_5(VAR_0);
 unsigned int VAR_3 = FUNC_0(FUNC_1(VAR_1));


 if (FUNC_6(VAR_2, FUNC_3(VAR_2, VAR_1)) & VAR_3)
  return !!(FUNC_6(VAR_2, FUNC_4(VAR_2, VAR_1)) & VAR_3);

 return !!(FUNC_6(VAR_2, FUNC_2(VAR_2, VAR_1)) & VAR_3);
}
