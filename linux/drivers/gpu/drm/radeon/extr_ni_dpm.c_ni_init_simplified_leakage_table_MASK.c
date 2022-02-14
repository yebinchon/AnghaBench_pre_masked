
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t u32 ;
struct radeon_cac_leakage_table {size_t count; TYPE_5__* entries; } ;
struct TYPE_8__ {struct radeon_cac_leakage_table cac_leakage_table; } ;
struct TYPE_9__ {TYPE_1__ dyn_state; } ;
struct TYPE_10__ {TYPE_2__ dpm; } ;
struct radeon_device {TYPE_3__ pm; } ;
struct TYPE_11__ {size_t count; } ;
struct evergreen_power_info {TYPE_4__ vddc_voltage_table; } ;
struct TYPE_13__ {void*** cac_lkge_lut; } ;
struct TYPE_12__ {size_t leakage; } ;
typedef TYPE_6__ PP_NIslands_CACTABLES ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 void* FUNC_0 (int ) ;
 struct evergreen_power_info* FUNC_1 (struct radeon_device*) ;
 size_t FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (size_t,size_t) ;

__attribute__((used)) static int FUNC_4(struct radeon_device *VAR_3,
         PP_NIslands_CACTABLES *VAR_4)
{
 struct evergreen_power_info *VAR_5 = FUNC_1(VAR_3);
 struct radeon_cac_leakage_table *VAR_6 =
  &VAR_3->pm.dpm.dyn_state.cac_leakage_table;
 u32 VAR_7, VAR_8, VAR_9;
 u32 VAR_10, VAR_11 = 0;
 u32 VAR_12;

 if (!VAR_6)
  return -VAR_0;

 VAR_9 = VAR_6->count;

 if (VAR_5->vddc_voltage_table.count != VAR_9)
  VAR_9 = (VAR_5->vddc_voltage_table.count < VAR_6->count) ?
   VAR_5->vddc_voltage_table.count : VAR_6->count;

 if (VAR_2 < VAR_9)
  VAR_9 = VAR_2;

 if (VAR_9 == 0)
  return -VAR_0;

 VAR_12 = FUNC_2(VAR_3);

 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  VAR_10 = VAR_6->entries[VAR_8].leakage;

  if (VAR_10 > VAR_11)
   VAR_11 = VAR_10;

  for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
   VAR_4->cac_lkge_lut[VAR_7][VAR_8] =
    FUNC_0(FUNC_3(VAR_10, VAR_12));
 }

 for (VAR_8 = VAR_9; VAR_8 < VAR_2; VAR_8++) {
  for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
   VAR_4->cac_lkge_lut[VAR_7][VAR_8] =
    FUNC_0(FUNC_3(VAR_11, VAR_12));
 }
 return 0;
}
