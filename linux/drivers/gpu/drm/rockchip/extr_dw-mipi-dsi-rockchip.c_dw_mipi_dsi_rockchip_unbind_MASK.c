
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_mipi_dsi_rockchip {int pllref_clk; int dmd; scalar_t__ is_slave; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct dw_mipi_dsi_rockchip* FUNC_1 (struct device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0,
     struct device *VAR_1,
     void *VAR_2)
{
 struct dw_mipi_dsi_rockchip *VAR_3 = FUNC_1(VAR_0);

 if (VAR_3->is_slave)
  return;

 FUNC_2(VAR_3->dmd);

 FUNC_0(VAR_3->pllref_clk);
}
