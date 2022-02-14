
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
struct vega10_single_dpm_table {size_t count; TYPE_3__* dpm_levels; } ;
struct TYPE_6__ {struct vega10_single_dpm_table eclk_table; } ;
struct TYPE_8__ {int * VceDpmVoltageIndex; int * EclkDid; } ;
struct TYPE_5__ {TYPE_4__ pp_table; } ;
struct vega10_hwmgr {TYPE_2__ dpm_table; TYPE_1__ smc_state_table; } ;
struct pp_hwmgr {struct vega10_hwmgr* backend; } ;
struct TYPE_7__ {int value; } ;
typedef TYPE_4__ PPTable_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct pp_hwmgr*,int ,int *,int *) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_2)
{
 struct vega10_hwmgr *VAR_3 = VAR_2->backend;
 PPTable_t *VAR_4 = &(VAR_3->smc_state_table.pp_table);
 struct vega10_single_dpm_table *VAR_5 = &(VAR_3->dpm_table.eclk_table);
 int VAR_6 = -VAR_0;
 uint32_t VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_5->count; VAR_7++) {
  VAR_6 = FUNC_0(VAR_2,
    VAR_5->dpm_levels[VAR_7].value,
    &(VAR_4->EclkDid[VAR_7]),
    &(VAR_4->VceDpmVoltageIndex[VAR_7]));
  if (VAR_6)
   return VAR_6;
 }

 VAR_8 = VAR_7 - 1;
 while (VAR_7 < VAR_1) {
  VAR_6 = FUNC_0(VAR_2,
    VAR_5->dpm_levels[VAR_8].value,
    &(VAR_4->EclkDid[VAR_7]),
    &(VAR_4->VceDpmVoltageIndex[VAR_7]));
  if (VAR_6)
   return VAR_6;
  VAR_7++;
 }

 return VAR_6;
}
