
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct radeon_vce_clock_voltage_dependency_table {int count; } ;
struct radeon_ps {scalar_t__ evclk; } ;
struct TYPE_4__ {struct radeon_vce_clock_voltage_dependency_table vce_clock_voltage_dependency_table; } ;
struct TYPE_5__ {TYPE_1__ dyn_state; } ;
struct TYPE_6__ {TYPE_2__ dpm; } ;
struct radeon_device {TYPE_3__ pm; } ;
struct kv_power_info {int vce_boot_level; scalar_t__ caps_stable_p_state; int sram_end; scalar_t__ dpm_table_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct radeon_device*,int ,int) ;
 int FUNC_1 (struct radeon_device*,scalar_t__,int *,int,int ) ;
 int FUNC_2 (struct radeon_device*,int) ;
 int FUNC_3 (struct radeon_device*,int) ;
 struct kv_power_info* FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*,scalar_t__) ;
 int FUNC_6 (struct radeon_device*,int ,int) ;
 scalar_t__ FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct radeon_device *VAR_4,
        struct radeon_ps *VAR_5,
        struct radeon_ps *VAR_6)
{
 struct kv_power_info *VAR_7 = FUNC_4(VAR_4);
 struct radeon_vce_clock_voltage_dependency_table *VAR_8 =
  &VAR_4->pm.dpm.dyn_state.vce_clock_voltage_dependency_table;
 int VAR_9;

 if (VAR_5->evclk > 0 && VAR_6->evclk == 0) {
  FUNC_2(VAR_4, 0);

  FUNC_0(VAR_4, VAR_1, 0);
  if (VAR_7->caps_stable_p_state)
   VAR_7->vce_boot_level = VAR_8->count - 1;
  else
   VAR_7->vce_boot_level = FUNC_5(VAR_4, VAR_5->evclk);

  VAR_9 = FUNC_1(VAR_4,
        VAR_7->dpm_table_start +
        FUNC_7(VAR_2, VAR_3),
        (u8 *)&VAR_7->vce_boot_level,
        sizeof(u8),
        VAR_7->sram_end);
  if (VAR_9)
   return VAR_9;

  if (VAR_7->caps_stable_p_state)
   FUNC_6(VAR_4,
         VAR_0,
         (1 << VAR_7->vce_boot_level));

  FUNC_3(VAR_4, 1);
 } else if (VAR_5->evclk == 0 && VAR_6->evclk > 0) {
  FUNC_3(VAR_4, 0);

  FUNC_0(VAR_4, VAR_1, 1);
  FUNC_2(VAR_4, 1);
 }

 return 0;
}
