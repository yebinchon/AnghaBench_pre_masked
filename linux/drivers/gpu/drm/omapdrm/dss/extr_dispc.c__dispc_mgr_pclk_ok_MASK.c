
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dispc_device {TYPE_1__* feat; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;
struct TYPE_2__ {unsigned long max_lcd_pclk; unsigned long max_tv_pclk; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static bool FUNC_1(struct dispc_device *VAR_0,
          enum omap_channel VAR_1,
          unsigned long VAR_2)
{
 if (FUNC_0(VAR_1))
  return VAR_2 <= VAR_0->feat->max_lcd_pclk;
 else
  return VAR_2 <= VAR_0->feat->max_tv_pclk;
}
