
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct vega10_single_dpm_table {TYPE_2__* dpm_levels; } ;
struct vega10_odn_dpm_table {scalar_t__ min_vddc; scalar_t__ max_vddc; } ;
struct TYPE_5__ {struct vega10_single_dpm_table mem_table; struct vega10_single_dpm_table gfx_table; } ;
struct vega10_hwmgr {TYPE_1__ golden_dpm_table; struct vega10_odn_dpm_table odn_dpm_table; } ;
struct TYPE_7__ {scalar_t__ engineClock; scalar_t__ memoryClock; } ;
struct TYPE_8__ {TYPE_3__ overdriveLimit; } ;
struct pp_hwmgr {TYPE_4__ platform_descriptor; struct vega10_hwmgr* backend; } ;
typedef enum PP_OD_DPM_TABLE_COMMAND { ____Placeholder_PP_OD_DPM_TABLE_COMMAND } PP_OD_DPM_TABLE_COMMAND ;
struct TYPE_6__ {scalar_t__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int) ;

__attribute__((used)) static bool FUNC_1(struct pp_hwmgr *VAR_2,
     enum PP_OD_DPM_TABLE_COMMAND VAR_3,
     uint32_t VAR_4,
     uint32_t VAR_5)
{
 struct vega10_hwmgr *VAR_6 = VAR_2->backend;
 struct vega10_odn_dpm_table *VAR_7 = &(VAR_6->odn_dpm_table);
 struct vega10_single_dpm_table *VAR_8;

 if (VAR_5 < VAR_7->min_vddc || VAR_5 > VAR_7->max_vddc) {
  FUNC_0("OD voltage is out of range [%d - %d] mV\n", VAR_7->min_vddc, VAR_7->max_vddc);
  return 0;
 }

 if (VAR_3 == VAR_1) {
  VAR_8 = &(VAR_6->golden_dpm_table.gfx_table);
  if (VAR_8->dpm_levels[0].value > VAR_4 ||
   VAR_2->platform_descriptor.overdriveLimit.engineClock < VAR_4) {
   FUNC_0("OD engine clock is out of range [%d - %d] MHz\n",
    VAR_8->dpm_levels[0].value/100,
    VAR_2->platform_descriptor.overdriveLimit.engineClock/100);
   return 0;
  }
 } else if (VAR_3 == VAR_0) {
  VAR_8 = &(VAR_6->golden_dpm_table.mem_table);
  if (VAR_8->dpm_levels[0].value > VAR_4 ||
   VAR_2->platform_descriptor.overdriveLimit.memoryClock < VAR_4) {
   FUNC_0("OD memory clock is out of range [%d - %d] MHz\n",
    VAR_8->dpm_levels[0].value/100,
    VAR_2->platform_descriptor.overdriveLimit.memoryClock/100);
   return 0;
  }
 } else {
  return 0;
 }

 return 1;
}
