
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vegam_smumgr {int * bif_sclk_table; } ;
struct pp_hwmgr {scalar_t__ pptable; scalar_t__ smu_backend; } ;
struct phm_ppt_v1_pcie_table {int count; TYPE_1__* entries; } ;
struct phm_ppt_v1_information {struct phm_ppt_v1_pcie_table* pcie_table; } ;
struct TYPE_2__ {int pcie_sclk; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct pp_hwmgr *VAR_1)
{
 struct vegam_smumgr *VAR_2 = (struct vegam_smumgr *)(VAR_1->smu_backend);
 struct phm_ppt_v1_information *VAR_3 =
   (struct phm_ppt_v1_information *)(VAR_1->pptable);
 struct phm_ppt_v1_pcie_table *VAR_4 = VAR_3->pcie_table;
 int VAR_5, VAR_6;

 VAR_5 = (VAR_0 < VAR_4->count) ?
      VAR_0 :
      VAR_4->count;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
  VAR_2->bif_sclk_table[VAR_6] = VAR_4->entries[VAR_6].pcie_sclk;
 return 0;
}
