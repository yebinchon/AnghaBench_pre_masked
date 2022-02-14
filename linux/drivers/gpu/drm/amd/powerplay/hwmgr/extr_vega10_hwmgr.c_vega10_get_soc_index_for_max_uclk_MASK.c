
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pp_hwmgr {scalar_t__ pptable; } ;
struct phm_ppt_v2_information {struct phm_ppt_v1_clock_voltage_dependency_table* vdd_dep_on_mclk; } ;
struct phm_ppt_v1_clock_voltage_dependency_table {TYPE_1__* entries; } ;
struct TYPE_2__ {int vddInd; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct pp_hwmgr *VAR_1)
{
 struct phm_ppt_v1_clock_voltage_dependency_table *VAR_2;
 struct phm_ppt_v2_information *VAR_3 =
   (struct phm_ppt_v2_information *)(VAR_1->pptable);

 VAR_2 = VAR_3->vdd_dep_on_mclk;

 return VAR_2->entries[VAR_0 - 1].vddInd + 1;
}
