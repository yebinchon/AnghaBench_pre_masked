
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct vega10_pcie_table {size_t count; int * lclk; int * pcie_lane; int * pcie_gen; } ;
struct TYPE_5__ {struct vega10_pcie_table pcie_table; } ;
struct TYPE_6__ {int * LclkDid; int * PcieLaneCount; int * PcieGenSpeed; } ;
struct TYPE_4__ {TYPE_3__ pp_table; } ;
struct vega10_hwmgr {TYPE_2__ dpm_table; TYPE_1__ smc_state_table; } ;
struct pp_hwmgr {struct vega10_hwmgr* backend; } ;
typedef TYPE_3__ PPTable_t ;


 size_t VAR_0 ;
 int FUNC_0 (char*,size_t) ;
 int FUNC_1 (struct pp_hwmgr*,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_1)
{
 int VAR_2 = -1;
 struct vega10_hwmgr *VAR_3 = VAR_1->backend;
 PPTable_t *VAR_4 = &(VAR_3->smc_state_table.pp_table);
 struct vega10_pcie_table *VAR_5 =
   &(VAR_3->dpm_table.pcie_table);
 uint32_t VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_5->count; VAR_6++) {
  VAR_4->PcieGenSpeed[VAR_6] = VAR_5->pcie_gen[VAR_6];
  VAR_4->PcieLaneCount[VAR_6] = VAR_5->pcie_lane[VAR_6];

  VAR_2 = FUNC_1(VAR_1,
    VAR_5->lclk[VAR_6], &(VAR_4->LclkDid[VAR_6]));
  if (VAR_2) {
   FUNC_0("Populate LClock Level %d Failed!\n", VAR_6);
   return VAR_2;
  }
 }

 VAR_7 = VAR_6 - 1;
 while (VAR_6 < VAR_0) {
  VAR_4->PcieGenSpeed[VAR_6] = VAR_5->pcie_gen[VAR_7];
  VAR_4->PcieLaneCount[VAR_6] = VAR_5->pcie_lane[VAR_7];

  VAR_2 = FUNC_1(VAR_1,
    VAR_5->lclk[VAR_7], &(VAR_4->LclkDid[VAR_6]));
  if (VAR_2) {
   FUNC_0("Populate LClock Level %d Failed!\n", VAR_6);
   return VAR_2;
  }
  VAR_6++;
 }

 return VAR_2;
}
