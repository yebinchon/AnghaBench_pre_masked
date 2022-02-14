
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
struct TYPE_6__ {struct vega10_single_dpm_table soc_table; struct vega10_single_dpm_table gfx_table; } ;
struct TYPE_8__ {int * SocDpmVoltageIndex; int * SocclkDid; int GfxclkSlewRate; int * AcgFreqTable; int * GfxclkLevel; } ;
struct TYPE_5__ {TYPE_4__ pp_table; } ;
struct vega10_hwmgr {TYPE_2__ dpm_table; TYPE_1__ smc_state_table; } ;
struct pp_hwmgr {scalar_t__ pptable; struct vega10_hwmgr* backend; } ;
struct phm_ppt_v2_information {int us_gfxclk_slew_rate; } ;
struct TYPE_7__ {int value; } ;
typedef TYPE_4__ PPTable_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pp_hwmgr*,int ,int *,int *) ;
 int FUNC_2 (struct pp_hwmgr*,int ,int *,int *) ;

__attribute__((used)) static int FUNC_3(struct pp_hwmgr *VAR_2)
{
 struct vega10_hwmgr *VAR_3 = VAR_2->backend;
 struct phm_ppt_v2_information *VAR_4 =
   (struct phm_ppt_v2_information *)(VAR_2->pptable);
 PPTable_t *VAR_5 = &(VAR_3->smc_state_table.pp_table);
 struct vega10_single_dpm_table *VAR_6 = &(VAR_3->dpm_table.gfx_table);
 int VAR_7 = 0;
 uint32_t VAR_8, VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_6->count; VAR_8++) {
  VAR_7 = FUNC_1(VAR_2,
    VAR_6->dpm_levels[VAR_8].value,
    &(VAR_5->GfxclkLevel[VAR_8]),
    &(VAR_5->AcgFreqTable[VAR_8]));
  if (VAR_7)
   return VAR_7;
 }

 VAR_9 = VAR_8 - 1;
 while (VAR_8 < VAR_0) {
  VAR_7 = FUNC_1(VAR_2,
    VAR_6->dpm_levels[VAR_9].value,
    &(VAR_5->GfxclkLevel[VAR_8]),
    &(VAR_5->AcgFreqTable[VAR_8]));
  if (VAR_7)
   return VAR_7;
  VAR_8++;
 }

 VAR_5->GfxclkSlewRate =
   FUNC_0(VAR_4->us_gfxclk_slew_rate);

 VAR_6 = &(VAR_3->dpm_table.soc_table);
 for (VAR_8 = 0; VAR_8 < VAR_6->count; VAR_8++) {
  VAR_7 = FUNC_2(VAR_2,
    VAR_6->dpm_levels[VAR_8].value,
    &(VAR_5->SocclkDid[VAR_8]),
    &(VAR_5->SocDpmVoltageIndex[VAR_8]));
  if (VAR_7)
   return VAR_7;
 }

 VAR_9 = VAR_8 - 1;
 while (VAR_8 < VAR_1) {
  VAR_7 = FUNC_2(VAR_2,
    VAR_6->dpm_levels[VAR_9].value,
    &(VAR_5->SocclkDid[VAR_8]),
    &(VAR_5->SocDpmVoltageIndex[VAR_8]));
  if (VAR_7)
   return VAR_7;
  VAR_8++;
 }

 return VAR_7;
}
