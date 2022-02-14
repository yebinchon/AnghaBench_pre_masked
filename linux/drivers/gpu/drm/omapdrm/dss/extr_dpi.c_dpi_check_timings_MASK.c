
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omap_dss_device {int dummy; } ;
struct drm_display_mode {int hdisplay; int clock; } ;
struct dpi_data {scalar_t__ pll; } ;
struct TYPE_4__ {int lck_div; int pck_div; } ;
struct TYPE_3__ {unsigned long* clkout; } ;
struct dpi_clk_calc_ctx {size_t clkout_idx; unsigned long fck; TYPE_2__ dispc_cinfo; TYPE_1__ pll_cinfo; } ;


 int VAR_0 ;
 int FUNC_0 (struct dpi_data*,int,struct dpi_clk_calc_ctx*) ;
 struct dpi_data* FUNC_1 (struct omap_dss_device*) ;
 int FUNC_2 (struct dpi_data*,int,struct dpi_clk_calc_ctx*) ;

__attribute__((used)) static int FUNC_3(struct omap_dss_device *VAR_1,
        struct drm_display_mode *VAR_2)
{
 struct dpi_data *VAR_3 = FUNC_1(VAR_1);
 int VAR_4, VAR_5;
 unsigned long VAR_6;
 unsigned long VAR_7;
 struct dpi_clk_calc_ctx VAR_8;
 bool VAR_9;

 if (VAR_2->hdisplay % 8 != 0)
  return -VAR_0;

 if (VAR_2->clock == 0)
  return -VAR_0;

 if (VAR_3->pll) {
  VAR_9 = FUNC_2(VAR_3, VAR_2->clock * 1000, &VAR_8);
  if (!VAR_9)
   return -VAR_0;

  VAR_6 = VAR_8.pll_cinfo.clkout[VAR_8.clkout_idx];
 } else {
  VAR_9 = FUNC_0(VAR_3, VAR_2->clock * 1000, &VAR_8);
  if (!VAR_9)
   return -VAR_0;

  VAR_6 = VAR_8.fck;
 }

 VAR_4 = VAR_8.dispc_cinfo.lck_div;
 VAR_5 = VAR_8.dispc_cinfo.pck_div;

 VAR_7 = VAR_6 / VAR_4 / VAR_5;

 VAR_2->clock = VAR_7 / 1000;

 return 0;
}
