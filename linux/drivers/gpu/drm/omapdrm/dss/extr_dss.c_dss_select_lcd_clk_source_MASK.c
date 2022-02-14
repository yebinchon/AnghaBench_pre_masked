
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dss_device {int* lcd_clk_source; TYPE_2__* feat; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;
typedef enum dss_clk_source { ____Placeholder_dss_clk_source } dss_clk_source ;
struct TYPE_4__ {TYPE_1__* ops; int has_lcd_clk_src; } ;
struct TYPE_3__ {int (* select_lcd_source ) (struct dss_device*,int,int) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct dss_device*,int) ;
 int FUNC_2 (struct dss_device*,int,int) ;

void FUNC_3(struct dss_device *VAR_0,
          enum omap_channel VAR_1,
          enum dss_clk_source VAR_2)
{
 int VAR_3 = FUNC_0(VAR_1);
 int VAR_4;

 if (!VAR_0->feat->has_lcd_clk_src) {
  FUNC_1(VAR_0, VAR_2);
  VAR_0->lcd_clk_source[VAR_3] = VAR_2;
  return;
 }

 VAR_4 = VAR_0->feat->ops->select_lcd_source(VAR_0, VAR_1, VAR_2);
 if (VAR_4)
  return;

 VAR_0->lcd_clk_source[VAR_3] = VAR_2;
}
