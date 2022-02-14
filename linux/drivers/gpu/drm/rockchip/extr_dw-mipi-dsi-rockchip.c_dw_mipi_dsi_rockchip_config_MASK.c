
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dw_mipi_dsi_rockchip {TYPE_1__* cdata; int grf_regmap; } ;
struct TYPE_2__ {int enable; scalar_t__ enable_grf_reg; int lanecfg2; scalar_t__ lanecfg2_grf_reg; int lanecfg1; scalar_t__ lanecfg1_grf_reg; int lcdsel_big; int lcdsel_lit; scalar_t__ lcdsel_grf_reg; } ;


 int FUNC_0 (int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct dw_mipi_dsi_rockchip *VAR_0,
     int VAR_1)
{
 if (VAR_0->cdata->lcdsel_grf_reg)
  FUNC_0(VAR_0->grf_regmap, VAR_0->cdata->lcdsel_grf_reg,
   VAR_1 ? VAR_0->cdata->lcdsel_lit : VAR_0->cdata->lcdsel_big);

 if (VAR_0->cdata->lanecfg1_grf_reg)
  FUNC_0(VAR_0->grf_regmap, VAR_0->cdata->lanecfg1_grf_reg,
           VAR_0->cdata->lanecfg1);

 if (VAR_0->cdata->lanecfg2_grf_reg)
  FUNC_0(VAR_0->grf_regmap, VAR_0->cdata->lanecfg2_grf_reg,
           VAR_0->cdata->lanecfg2);

 if (VAR_0->cdata->enable_grf_reg)
  FUNC_0(VAR_0->grf_regmap, VAR_0->cdata->enable_grf_reg,
           VAR_0->cdata->enable);
}
