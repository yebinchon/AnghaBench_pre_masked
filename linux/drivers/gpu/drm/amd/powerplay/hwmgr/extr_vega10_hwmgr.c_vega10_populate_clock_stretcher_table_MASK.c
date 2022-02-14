
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef size_t uint32_t ;
struct TYPE_6__ {scalar_t__* CksVidOffset; int * CksEnable; } ;
struct TYPE_4__ {TYPE_3__ pp_table; } ;
struct vega10_hwmgr {TYPE_1__ smc_state_table; } ;
struct pp_hwmgr {scalar_t__ pptable; struct vega10_hwmgr* backend; } ;
struct phm_ppt_v2_information {struct phm_ppt_v1_clock_voltage_dependency_table* vdd_dep_on_sclk; } ;
struct phm_ppt_v1_clock_voltage_dependency_table {size_t count; TYPE_2__* entries; } ;
struct TYPE_5__ {int cks_voffset; int cks_enable; } ;
typedef TYPE_3__ PPTable_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct pp_hwmgr *VAR_2)
{
 struct vega10_hwmgr *VAR_3 = VAR_2->backend;
 PPTable_t *VAR_4 = &(VAR_3->smc_state_table.pp_table);
 struct phm_ppt_v2_information *VAR_5 =
   (struct phm_ppt_v2_information *)(VAR_2->pptable);
 struct phm_ppt_v1_clock_voltage_dependency_table *VAR_6 =
   VAR_5->vdd_dep_on_sclk;
 uint32_t VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_6->count; VAR_7++) {
  VAR_4->CksEnable[VAR_7] = VAR_6->entries[VAR_7].cks_enable;
  VAR_4->CksVidOffset[VAR_7] = (uint8_t)(VAR_6->entries[VAR_7].cks_voffset
    * VAR_1 / VAR_0);
 }

 return 0;
}
