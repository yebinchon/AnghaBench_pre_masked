
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u32 ;
typedef int u16 ;
struct si_power_info {TYPE_5__* powertune_data; } ;
struct radeon_cac_leakage_table {size_t count; TYPE_4__* entries; } ;
struct TYPE_6__ {struct radeon_cac_leakage_table cac_leakage_table; } ;
struct TYPE_7__ {TYPE_1__ dyn_state; } ;
struct TYPE_8__ {TYPE_2__ dpm; } ;
struct radeon_device {TYPE_3__ pm; } ;
struct TYPE_10__ {int lkge_lut_v0_percent; } ;
struct TYPE_9__ {int vddc; } ;


 int VAR_0 ;
 struct si_power_info* FUNC_0 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_1(struct radeon_device *VAR_1,
       u16 *VAR_2, u16 *VAR_3)
{
 struct si_power_info *VAR_4 = FUNC_0(VAR_1);
 struct radeon_cac_leakage_table *VAR_5 =
  &VAR_1->pm.dpm.dyn_state.cac_leakage_table;
 u32 VAR_6;
 u32 VAR_7;


 if (VAR_5 == ((void*)0))
  return -VAR_0;

 *VAR_2 = 0;
 *VAR_3 = 0xFFFF;

 for (VAR_6 = 0; VAR_6 < VAR_5->count; VAR_6++) {
  if (VAR_5->entries[VAR_6].vddc > *VAR_2)
   *VAR_2 = VAR_5->entries[VAR_6].vddc;
  if (VAR_5->entries[VAR_6].vddc < *VAR_3)
   *VAR_3 = VAR_5->entries[VAR_6].vddc;
 }

 if (VAR_4->powertune_data->lkge_lut_v0_percent > 100)
  return -VAR_0;

 VAR_7 = (*VAR_3) * (100 - VAR_4->powertune_data->lkge_lut_v0_percent) / 100;

 if (VAR_7 > 0xFFFFUL)
  return -VAR_0;

 *VAR_3 = (u16)VAR_7;

 if ((*VAR_3 > *VAR_2) || (*VAR_2 == 0) || (*VAR_3 == 0))
  return -VAR_0;

 return 0;
}
