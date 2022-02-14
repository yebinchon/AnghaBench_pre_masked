
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_13__ {scalar_t__ sclk_bootup_value; scalar_t__ mclk_bootup_value; } ;
struct smu7_hwmgr {TYPE_6__ vbios_boot_state; } ;
struct TYPE_12__ {TYPE_4__* vddc_dependency_on_mclk; TYPE_2__* vddc_dependency_on_sclk; } ;
struct pp_hwmgr {TYPE_5__ dyn_state; scalar_t__ smu_backend; scalar_t__ backend; } ;
struct TYPE_14__ {size_t GraphicsBootLevel; size_t MemoryBootLevel; } ;
struct ci_smumgr {TYPE_7__ smc_state_table; } ;
struct TYPE_11__ {TYPE_3__* entries; scalar_t__ count; } ;
struct TYPE_10__ {scalar_t__ clk; } ;
struct TYPE_9__ {TYPE_1__* entries; scalar_t__ count; } ;
struct TYPE_8__ {scalar_t__ clk; } ;



__attribute__((used)) static int FUNC_0(struct pp_hwmgr *VAR_0)
{
 struct smu7_hwmgr *VAR_1 = (struct smu7_hwmgr *)(VAR_0->backend);
 struct ci_smumgr *VAR_2 = (struct ci_smumgr *)(VAR_0->smu_backend);
 uint8_t VAR_3, VAR_4;

 VAR_3 = (uint8_t)(VAR_0->dyn_state.vddc_dependency_on_sclk->count);

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  if (VAR_0->dyn_state.vddc_dependency_on_sclk->entries[VAR_4].clk
    >= VAR_1->vbios_boot_state.sclk_bootup_value) {
   VAR_2->smc_state_table.GraphicsBootLevel = VAR_4;
   break;
  }
 }

 VAR_3 = (uint8_t)(VAR_0->dyn_state.vddc_dependency_on_mclk->count);

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  if (VAR_0->dyn_state.vddc_dependency_on_mclk->entries[VAR_4].clk
   >= VAR_1->vbios_boot_state.mclk_bootup_value) {
   VAR_2->smc_state_table.MemoryBootLevel = VAR_4;
   break;
  }
 }

 return 0;
}
