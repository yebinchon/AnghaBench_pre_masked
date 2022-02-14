
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u8 ;
typedef int u32 ;
struct kv_power_info {int uvd_boot_level; int sram_end; scalar_t__ dpm_table_start; scalar_t__ caps_stable_p_state; int caps_uvd_dpm; } ;
struct amdgpu_uvd_clock_voltage_dependency_table {int count; } ;
struct TYPE_4__ {struct amdgpu_uvd_clock_voltage_dependency_table uvd_clock_voltage_dependency_table; } ;
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
 struct amdgpu_uvd_clock_voltage_dependency_table *VAR_6 =
  &VAR_3->pm.dpm.dyn_state.uvd_clock_voltage_dependency_table;
 int VAR_7;
 u32 VAR_8;

 if (!VAR_4) {
  if (VAR_6->count)
   VAR_5->uvd_boot_level = VAR_6->count - 1;
  else
   VAR_5->uvd_boot_level = 0;

  if (!VAR_5->caps_uvd_dpm || VAR_5->caps_stable_p_state) {
   VAR_8 = 1 << VAR_5->uvd_boot_level;
  } else {
   VAR_8 = 0x1f;
  }

  VAR_7 = FUNC_0(VAR_3,
        VAR_5->dpm_table_start +
        FUNC_4(VAR_1, VAR_2),
        (uint8_t *)&VAR_5->uvd_boot_level,
        sizeof(u8), VAR_5->sram_end);
  if (VAR_7)
   return VAR_7;

  FUNC_1(VAR_3,
        VAR_0,
        VAR_8);
 }

 return FUNC_2(VAR_3, !VAR_4);
}
