
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_gpio_info {int dummy; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct tegra_gpio_info*,unsigned int) ;
 int FUNC_3 (struct tegra_gpio_info*,unsigned int) ;
 struct tegra_gpio_info* FUNC_4 (struct gpio_chip*) ;
 int FUNC_5 (struct tegra_gpio_info*,int ) ;

__attribute__((used)) static int FUNC_6(struct gpio_chip *VAR_1,
        unsigned int VAR_2)
{
 struct tegra_gpio_info *VAR_3 = FUNC_4(VAR_1);
 u32 VAR_4 = FUNC_0(FUNC_1(VAR_2));
 u32 VAR_5, VAR_6;

 VAR_5 = FUNC_5(VAR_3, FUNC_2(VAR_3, VAR_2));
 if (!(VAR_5 & VAR_4))
  return -VAR_0;

 VAR_6 = FUNC_5(VAR_3, FUNC_3(VAR_3, VAR_2));

 return !(VAR_6 & VAR_4);
}
