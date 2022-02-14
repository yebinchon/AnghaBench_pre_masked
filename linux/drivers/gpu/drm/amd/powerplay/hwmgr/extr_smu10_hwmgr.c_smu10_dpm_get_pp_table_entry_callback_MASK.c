
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smu10_power_state {unsigned int level; TYPE_2__* levels; } ;
struct TYPE_3__ {int platformCaps; } ;
struct pp_hwmgr {TYPE_1__ platform_descriptor; } ;
struct pp_hw_power_state {int dummy; } ;
struct TYPE_4__ {int ds_divider_index; int ss_divider_index; scalar_t__ vddc_index; scalar_t__ engine_clock; } ;


 int VAR_0 ;
 struct smu10_power_state* FUNC_0 (struct pp_hw_power_state*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(
           struct pp_hwmgr *VAR_1,
        struct pp_hw_power_state *VAR_2,
         unsigned int VAR_3,
           const void *VAR_4)
{
 struct smu10_power_state *VAR_5 = FUNC_0(VAR_2);

 VAR_5->levels[VAR_3].engine_clock = 0;

 VAR_5->levels[VAR_3].vddc_index = 0;
 VAR_5->level = VAR_3 + 1;

 if (FUNC_1(VAR_1->platform_descriptor.platformCaps, VAR_0)) {
  VAR_5->levels[VAR_3].ds_divider_index = 5;
  VAR_5->levels[VAR_3].ss_divider_index = 5;
 }

 return 0;
}
