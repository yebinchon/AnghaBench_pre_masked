
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ num_existing_displays; scalar_t__ min_clock_in_sr; } ;
struct TYPE_4__ {scalar_t__ gfx_clk_deep_sleep_support; } ;
struct vega20_hwmgr {TYPE_2__ display_timing; TYPE_1__ registry_data; } ;
struct pp_hwmgr {TYPE_3__* display_config; scalar_t__ backend; } ;
struct TYPE_6__ {scalar_t__ num_display; scalar_t__ min_core_set_clock_in_sr; } ;



__attribute__((used)) static bool
FUNC_0(struct pp_hwmgr *VAR_0)
{
 struct vega20_hwmgr *VAR_1 = (struct vega20_hwmgr *)(VAR_0->backend);
 bool VAR_2 = 0;

 if (VAR_1->display_timing.num_existing_displays !=
   VAR_0->display_config->num_display)
  VAR_2 = 1;

 if (VAR_1->registry_data.gfx_clk_deep_sleep_support &&
    (VAR_1->display_timing.min_clock_in_sr !=
     VAR_0->display_config->min_core_set_clock_in_sr))
  VAR_2 = 1;

 return VAR_2;
}
