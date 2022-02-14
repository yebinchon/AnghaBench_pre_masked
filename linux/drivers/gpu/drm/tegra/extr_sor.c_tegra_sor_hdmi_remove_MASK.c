
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_sor {int avdd_io_supply; int vdd_pll_supply; int hdmi_supply; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct tegra_sor *VAR_0)
{
 FUNC_0(VAR_0->hdmi_supply);
 FUNC_0(VAR_0->vdd_pll_supply);
 FUNC_0(VAR_0->avdd_io_supply);

 return 0;
}
