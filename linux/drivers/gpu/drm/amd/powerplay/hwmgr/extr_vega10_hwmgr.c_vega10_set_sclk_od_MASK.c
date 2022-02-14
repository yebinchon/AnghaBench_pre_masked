
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct vega10_single_dpm_table {int count; TYPE_2__* dpm_levels; } ;
struct vega10_power_state {int performance_level_count; TYPE_3__* performance_levels; } ;
struct TYPE_6__ {struct vega10_single_dpm_table gfx_table; } ;
struct vega10_hwmgr {TYPE_1__ golden_dpm_table; } ;
struct pp_power_state {int hardware; } ;
struct TYPE_9__ {int engineClock; } ;
struct TYPE_10__ {TYPE_4__ overdriveLimit; } ;
struct pp_hwmgr {TYPE_5__ platform_descriptor; struct pp_power_state* request_ps; struct vega10_hwmgr* backend; } ;
struct TYPE_8__ {int gfx_clock; } ;
struct TYPE_7__ {int value; } ;


 int VAR_0 ;
 struct vega10_power_state* FUNC_0 (int *) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_1, uint32_t VAR_2)
{
 struct vega10_hwmgr *VAR_3 = VAR_1->backend;
 struct vega10_single_dpm_table *VAR_4 =
   &(VAR_3->golden_dpm_table.gfx_table);
 struct pp_power_state *VAR_5;
 struct vega10_power_state *VAR_6;

 VAR_5 = VAR_1->request_ps;

 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_6 = FUNC_0(&VAR_5->hardware);

 VAR_6->performance_levels
 [VAR_6->performance_level_count - 1].gfx_clock =
   VAR_4->dpm_levels
   [VAR_4->count - 1].value *
   VAR_2 / 100 +
   VAR_4->dpm_levels
   [VAR_4->count - 1].value;

 if (VAR_6->performance_levels
   [VAR_6->performance_level_count - 1].gfx_clock >
   VAR_1->platform_descriptor.overdriveLimit.engineClock) {
  VAR_6->performance_levels
  [VAR_6->performance_level_count - 1].gfx_clock =
    VAR_1->platform_descriptor.overdriveLimit.engineClock;
  FUNC_1("max sclk supported by vbios is %d\n",
    VAR_1->platform_descriptor.overdriveLimit.engineClock);
 }
 return 0;
}
