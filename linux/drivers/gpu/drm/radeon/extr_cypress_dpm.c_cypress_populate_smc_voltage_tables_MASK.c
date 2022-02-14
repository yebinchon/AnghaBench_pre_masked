
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct rv7xx_power_info {scalar_t__ max_vddc_in_table; } ;
struct radeon_device {int dummy; } ;
struct TYPE_10__ {char count; int mask_low; TYPE_1__* entries; } ;
struct evergreen_power_info {TYPE_5__ vddci_voltage_table; TYPE_5__ vddc_voltage_table; } ;
struct TYPE_8__ {void** lowMask; scalar_t__* highMask; } ;
struct TYPE_9__ {unsigned char maxVDDCIndexInPPTable; TYPE_2__ voltageMaskTable; } ;
struct TYPE_7__ {scalar_t__ value; } ;
typedef TYPE_3__ RV770_SMC_STATETABLE ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct radeon_device*,TYPE_5__*,TYPE_3__*) ;
 struct evergreen_power_info* FUNC_2 (struct radeon_device*) ;
 struct rv7xx_power_info* FUNC_3 (struct radeon_device*) ;

int FUNC_4(struct radeon_device *VAR_2,
     RV770_SMC_STATETABLE *VAR_3)
{
 struct rv7xx_power_info *VAR_4 = FUNC_3(VAR_2);
 struct evergreen_power_info *VAR_5 = FUNC_2(VAR_2);
 unsigned char VAR_6;

 if (VAR_5->vddc_voltage_table.count) {
  FUNC_1(VAR_2,
         &VAR_5->vddc_voltage_table,
         VAR_3);

  VAR_3->voltageMaskTable.highMask[VAR_0] = 0;
  VAR_3->voltageMaskTable.lowMask[VAR_0] =
   FUNC_0(VAR_5->vddc_voltage_table.mask_low);

  for (VAR_6 = 0; VAR_6 < VAR_5->vddc_voltage_table.count; VAR_6++) {
   if (VAR_4->max_vddc_in_table <=
       VAR_5->vddc_voltage_table.entries[VAR_6].value) {
    VAR_3->maxVDDCIndexInPPTable = VAR_6;
    break;
   }
  }
 }

 if (VAR_5->vddci_voltage_table.count) {
  FUNC_1(VAR_2,
         &VAR_5->vddci_voltage_table,
         VAR_3);

  VAR_3->voltageMaskTable.highMask[VAR_1] = 0;
  VAR_3->voltageMaskTable.lowMask[VAR_1] =
   FUNC_0(VAR_5->vddci_voltage_table.mask_low);
 }

 return 0;
}
