
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef size_t uint32_t ;
struct TYPE_5__ {TYPE_1__* entries; } ;
struct smu7_hwmgr {TYPE_2__ vddc_voltage_table; } ;
struct pp_hwmgr {scalar_t__ pptable; scalar_t__ backend; } ;
struct phm_ppt_v1_voltage_lookup_table {size_t count; TYPE_3__* entries; } ;
struct phm_ppt_v1_information {struct phm_ppt_v1_voltage_lookup_table* vddc_lookup_table; } ;
struct SMU74_Discrete_DpmTable {void** BapmVddcVidHiSidd2; void** BapmVddcVidHiSidd; void** BapmVddcVidLoSidd; } ;
struct TYPE_6__ {int us_cac_high; int us_cac_mid; int us_cac_low; } ;
struct TYPE_4__ {int value; } ;


 void* FUNC_0 (int ) ;
 size_t FUNC_1 (struct phm_ppt_v1_voltage_lookup_table*,int ) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_0,
  struct SMU74_Discrete_DpmTable *VAR_1)
{
 uint32_t VAR_2;
 uint8_t VAR_3;
 struct smu7_hwmgr *VAR_4 = (struct smu7_hwmgr *)(VAR_0->backend);
 struct phm_ppt_v1_information *VAR_5 =
   (struct phm_ppt_v1_information *)(VAR_0->pptable);
 struct phm_ppt_v1_voltage_lookup_table *VAR_6 =
   VAR_5->vddc_lookup_table;





 for (VAR_2 = 0; VAR_2 < VAR_6->count; VAR_2++) {
  VAR_3 = FUNC_1(VAR_6,
    VAR_4->vddc_voltage_table.entries[VAR_2].value);
  VAR_1->BapmVddcVidLoSidd[VAR_2] = FUNC_0(VAR_6->entries[VAR_3].us_cac_low);
  VAR_1->BapmVddcVidHiSidd[VAR_2] = FUNC_0(VAR_6->entries[VAR_3].us_cac_mid);
  VAR_1->BapmVddcVidHiSidd2[VAR_2] = FUNC_0(VAR_6->entries[VAR_3].us_cac_high);
 }

 return 0;
}
