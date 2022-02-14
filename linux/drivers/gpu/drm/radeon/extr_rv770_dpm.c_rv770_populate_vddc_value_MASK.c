
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct rv7xx_power_info {int valid_vddc_entries; TYPE_1__* vddc_table; int voltage_control; } ;
struct radeon_device {int dummy; } ;
struct TYPE_5__ {scalar_t__ value; int index; } ;
struct TYPE_4__ {scalar_t__ vddc; int vddc_index; } ;
typedef TYPE_2__ RV770_SMC_VOLTAGE_VALUE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 struct rv7xx_power_info* FUNC_1 (struct radeon_device*) ;

int FUNC_2(struct radeon_device *VAR_1, u16 VAR_2,
         RV770_SMC_VOLTAGE_VALUE *VAR_3)
{
 struct rv7xx_power_info *VAR_4 = FUNC_1(VAR_1);
 int VAR_5;

 if (!VAR_4->voltage_control) {
  VAR_3->index = 0;
  VAR_3->value = 0;
  return 0;
 }

 for (VAR_5 = 0; VAR_5 < VAR_4->valid_vddc_entries; VAR_5++) {
  if (VAR_2 <= VAR_4->vddc_table[VAR_5].vddc) {
   VAR_3->index = VAR_4->vddc_table[VAR_5].vddc_index;
   VAR_3->value = FUNC_0(VAR_2);
   break;
  }
 }

 if (VAR_5 == VAR_4->valid_vddc_entries)
  return -VAR_0;

 return 0;
}
