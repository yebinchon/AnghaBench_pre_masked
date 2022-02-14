
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {scalar_t__ count; } ;
struct TYPE_6__ {TYPE_5__ uvd_clock_voltage_dependency_table; } ;
struct TYPE_7__ {TYPE_1__ dyn_state; } ;
struct TYPE_8__ {TYPE_2__ dpm; } ;
struct radeon_device {TYPE_3__ pm; } ;
struct TYPE_9__ {scalar_t__ UvdBootLevel; } ;
struct ci_power_info {TYPE_4__ smc_state_table; scalar_t__ caps_uvd_dpm; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct radeon_device*,int) ;
 struct ci_power_info* FUNC_4 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_5(struct radeon_device *VAR_2, bool VAR_3)
{
 struct ci_power_info *VAR_4 = FUNC_4(VAR_2);
 u32 VAR_5;

 if (!VAR_3) {
  if (VAR_4->caps_uvd_dpm ||
      (VAR_2->pm.dpm.dyn_state.uvd_clock_voltage_dependency_table.count <= 0))
   VAR_4->smc_state_table.UvdBootLevel = 0;
  else
   VAR_4->smc_state_table.UvdBootLevel =
    VAR_2->pm.dpm.dyn_state.uvd_clock_voltage_dependency_table.count - 1;

  VAR_5 = FUNC_0(VAR_0);
  VAR_5 &= ~VAR_1;
  VAR_5 |= FUNC_1(VAR_4->smc_state_table.UvdBootLevel);
  FUNC_2(VAR_0, VAR_5);
 }

 return FUNC_3(VAR_2, !VAR_3);
}
