
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint8_t ;
typedef size_t uint32_t ;
struct TYPE_6__ {int vddc_lookup_table; } ;
struct TYPE_8__ {void** SocVid; } ;
struct TYPE_5__ {TYPE_4__ pp_table; } ;
struct vega10_hwmgr {TYPE_2__ odn_dpm_table; TYPE_1__ smc_state_table; } ;
struct pp_hwmgr {scalar_t__ od_enabled; struct phm_ppt_v2_information* pptable; struct vega10_hwmgr* backend; } ;
struct phm_ppt_v2_information {struct phm_ppt_v1_voltage_lookup_table* vddc_lookup_table; } ;
struct phm_ppt_v1_voltage_lookup_table {size_t count; TYPE_3__* entries; } ;
struct TYPE_7__ {int us_vdd; } ;
typedef TYPE_4__ PPTable_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct pp_hwmgr *VAR_1)
{
 struct vega10_hwmgr *VAR_2 = VAR_1->backend;
 PPTable_t *VAR_3 = &(VAR_2->smc_state_table.pp_table);
 struct phm_ppt_v2_information *VAR_4 = VAR_1->pptable;
 struct phm_ppt_v1_voltage_lookup_table *VAR_5;

 uint8_t VAR_6 = 0;
 uint32_t VAR_7, VAR_8;

 if (VAR_1->od_enabled)
  VAR_5 = (struct phm_ppt_v1_voltage_lookup_table *)&VAR_2->odn_dpm_table.vddc_lookup_table;
 else
  VAR_5 = VAR_4->vddc_lookup_table;

 VAR_8 = VAR_5->count;
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  VAR_6 = (uint8_t)FUNC_0(VAR_5->entries[VAR_7].us_vdd);
  VAR_3->SocVid[VAR_7] = VAR_6;
 }
 while (VAR_7 < VAR_0) {
  VAR_3->SocVid[VAR_7] = VAR_6;
  VAR_7++;
 }
}
