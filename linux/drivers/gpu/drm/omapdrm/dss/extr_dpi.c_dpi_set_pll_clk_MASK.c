
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int lck_div; int pck_div; } ;
struct TYPE_4__ {TYPE_2__ clock_info; } ;
struct dpi_data {TYPE_1__ mgr_config; int clk_src; int dss; int pll; } ;
struct TYPE_6__ {unsigned long* clkout; } ;
struct dpi_clk_calc_ctx {size_t clkout_idx; TYPE_2__ dispc_cinfo; TYPE_3__ pll_cinfo; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;


 int VAR_0 ;
 int FUNC_0 (struct dpi_data*,unsigned long,struct dpi_clk_calc_ctx*) ;
 int FUNC_1 (int ,TYPE_3__*) ;
 int FUNC_2 (int ,int,int ) ;

__attribute__((used)) static int FUNC_3(struct dpi_data *VAR_1, enum omap_channel VAR_2,
  unsigned long VAR_3, unsigned long *VAR_4, int *VAR_5,
  int *VAR_6)
{
 struct dpi_clk_calc_ctx VAR_7;
 int VAR_8;
 bool VAR_9;

 VAR_9 = FUNC_0(VAR_1, VAR_3, &VAR_7);
 if (!VAR_9)
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_1->pll, &VAR_7.pll_cinfo);
 if (VAR_8)
  return VAR_8;

 FUNC_2(VAR_1->dss, VAR_2, VAR_1->clk_src);

 VAR_1->mgr_config.clock_info = VAR_7.dispc_cinfo;

 *VAR_4 = VAR_7.pll_cinfo.clkout[VAR_7.clkout_idx];
 *VAR_5 = VAR_7.dispc_cinfo.lck_div;
 *VAR_6 = VAR_7.dispc_cinfo.pck_div;

 return 0;
}
