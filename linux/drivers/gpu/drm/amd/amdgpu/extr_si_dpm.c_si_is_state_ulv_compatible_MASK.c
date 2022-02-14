
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ mclk; scalar_t__ vddc; } ;
struct si_ulv_param {TYPE_3__ pl; } ;
struct si_ps {TYPE_1__* performance_levels; } ;
struct si_power_info {struct si_ulv_param ulv; } ;
struct amdgpu_ps {scalar_t__ vclk; scalar_t__ dclk; } ;
struct TYPE_13__ {int count; TYPE_4__* entries; } ;
struct TYPE_14__ {TYPE_5__ vddc_dependency_on_dispclk; } ;
struct TYPE_15__ {TYPE_6__ dyn_state; } ;
struct TYPE_16__ {TYPE_7__ dpm; } ;
struct TYPE_10__ {scalar_t__ current_dispclk; } ;
struct amdgpu_device {TYPE_8__ pm; TYPE_2__ clock; } ;
struct TYPE_12__ {scalar_t__ clk; scalar_t__ v; } ;
struct TYPE_9__ {scalar_t__ mclk; } ;


 struct si_power_info* FUNC_0 (struct amdgpu_device*) ;
 struct si_ps* FUNC_1 (struct amdgpu_ps*) ;

__attribute__((used)) static bool FUNC_2(struct amdgpu_device *VAR_0,
           struct amdgpu_ps *VAR_1)
{
 const struct si_power_info *VAR_2 = FUNC_0(VAR_0);
 const struct si_ulv_param *VAR_3 = &VAR_2->ulv;
 const struct si_ps *VAR_4 = FUNC_1(VAR_1);
 int VAR_5;

 if (VAR_4->performance_levels[0].mclk != VAR_3->pl.mclk)
  return 0;



 for (VAR_5 = 0; VAR_5 < VAR_0->pm.dpm.dyn_state.vddc_dependency_on_dispclk.count; VAR_5++) {
  if (VAR_0->clock.current_dispclk <=
      VAR_0->pm.dpm.dyn_state.vddc_dependency_on_dispclk.entries[VAR_5].clk) {
   if (VAR_3->pl.vddc <
       VAR_0->pm.dpm.dyn_state.vddc_dependency_on_dispclk.entries[VAR_5].v)
    return 0;
  }
 }

 if ((VAR_1->vclk != 0) || (VAR_1->dclk != 0))
  return 0;

 return 1;
}
