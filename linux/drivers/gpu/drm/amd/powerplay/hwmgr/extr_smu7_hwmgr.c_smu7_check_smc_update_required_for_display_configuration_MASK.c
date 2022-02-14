
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ num_existing_displays; scalar_t__ vrefresh; scalar_t__ min_clock_in_sr; } ;
struct smu7_hwmgr {TYPE_2__ display_timing; } ;
struct TYPE_4__ {int platformCaps; } ;
struct pp_hwmgr {TYPE_3__* display_config; TYPE_1__ platform_descriptor; scalar_t__ backend; } ;
struct TYPE_6__ {scalar_t__ num_display; scalar_t__ vrefresh; scalar_t__ min_core_set_clock_in_sr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static bool
FUNC_1(struct pp_hwmgr *VAR_2)
{
 struct smu7_hwmgr *VAR_3 = (struct smu7_hwmgr *)(VAR_2->backend);
 bool VAR_4 = 0;

 if (VAR_3->display_timing.num_existing_displays != VAR_2->display_config->num_display)
  VAR_4 = 1;

 if (VAR_3->display_timing.vrefresh != VAR_2->display_config->vrefresh)
  VAR_4 = 1;

 if (FUNC_0(VAR_2->platform_descriptor.platformCaps, VAR_0)) {
  if (VAR_3->display_timing.min_clock_in_sr != VAR_2->display_config->min_core_set_clock_in_sr &&
   (VAR_3->display_timing.min_clock_in_sr >= VAR_1 ||
   VAR_2->display_config->min_core_set_clock_in_sr >= VAR_1))
   VAR_4 = 1;
 }
 return VAR_4;
}
