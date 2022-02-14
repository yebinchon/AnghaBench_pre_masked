
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ num_existing_displays; scalar_t__ min_clock_in_sr; } ;
struct vega10_hwmgr {TYPE_1__ display_timing; } ;
struct pp_hwmgr {TYPE_2__* display_config; struct vega10_hwmgr* backend; } ;
struct TYPE_4__ {scalar_t__ num_display; scalar_t__ min_core_set_clock_in_sr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static bool
FUNC_1(struct pp_hwmgr *VAR_1)
{
 struct vega10_hwmgr *VAR_2 = VAR_1->backend;
 bool VAR_3 = 0;

 if (VAR_2->display_timing.num_existing_displays != VAR_1->display_config->num_display)
  VAR_3 = 1;

 if (FUNC_0(VAR_0)) {
  if (VAR_2->display_timing.min_clock_in_sr != VAR_1->display_config->min_core_set_clock_in_sr)
   VAR_3 = 1;
 }

 return VAR_3;
}
