
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_gpio_info {int dummy; } ;
struct gpio_chip {scalar_t__ base; } ;


 struct tegra_gpio_info* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct tegra_gpio_info*,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct gpio_chip *VAR_0, unsigned int VAR_1)
{
 struct tegra_gpio_info *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(VAR_0->base + VAR_1);
 FUNC_2(VAR_2, VAR_1);
}
