
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dss_device {int* lcd_clk_source; int dispc_clk_source; TYPE_1__* feat; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;
typedef enum dss_clk_source { ____Placeholder_dss_clk_source } dss_clk_source ;
struct TYPE_2__ {scalar_t__ has_lcd_clk_src; } ;


 int FUNC_0 (int) ;

enum dss_clk_source FUNC_1(struct dss_device *VAR_0,
        enum omap_channel VAR_1)
{
 if (VAR_0->feat->has_lcd_clk_src) {
  int VAR_2 = FUNC_0(VAR_1);
  return VAR_0->lcd_clk_source[VAR_2];
 } else {


  return VAR_0->dispc_clk_source;
 }
}
