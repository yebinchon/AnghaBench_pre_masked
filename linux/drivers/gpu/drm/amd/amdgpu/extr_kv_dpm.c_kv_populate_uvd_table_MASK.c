
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
struct kv_power_info {scalar_t__ high_voltage_t; int uvd_interval; int sram_end; TYPE_5__* uvd_level; scalar_t__ dpm_table_start; scalar_t__ uvd_level_count; } ;
struct atom_clock_dividers {int post_div; } ;
struct amdgpu_uvd_clock_voltage_dependency_table {scalar_t__ count; TYPE_4__* entries; } ;
struct TYPE_6__ {struct amdgpu_uvd_clock_voltage_dependency_table uvd_clock_voltage_dependency_table; } ;
struct TYPE_7__ {TYPE_1__ dyn_state; } ;
struct TYPE_8__ {TYPE_2__ dpm; } ;
struct amdgpu_device {TYPE_3__ pm; } ;
struct TYPE_10__ {void* DclkDivider; void* VclkDivider; void* DClkBypassCntl; void* VClkBypassCntl; int MinVddNb; void* DclkFrequency; void* VclkFrequency; } ;
struct TYPE_9__ {scalar_t__ v; int dclk; int vclk; } ;
typedef int SMU7_Fusion_UvdLevel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct amdgpu_device*,int ,int ,int,struct atom_clock_dividers*) ;
 int FUNC_1 (struct amdgpu_device*,scalar_t__,void**,int,int ) ;
 int FUNC_2 (scalar_t__) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct amdgpu_device*,int ) ;
 struct kv_power_info* FUNC_5 (struct amdgpu_device*) ;
 scalar_t__ FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct amdgpu_device *VAR_6)
{
 struct kv_power_info *VAR_7 = FUNC_5(VAR_6);
 struct amdgpu_uvd_clock_voltage_dependency_table *VAR_8 =
  &VAR_6->pm.dpm.dyn_state.uvd_clock_voltage_dependency_table;
 struct atom_clock_dividers VAR_9;
 int VAR_10;
 u32 VAR_11;

 if (VAR_8 == ((void*)0) || VAR_8->count == 0)
  return 0;

 VAR_7->uvd_level_count = 0;
 for (VAR_11 = 0; VAR_11 < VAR_8->count; VAR_11++) {
  if (VAR_7->high_voltage_t &&
      (VAR_7->high_voltage_t < VAR_8->entries[VAR_11].v))
   break;

  VAR_7->uvd_level[VAR_11].VclkFrequency = FUNC_3(VAR_8->entries[VAR_11].vclk);
  VAR_7->uvd_level[VAR_11].DclkFrequency = FUNC_3(VAR_8->entries[VAR_11].dclk);
  VAR_7->uvd_level[VAR_11].MinVddNb = FUNC_2(VAR_8->entries[VAR_11].v);

  VAR_7->uvd_level[VAR_11].VClkBypassCntl =
   (u8)FUNC_4(VAR_6, VAR_8->entries[VAR_11].vclk);
  VAR_7->uvd_level[VAR_11].DClkBypassCntl =
   (u8)FUNC_4(VAR_6, VAR_8->entries[VAR_11].dclk);

  VAR_10 = FUNC_0(VAR_6, VAR_0,
        VAR_8->entries[VAR_11].vclk, 0, &VAR_9);
  if (VAR_10)
   return VAR_10;
  VAR_7->uvd_level[VAR_11].VclkDivider = (u8)VAR_9.post_div;

  VAR_10 = FUNC_0(VAR_6, VAR_0,
        VAR_8->entries[VAR_11].dclk, 0, &VAR_9);
  if (VAR_10)
   return VAR_10;
  VAR_7->uvd_level[VAR_11].DclkDivider = (u8)VAR_9.post_div;

  VAR_7->uvd_level_count++;
 }

 VAR_10 = FUNC_1(VAR_6,
       VAR_7->dpm_table_start +
       FUNC_6(VAR_1, VAR_5),
       (u8 *)&VAR_7->uvd_level_count,
       sizeof(u8), VAR_7->sram_end);
 if (VAR_10)
  return VAR_10;

 VAR_7->uvd_interval = 1;

 VAR_10 = FUNC_1(VAR_6,
       VAR_7->dpm_table_start +
       FUNC_6(VAR_1, VAR_3),
       &VAR_7->uvd_interval,
       sizeof(u8), VAR_7->sram_end);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_1(VAR_6,
       VAR_7->dpm_table_start +
       FUNC_6(VAR_1, VAR_4),
       (u8 *)&VAR_7->uvd_level,
       sizeof(SMU7_Fusion_UvdLevel) * VAR_2,
       VAR_7->sram_end);

 return VAR_10;

}
