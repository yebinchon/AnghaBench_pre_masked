
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_gpio_info {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct tegra_gpio_info*,int,int) ;

__attribute__((used)) static void FUNC_2(struct tegra_gpio_info *VAR_0, u32 VAR_1,
      unsigned int VAR_2, u32 VAR_3)
{
 u32 VAR_4;

 VAR_4 = 0x100 << FUNC_0(VAR_2);
 if (VAR_3)
  VAR_4 |= 1 << FUNC_0(VAR_2);
 FUNC_1(VAR_0, VAR_4, VAR_1);
}
