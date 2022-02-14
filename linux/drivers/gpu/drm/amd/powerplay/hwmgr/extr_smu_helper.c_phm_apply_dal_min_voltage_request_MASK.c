
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct pp_hwmgr {int dal_power_level; scalar_t__ pptable; } ;
struct phm_ppt_v1_information {struct phm_ppt_v1_clock_voltage_dependency_table* vdd_dep_on_sclk; struct phm_clock_voltage_dependency_table* vddc_dep_on_dal_pwrl; } ;
struct phm_ppt_v1_clock_voltage_dependency_table {size_t count; TYPE_2__* entries; } ;
struct phm_clock_voltage_dependency_table {scalar_t__ count; TYPE_1__* entries; } ;
typedef enum PP_DAL_POWERLEVEL { ____Placeholder_PP_DAL_POWERLEVEL } PP_DAL_POWERLEVEL ;
struct TYPE_4__ {size_t vddc; } ;
struct TYPE_3__ {int clk; size_t v; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct pp_hwmgr*,int ,size_t) ;

void FUNC_2(struct pp_hwmgr *VAR_4)
{
 struct phm_ppt_v1_information *VAR_5 =
   (struct phm_ppt_v1_information *)VAR_4->pptable;
 struct phm_clock_voltage_dependency_table *VAR_6 =
    VAR_5->vddc_dep_on_dal_pwrl;
 struct phm_ppt_v1_clock_voltage_dependency_table *VAR_7;
 enum PP_DAL_POWERLEVEL VAR_8 = VAR_4->dal_power_level;
 uint32_t VAR_9 = 0, VAR_10, VAR_11;

 if (!VAR_6 || VAR_6->count <= 0
  || VAR_8 < VAR_2
  || VAR_8 > VAR_1)
  return;

 for (VAR_11 = 0; VAR_11 < VAR_6->count; VAR_11++) {
  if (VAR_8 == VAR_6->entries[VAR_11].clk) {
   VAR_9 = VAR_6->entries[VAR_11].v;
   break;
  }
 }

 VAR_7 = VAR_5->vdd_dep_on_sclk;
 for (VAR_11 = 0; VAR_11 < VAR_7->count; VAR_11++) {
  if (VAR_9 <= VAR_7->entries[VAR_11].vddc) {
   VAR_10 = (((uint32_t)VAR_7->entries[VAR_11].vddc) * VAR_3);
   FUNC_1(VAR_4,
     VAR_0, VAR_10);
   return;
  }
 }
 FUNC_0("DAL requested level can not"
   " found a available voltage in VDDC DPM Table \n");
}
