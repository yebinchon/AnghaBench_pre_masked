
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int min_vddc; int max_vddc; } ;
struct smu7_hwmgr {TYPE_2__ odn_dpm_table; } ;
struct pp_hwmgr {scalar_t__ pptable; scalar_t__ backend; } ;
struct phm_ppt_v1_information {struct phm_ppt_v1_clock_voltage_dependency_table* vdd_dep_on_sclk; } ;
struct phm_ppt_v1_clock_voltage_dependency_table {int count; TYPE_1__* entries; } ;
struct TYPE_3__ {int vddc; } ;


 int FUNC_0 (struct pp_hwmgr*,int*,int*) ;

__attribute__((used)) static void FUNC_1(struct pp_hwmgr *VAR_0)
{
 struct smu7_hwmgr *VAR_1 = (struct smu7_hwmgr *)(VAR_0->backend);
 struct phm_ppt_v1_clock_voltage_dependency_table *VAR_2;
 struct phm_ppt_v1_information *VAR_3 =
   (struct phm_ppt_v1_information *)(VAR_0->pptable);
 uint32_t VAR_4 = 0;
 uint32_t VAR_5 = 0;

 if (!VAR_3)
  return;

 VAR_2 = VAR_3->vdd_dep_on_sclk;

 FUNC_0(VAR_0, &VAR_5, &VAR_4);

 if (VAR_4 == 0 || VAR_4 > 2000
  || VAR_4 > VAR_2->entries[0].vddc)
  VAR_4 = VAR_2->entries[0].vddc;

 if (VAR_5 == 0 || VAR_5 > 2000
  || VAR_5 < VAR_2->entries[VAR_2->count-1].vddc)
  VAR_5 = VAR_2->entries[VAR_2->count-1].vddc;

 VAR_1->odn_dpm_table.min_vddc = VAR_4;
 VAR_1->odn_dpm_table.max_vddc = VAR_5;
}
