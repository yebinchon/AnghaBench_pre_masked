
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vega20_hwmgr {int uvd_power_gated; int vce_power_gated; TYPE_1__* smu_features; } ;
struct pp_hwmgr {scalar_t__ backend; } ;
struct TYPE_2__ {scalar_t__ enabled; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static void FUNC_0(struct pp_hwmgr *VAR_2)
{
 struct vega20_hwmgr *VAR_3 =
  (struct vega20_hwmgr *)(VAR_2->backend);

 VAR_3->uvd_power_gated = 1;
 VAR_3->vce_power_gated = 1;

 if (VAR_3->smu_features[VAR_0].enabled)
  VAR_3->uvd_power_gated = 0;

 if (VAR_3->smu_features[VAR_1].enabled)
  VAR_3->vce_power_gated = 0;
}
