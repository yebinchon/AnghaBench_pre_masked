
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct kv_power_info {int vce_boot_level; scalar_t__ caps_stable_p_state; int sram_end; scalar_t__ dpm_table_start; } ;
struct amdgpu_vce_clock_voltage_dependency_table {int count; } ;
struct amdgpu_ps {scalar_t__ evclk; } ;
struct TYPE_4__ {struct amdgpu_vce_clock_voltage_dependency_table vce_clock_voltage_dependency_table; } ;
struct TYPE_5__ {TYPE_1__ dyn_state; } ;
struct TYPE_6__ {TYPE_2__ dpm; } ;
struct amdgpu_device {TYPE_3__ pm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct amdgpu_device*,scalar_t__,int *,int,int ) ;
 int FUNC_1 (struct amdgpu_device*,int ,int) ;
 int FUNC_2 (struct amdgpu_device*,int) ;
 struct kv_power_info* FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct amdgpu_device *VAR_3,
        struct amdgpu_ps *VAR_4,
        struct amdgpu_ps *VAR_5)
{
 struct kv_power_info *VAR_6 = FUNC_3(VAR_3);
 struct amdgpu_vce_clock_voltage_dependency_table *VAR_7 =
  &VAR_3->pm.dpm.dyn_state.vce_clock_voltage_dependency_table;
 int VAR_8;

 if (VAR_4->evclk > 0 && VAR_5->evclk == 0) {
  if (VAR_6->caps_stable_p_state)
   VAR_6->vce_boot_level = VAR_7->count - 1;
  else
   VAR_6->vce_boot_level = FUNC_4(VAR_3, VAR_4->evclk);

  VAR_8 = FUNC_0(VAR_3,
        VAR_6->dpm_table_start +
        FUNC_5(VAR_1, VAR_2),
        (u8 *)&VAR_6->vce_boot_level,
        sizeof(u8),
        VAR_6->sram_end);
  if (VAR_8)
   return VAR_8;

  if (VAR_6->caps_stable_p_state)
   FUNC_1(VAR_3,
         VAR_0,
         (1 << VAR_6->vce_boot_level));
  FUNC_2(VAR_3, 1);
 } else if (VAR_4->evclk == 0 && VAR_5->evclk > 0) {
  FUNC_2(VAR_3, 0);
 }

 return 0;
}
