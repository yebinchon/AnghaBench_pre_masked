
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_11__ {scalar_t__ sclk_bootup_value; scalar_t__ mclk_bootup_value; } ;
struct smu7_hwmgr {TYPE_5__ vbios_boot_state; } ;
struct pp_hwmgr {scalar_t__ pptable; scalar_t__ smu_backend; scalar_t__ backend; } ;
struct phm_ppt_v1_information {TYPE_4__* vdd_dep_on_mclk; TYPE_2__* vdd_dep_on_sclk; } ;
struct TYPE_12__ {size_t GraphicsBootLevel; size_t MemoryBootLevel; } ;
struct fiji_smumgr {TYPE_6__ smc_state_table; } ;
struct TYPE_10__ {TYPE_3__* entries; scalar_t__ count; } ;
struct TYPE_9__ {scalar_t__ clk; } ;
struct TYPE_8__ {TYPE_1__* entries; scalar_t__ count; } ;
struct TYPE_7__ {scalar_t__ clk; } ;



__attribute__((used)) static int FUNC_0(struct pp_hwmgr *VAR_0)
{
 struct smu7_hwmgr *VAR_1 = (struct smu7_hwmgr *)(VAR_0->backend);
 struct fiji_smumgr *VAR_2 = (struct fiji_smumgr *)(VAR_0->smu_backend);
 struct phm_ppt_v1_information *VAR_3 =
   (struct phm_ppt_v1_information *)(VAR_0->pptable);
 uint8_t VAR_4, VAR_5;

 VAR_4 = (uint8_t)(VAR_3->vdd_dep_on_sclk->count);
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  if (VAR_3->vdd_dep_on_sclk->entries[VAR_5].clk >=
    VAR_1->vbios_boot_state.sclk_bootup_value) {
   VAR_2->smc_state_table.GraphicsBootLevel = VAR_5;
   break;
  }
 }

 VAR_4 = (uint8_t)(VAR_3->vdd_dep_on_mclk->count);
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  if (VAR_3->vdd_dep_on_mclk->entries[VAR_5].clk >=
    VAR_1->vbios_boot_state.mclk_bootup_value) {
   VAR_2->smc_state_table.MemoryBootLevel = VAR_5;
   break;
  }
 }

 return 0;
}
