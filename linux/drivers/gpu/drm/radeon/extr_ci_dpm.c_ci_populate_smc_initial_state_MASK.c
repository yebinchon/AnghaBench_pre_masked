
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t u32 ;
struct radeon_ps {int dummy; } ;
struct TYPE_13__ {size_t count; TYPE_3__* entries; } ;
struct TYPE_11__ {size_t count; TYPE_1__* entries; } ;
struct TYPE_14__ {TYPE_4__ vddc_dependency_on_mclk; TYPE_2__ vddc_dependency_on_sclk; } ;
struct TYPE_15__ {TYPE_5__ dyn_state; } ;
struct TYPE_16__ {TYPE_6__ dpm; } ;
struct radeon_device {TYPE_7__ pm; } ;
struct ci_ps {TYPE_8__* performance_levels; } ;
struct TYPE_18__ {size_t GraphicsBootLevel; size_t MemoryBootLevel; } ;
struct ci_power_info {TYPE_9__ smc_state_table; } ;
struct TYPE_17__ {scalar_t__ sclk; scalar_t__ mclk; } ;
struct TYPE_12__ {scalar_t__ clk; } ;
struct TYPE_10__ {scalar_t__ clk; } ;


 struct ci_power_info* FUNC_0 (struct radeon_device*) ;
 struct ci_ps* FUNC_1 (struct radeon_ps*) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_0,
       struct radeon_ps *VAR_1)
{
 struct ci_ps *VAR_2 = FUNC_1(VAR_1);
 struct ci_power_info *VAR_3 = FUNC_0(VAR_0);
 u32 VAR_4 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_0->pm.dpm.dyn_state.vddc_dependency_on_sclk.count; VAR_4++) {
  if (VAR_0->pm.dpm.dyn_state.vddc_dependency_on_sclk.entries[VAR_4].clk >=
      VAR_2->performance_levels[0].sclk) {
   VAR_3->smc_state_table.GraphicsBootLevel = VAR_4;
   break;
  }
 }

 for (VAR_4 = 0; VAR_4 < VAR_0->pm.dpm.dyn_state.vddc_dependency_on_mclk.count; VAR_4++) {
  if (VAR_0->pm.dpm.dyn_state.vddc_dependency_on_mclk.entries[VAR_4].clk >=
      VAR_2->performance_levels[0].mclk) {
   VAR_3->smc_state_table.MemoryBootLevel = VAR_4;
   break;
  }
 }
}
