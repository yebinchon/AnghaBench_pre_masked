
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef size_t u32 ;
struct radeon_clock_voltage_dependency_table {scalar_t__ count; TYPE_4__* entries; } ;
struct TYPE_6__ {struct radeon_clock_voltage_dependency_table acp_clock_voltage_dependency_table; } ;
struct TYPE_7__ {TYPE_1__ dyn_state; } ;
struct TYPE_8__ {TYPE_2__ dpm; } ;
struct radeon_device {TYPE_3__ pm; } ;
struct kv_power_info {int acp_interval; int sram_end; TYPE_5__* acp_level; scalar_t__ dpm_table_start; scalar_t__ acp_level_count; } ;
struct atom_clock_dividers {int post_div; } ;
struct TYPE_10__ {scalar_t__ Divider; int MinVoltage; int Frequency; } ;
struct TYPE_9__ {int clk; int v; } ;
typedef int SMU7_Fusion_ExtClkLevel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct radeon_device*,scalar_t__,scalar_t__*,int,int ) ;
 struct kv_power_info* FUNC_3 (struct radeon_device*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (struct radeon_device*,int ,int ,int,struct atom_clock_dividers*) ;

__attribute__((used)) static int FUNC_6(struct radeon_device *VAR_6)
{
 struct kv_power_info *VAR_7 = FUNC_3(VAR_6);
 struct radeon_clock_voltage_dependency_table *VAR_8 =
  &VAR_6->pm.dpm.dyn_state.acp_clock_voltage_dependency_table;
 struct atom_clock_dividers VAR_9;
 int VAR_10;
 u32 VAR_11;

 if (VAR_8 == ((void*)0) || VAR_8->count == 0)
  return 0;

 VAR_7->acp_level_count = 0;
 for (VAR_11 = 0; VAR_11 < VAR_8->count; VAR_11++) {
  VAR_7->acp_level[VAR_11].Frequency = FUNC_1(VAR_8->entries[VAR_11].clk);
  VAR_7->acp_level[VAR_11].MinVoltage = FUNC_0(VAR_8->entries[VAR_11].v);

  VAR_10 = FUNC_5(VAR_6, VAR_3,
           VAR_8->entries[VAR_11].clk, 0, &VAR_9);
  if (VAR_10)
   return VAR_10;
  VAR_7->acp_level[VAR_11].Divider = (u8)VAR_9.post_div;

  VAR_7->acp_level_count++;
 }

 VAR_10 = FUNC_2(VAR_6,
       VAR_7->dpm_table_start +
       FUNC_4(VAR_4, VAR_2),
       (u8 *)&VAR_7->acp_level_count,
       sizeof(u8),
       VAR_7->sram_end);
 if (VAR_10)
  return VAR_10;

 VAR_7->acp_interval = 1;

 VAR_10 = FUNC_2(VAR_6,
       VAR_7->dpm_table_start +
       FUNC_4(VAR_4, VAR_0),
       (u8 *)&VAR_7->acp_interval,
       sizeof(u8),
       VAR_7->sram_end);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_2(VAR_6,
       VAR_7->dpm_table_start +
       FUNC_4(VAR_4, VAR_1),
       (u8 *)&VAR_7->acp_level,
       sizeof(SMU7_Fusion_ExtClkLevel) * VAR_5,
       VAR_7->sram_end);
 if (VAR_10)
  return VAR_10;

 return VAR_10;
}
