
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef size_t uint32_t ;
struct TYPE_7__ {TYPE_1__* entries; } ;
struct smu7_hwmgr {scalar_t__ vdd_gfx_control; TYPE_2__ vddc_voltage_table; } ;
struct pp_hwmgr {scalar_t__ pptable; scalar_t__ backend; } ;
struct phm_ppt_v1_voltage_lookup_table {TYPE_3__* entries; } ;
struct phm_ppt_v1_information {struct phm_ppt_v1_voltage_lookup_table* vddc_lookup_table; struct phm_ppt_v1_voltage_lookup_table* vddgfx_lookup_table; } ;
struct TYPE_9__ {void** BapmVddGfxVidHiSidd2; void** BapmVddGfxVidHiSidd; void** BapmVddGfxVidLoSidd; void** BapmVddcVidHiSidd2; void** BapmVddcVidHiSidd; void** BapmVddcVidLoSidd; int VddGfxLevelCount; int VddcLevelCount; } ;
struct TYPE_8__ {int us_cac_high; int us_cac_mid; int us_cac_low; } ;
struct TYPE_6__ {void* value; } ;
typedef TYPE_4__ SMU72_Discrete_DpmTable ;


 size_t FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 void* FUNC_1 (int ) ;
 size_t FUNC_2 (struct phm_ppt_v1_voltage_lookup_table*,void*) ;

__attribute__((used)) static int FUNC_3(struct pp_hwmgr *VAR_1,
   SMU72_Discrete_DpmTable *VAR_2)
{
 uint32_t VAR_3;
 uint8_t VAR_4 = 0;
 struct smu7_hwmgr *VAR_5 = (struct smu7_hwmgr *)(VAR_1->backend);
 struct phm_ppt_v1_information *VAR_6 =
   (struct phm_ppt_v1_information *)(VAR_1->pptable);
 struct phm_ppt_v1_voltage_lookup_table *VAR_7 =
        VAR_6->vddgfx_lookup_table;
 struct phm_ppt_v1_voltage_lookup_table *VAR_8 =
      VAR_6->vddc_lookup_table;




 uint32_t VAR_9 = FUNC_0(VAR_2->VddcLevelCount);
 uint32_t VAR_10 = FUNC_0(VAR_2->VddGfxLevelCount);

 for (VAR_3 = 0; VAR_3 < VAR_9; VAR_3++) {

  VAR_4 = FUNC_2(VAR_8,
   VAR_5->vddc_voltage_table.entries[VAR_3].value);
  VAR_2->BapmVddcVidLoSidd[VAR_3] =
   FUNC_1(VAR_8->entries[VAR_4].us_cac_low);
  VAR_2->BapmVddcVidHiSidd[VAR_3] =
   FUNC_1(VAR_8->entries[VAR_4].us_cac_mid);
  VAR_2->BapmVddcVidHiSidd2[VAR_3] =
   FUNC_1(VAR_8->entries[VAR_4].us_cac_high);
 }

 if (VAR_5->vdd_gfx_control == VAR_0) {

  for (VAR_3 = 0; VAR_3 < VAR_10; VAR_3++) {
   VAR_4 = FUNC_2(VAR_7,
    FUNC_1(VAR_7->entries[VAR_4].us_cac_mid));
   VAR_2->BapmVddGfxVidHiSidd2[VAR_3] =
    FUNC_1(VAR_7->entries[VAR_4].us_cac_high);
  }
 } else {
  for (VAR_3 = 0; VAR_3 < VAR_9; VAR_3++) {
   VAR_4 = FUNC_2(VAR_8,
    VAR_5->vddc_voltage_table.entries[VAR_3].value);
   VAR_2->BapmVddGfxVidLoSidd[VAR_3] =
    FUNC_1(VAR_8->entries[VAR_4].us_cac_low);
   VAR_2->BapmVddGfxVidHiSidd[VAR_3] =
    FUNC_1(VAR_8->entries[VAR_4].us_cac_mid);
   VAR_2->BapmVddGfxVidHiSidd2[VAR_3] =
    FUNC_1(VAR_8->entries[VAR_4].us_cac_high);
  }
 }

 return 0;
}
