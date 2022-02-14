
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* u8 ;
typedef size_t u32 ;
struct radeon_vce_clock_voltage_dependency_table {scalar_t__ count; TYPE_4__* entries; } ;
struct TYPE_6__ {struct radeon_vce_clock_voltage_dependency_table vce_clock_voltage_dependency_table; } ;
struct TYPE_7__ {TYPE_1__ dyn_state; } ;
struct TYPE_8__ {TYPE_2__ dpm; } ;
struct radeon_device {TYPE_3__ pm; } ;
struct kv_power_info {scalar_t__ high_voltage_t; int vce_interval; int sram_end; TYPE_5__* vce_level; scalar_t__ dpm_table_start; scalar_t__ vce_level_count; } ;
struct atom_clock_dividers {int post_div; } ;
struct TYPE_10__ {void* Divider; void* ClkBypassCntl; int MinVoltage; int Frequency; } ;
struct TYPE_9__ {scalar_t__ v; int evclk; } ;
typedef int SMU7_Fusion_ExtClkLevel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct radeon_device*,scalar_t__,void**,int,int ) ;
 int FUNC_3 (struct radeon_device*,int ) ;
 struct kv_power_info* FUNC_4 (struct radeon_device*) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (struct radeon_device*,int ,int ,int,struct atom_clock_dividers*) ;

__attribute__((used)) static int FUNC_7(struct radeon_device *VAR_6)
{
 struct kv_power_info *VAR_7 = FUNC_4(VAR_6);
 int VAR_8;
 u32 VAR_9;
 struct radeon_vce_clock_voltage_dependency_table *VAR_10 =
  &VAR_6->pm.dpm.dyn_state.vce_clock_voltage_dependency_table;
 struct atom_clock_dividers VAR_11;

 if (VAR_10 == ((void*)0) || VAR_10->count == 0)
  return 0;

 VAR_7->vce_level_count = 0;
 for (VAR_9 = 0; VAR_9 < VAR_10->count; VAR_9++) {
  if (VAR_7->high_voltage_t &&
      VAR_7->high_voltage_t < VAR_10->entries[VAR_9].v)
   break;

  VAR_7->vce_level[VAR_9].Frequency = FUNC_1(VAR_10->entries[VAR_9].evclk);
  VAR_7->vce_level[VAR_9].MinVoltage = FUNC_0(VAR_10->entries[VAR_9].v);

  VAR_7->vce_level[VAR_9].ClkBypassCntl =
   (u8)FUNC_3(VAR_6, VAR_10->entries[VAR_9].evclk);

  VAR_8 = FUNC_6(VAR_6, VAR_0,
           VAR_10->entries[VAR_9].evclk, 0, &VAR_11);
  if (VAR_8)
   return VAR_8;
  VAR_7->vce_level[VAR_9].Divider = (u8)VAR_11.post_div;

  VAR_7->vce_level_count++;
 }

 VAR_8 = FUNC_2(VAR_6,
       VAR_7->dpm_table_start +
       FUNC_5(VAR_1, VAR_5),
       (u8 *)&VAR_7->vce_level_count,
       sizeof(u8),
       VAR_7->sram_end);
 if (VAR_8)
  return VAR_8;

 VAR_7->vce_interval = 1;

 VAR_8 = FUNC_2(VAR_6,
       VAR_7->dpm_table_start +
       FUNC_5(VAR_1, VAR_3),
       (u8 *)&VAR_7->vce_interval,
       sizeof(u8),
       VAR_7->sram_end);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_2(VAR_6,
       VAR_7->dpm_table_start +
       FUNC_5(VAR_1, VAR_4),
       (u8 *)&VAR_7->vce_level,
       sizeof(SMU7_Fusion_ExtClkLevel) * VAR_2,
       VAR_7->sram_end);

 return VAR_8;
}
