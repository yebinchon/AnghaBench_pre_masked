
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {struct radeon_cac_tdp_table* cac_tdp_table; } ;
struct TYPE_5__ {int tdp_adjustment; TYPE_1__ dyn_state; } ;
struct TYPE_6__ {TYPE_2__ dpm; } ;
struct radeon_device {TYPE_3__ pm; } ;
struct radeon_cac_tdp_table {scalar_t__ configurable_tdp; } ;
struct ci_power_info {scalar_t__ caps_power_containment; } ;
typedef int s32 ;


 struct ci_power_info* FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct radeon_device *VAR_0)
{
 struct ci_power_info *VAR_1 = FUNC_0(VAR_0);
 struct radeon_cac_tdp_table *VAR_2 =
  VAR_0->pm.dpm.dyn_state.cac_tdp_table;
 s32 VAR_3;
 s32 VAR_4;
 int VAR_5 = 0;
 bool VAR_6 = 0;

 if (VAR_1->caps_power_containment) {
  VAR_3 = VAR_6 ?
   VAR_0->pm.dpm.tdp_adjustment : (-1 * VAR_0->pm.dpm.tdp_adjustment);
  VAR_4 = ((100 + VAR_3) *
         (s32)VAR_2->configurable_tdp) / 100;

  VAR_5 = FUNC_1(VAR_0, (u32)VAR_4);
 }

 return VAR_5;
}
