
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int vddci; int vddc; int mclk; int sclk; } ;
struct TYPE_10__ {TYPE_1__ max_clock_voltage_on_dc; } ;
struct pp_hwmgr {TYPE_2__ dyn_state; scalar_t__ pptable; } ;
struct TYPE_13__ {int vddci; int vddc; int mclk; int sclk; } ;
struct phm_ppt_v1_information {int * gpio_table; TYPE_5__* vdd_dep_on_sclk; int valid_sclk_values; TYPE_5__* vdd_dep_on_mclk; int valid_mclk_values; TYPE_8__ max_clock_voltage_on_dc; int * pcie_table; int cac_dtp_table; int * mm_dep_table; } ;
struct TYPE_12__ {scalar_t__ count; } ;
struct TYPE_11__ {scalar_t__ usMMDependencyTableOffset; scalar_t__ usPowerTuneTableOffset; scalar_t__ usMclkDependencyTableOffset; scalar_t__ usSclkDependencyTableOffset; scalar_t__ usHardLimitTableOffset; scalar_t__ usPCIETableOffset; scalar_t__ usGPIOTableOffset; } ;
typedef int PPTable_Generic_SubTable_Header ;
typedef TYPE_3__ ATOM_Tonga_POWERPLAYTABLE ;
typedef int ATOM_Tonga_MM_Dependency_Table ;
typedef int ATOM_Tonga_MCLK_Dependency_Table ;
typedef int ATOM_Tonga_Hard_Limit_Table ;
typedef int ATOM_Tonga_GPIO_Table ;


 int FUNC_0 (struct pp_hwmgr*,int *,int const*) ;
 int FUNC_1 (struct pp_hwmgr*,int **,int const*) ;
 int FUNC_2 (struct pp_hwmgr*,TYPE_8__*,int const*) ;
 int FUNC_3 (struct pp_hwmgr*,TYPE_5__**,int const*) ;
 int FUNC_4 (struct pp_hwmgr*,int **,int const*) ;
 int FUNC_5 (struct pp_hwmgr*,int **,int const*) ;
 int FUNC_6 (struct pp_hwmgr*,TYPE_5__**,int const*) ;
 int FUNC_7 (struct pp_hwmgr*,int *,TYPE_5__*) ;
 scalar_t__ FUNC_8 (scalar_t__) ;

__attribute__((used)) static int FUNC_9(
  struct pp_hwmgr *VAR_0,
  const ATOM_Tonga_POWERPLAYTABLE *VAR_1
  )
{
 int VAR_2 = 0;
 struct phm_ppt_v1_information *VAR_3 =
  (struct phm_ppt_v1_information *)(VAR_0->pptable);

 const ATOM_Tonga_MM_Dependency_Table *VAR_4 =
  (const ATOM_Tonga_MM_Dependency_Table *)(((unsigned long) VAR_1) +
  FUNC_8(VAR_1->usMMDependencyTableOffset));
 const PPTable_Generic_SubTable_Header *VAR_5 =
  (const PPTable_Generic_SubTable_Header *)(((unsigned long) VAR_1) +
  FUNC_8(VAR_1->usPowerTuneTableOffset));
 const ATOM_Tonga_MCLK_Dependency_Table *VAR_6 =
  (const ATOM_Tonga_MCLK_Dependency_Table *)(((unsigned long) VAR_1) +
  FUNC_8(VAR_1->usMclkDependencyTableOffset));
 const PPTable_Generic_SubTable_Header *VAR_7 =
  (const PPTable_Generic_SubTable_Header *)(((unsigned long) VAR_1) +
  FUNC_8(VAR_1->usSclkDependencyTableOffset));
 const ATOM_Tonga_Hard_Limit_Table *VAR_8 =
  (const ATOM_Tonga_Hard_Limit_Table *)(((unsigned long) VAR_1) +
  FUNC_8(VAR_1->usHardLimitTableOffset));
 const PPTable_Generic_SubTable_Header *VAR_9 =
  (const PPTable_Generic_SubTable_Header *)(((unsigned long) VAR_1) +
  FUNC_8(VAR_1->usPCIETableOffset));
 const ATOM_Tonga_GPIO_Table *VAR_10 =
  (const ATOM_Tonga_GPIO_Table *)(((unsigned long) VAR_1) +
  FUNC_8(VAR_1->usGPIOTableOffset));

 VAR_3->vdd_dep_on_sclk = ((void*)0);
 VAR_3->vdd_dep_on_mclk = ((void*)0);
 VAR_3->mm_dep_table = ((void*)0);
 VAR_3->pcie_table = ((void*)0);
 VAR_3->gpio_table = ((void*)0);

 if (VAR_1->usMMDependencyTableOffset != 0)
  VAR_2 = FUNC_4(VAR_0,
  &VAR_3->mm_dep_table, VAR_4);

 if (VAR_2 == 0 && VAR_1->usPowerTuneTableOffset != 0)
  VAR_2 = FUNC_0(VAR_0,
  &VAR_3->cac_dtp_table, VAR_5);

 if (VAR_2 == 0 && VAR_1->usSclkDependencyTableOffset != 0)
  VAR_2 = FUNC_6(VAR_0,
  &VAR_3->vdd_dep_on_sclk, VAR_7);

 if (VAR_2 == 0 && VAR_1->usMclkDependencyTableOffset != 0)
  VAR_2 = FUNC_3(VAR_0,
  &VAR_3->vdd_dep_on_mclk, VAR_6);

 if (VAR_2 == 0 && VAR_1->usPCIETableOffset != 0)
  VAR_2 = FUNC_5(VAR_0,
  &VAR_3->pcie_table, VAR_9);

 if (VAR_2 == 0 && VAR_1->usHardLimitTableOffset != 0)
  VAR_2 = FUNC_2(VAR_0,
  &VAR_3->max_clock_voltage_on_dc, VAR_8);

 VAR_0->dyn_state.max_clock_voltage_on_dc.sclk =
  VAR_3->max_clock_voltage_on_dc.sclk;
 VAR_0->dyn_state.max_clock_voltage_on_dc.mclk =
  VAR_3->max_clock_voltage_on_dc.mclk;
 VAR_0->dyn_state.max_clock_voltage_on_dc.vddc =
  VAR_3->max_clock_voltage_on_dc.vddc;
 VAR_0->dyn_state.max_clock_voltage_on_dc.vddci =
  VAR_3->max_clock_voltage_on_dc.vddci;

 if (VAR_2 == 0 && (((void*)0) != VAR_3->vdd_dep_on_mclk)
  && (0 != VAR_3->vdd_dep_on_mclk->count))
  VAR_2 = FUNC_7(VAR_0, &VAR_3->valid_mclk_values,
  VAR_3->vdd_dep_on_mclk);

 if (VAR_2 == 0 && (((void*)0) != VAR_3->vdd_dep_on_sclk)
  && (0 != VAR_3->vdd_dep_on_sclk->count))
  VAR_2 = FUNC_7(VAR_0, &VAR_3->valid_sclk_values,
  VAR_3->vdd_dep_on_sclk);

 if (!VAR_2 && VAR_10)
  VAR_2 = FUNC_1(VAR_0, &VAR_3->gpio_table,
    VAR_10);

 return VAR_2;
}
