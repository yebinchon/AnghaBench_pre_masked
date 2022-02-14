
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rv7xx_power_info {int valid_vddc_entries; scalar_t__ max_vddc_in_table; TYPE_2__* vddc_table; int vddc_mask_low; } ;
struct radeon_device {int dummy; } ;
struct TYPE_5__ {void** lowMask; scalar_t__* highMask; } ;
struct TYPE_7__ {size_t maxVDDCIndexInPPTable; TYPE_1__ voltageMaskTable; void** lowSMIO; int * highSMIO; } ;
struct TYPE_6__ {size_t vddc_index; scalar_t__ vddc; int low_smio; int high_smio; } ;
typedef TYPE_3__ RV770_SMC_STATETABLE ;


 size_t VAR_0 ;
 void* FUNC_0 (int ) ;
 struct rv7xx_power_info* FUNC_1 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_2(struct radeon_device *VAR_1,
      RV770_SMC_STATETABLE *VAR_2)
{
 struct rv7xx_power_info *VAR_3 = FUNC_1(VAR_1);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->valid_vddc_entries; VAR_4++) {
  VAR_2->highSMIO[VAR_3->vddc_table[VAR_4].vddc_index] =
   VAR_3->vddc_table[VAR_4].high_smio;
  VAR_2->lowSMIO[VAR_3->vddc_table[VAR_4].vddc_index] =
   FUNC_0(VAR_3->vddc_table[VAR_4].low_smio);
 }

 VAR_2->voltageMaskTable.highMask[VAR_0] = 0;
 VAR_2->voltageMaskTable.lowMask[VAR_0] =
  FUNC_0(VAR_3->vddc_mask_low);

 for (VAR_4 = 0;
      ((VAR_4 < VAR_3->valid_vddc_entries) &&
       (VAR_3->max_vddc_in_table >
        VAR_3->vddc_table[VAR_4].vddc));
      VAR_4++);

 VAR_2->maxVDDCIndexInPPTable =
  VAR_3->vddc_table[VAR_4].vddc_index;

 return 0;
}
