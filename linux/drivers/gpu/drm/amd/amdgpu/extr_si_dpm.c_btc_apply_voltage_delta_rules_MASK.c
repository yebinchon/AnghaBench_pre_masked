
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct evergreen_power_info {int vddc_voltage_table; int vddci_voltage_table; } ;
struct TYPE_4__ {scalar_t__ vddc_vddci_delta; } ;
struct TYPE_5__ {TYPE_1__ dyn_state; } ;
struct TYPE_6__ {TYPE_2__ dpm; } ;
struct amdgpu_device {TYPE_3__ pm; } ;


 scalar_t__ FUNC_0 (int *,scalar_t__) ;
 struct evergreen_power_info* FUNC_1 (struct amdgpu_device*) ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_0,
       u16 VAR_1, u16 VAR_2,
       u16 *VAR_3, u16 *VAR_4)
{
 struct evergreen_power_info *VAR_5 = FUNC_1(VAR_0);
 u16 VAR_6;

 if ((0 == *VAR_3) || (0 == *VAR_4))
  return;

 if (*VAR_3 > *VAR_4) {
  if ((*VAR_3 - *VAR_4) > VAR_0->pm.dpm.dyn_state.vddc_vddci_delta) {
   VAR_6 = FUNC_0(&VAR_5->vddci_voltage_table,
             (*VAR_3 - VAR_0->pm.dpm.dyn_state.vddc_vddci_delta));
   *VAR_4 = (VAR_6 < VAR_2) ? VAR_6 : VAR_2;
  }
 } else {
  if ((*VAR_4 - *VAR_3) > VAR_0->pm.dpm.dyn_state.vddc_vddci_delta) {
   VAR_6 = FUNC_0(&VAR_5->vddc_voltage_table,
             (*VAR_4 - VAR_0->pm.dpm.dyn_state.vddc_vddci_delta));
   *VAR_3 = (VAR_6 < VAR_1) ? VAR_6 : VAR_1;
  }
 }
}
