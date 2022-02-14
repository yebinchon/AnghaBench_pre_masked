
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct kv_power_info {int samu_boot_level; scalar_t__ caps_stable_p_state; int sram_end; scalar_t__ dpm_table_start; } ;
struct amdgpu_clock_voltage_dependency_table {int count; } ;
struct TYPE_4__ {struct amdgpu_clock_voltage_dependency_table samu_clock_voltage_dependency_table; } ;
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
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct amdgpu_device *VAR_3, bool VAR_4)
{
 struct kv_power_info *VAR_5 = FUNC_3(VAR_3);
 struct amdgpu_clock_voltage_dependency_table *VAR_6 =
  &VAR_3->pm.dpm.dyn_state.samu_clock_voltage_dependency_table;
 int VAR_7;

 if (!VAR_4) {
  if (VAR_5->caps_stable_p_state)
   VAR_5->samu_boot_level = VAR_6->count - 1;
  else
   VAR_5->samu_boot_level = 0;

  VAR_7 = FUNC_0(VAR_3,
        VAR_5->dpm_table_start +
        FUNC_4(VAR_1, VAR_2),
        (u8 *)&VAR_5->samu_boot_level,
        sizeof(u8),
        VAR_5->sram_end);
  if (VAR_7)
   return VAR_7;

  if (VAR_5->caps_stable_p_state)
   FUNC_1(VAR_3,
         VAR_0,
         (1 << VAR_5->samu_boot_level));
 }

 return FUNC_2(VAR_3, !VAR_4);
}
