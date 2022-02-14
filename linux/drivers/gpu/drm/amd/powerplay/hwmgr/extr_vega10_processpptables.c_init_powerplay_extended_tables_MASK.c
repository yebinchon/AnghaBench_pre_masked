
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int vddci; int vddc; int mclk; int sclk; } ;
struct TYPE_12__ {TYPE_1__ max_clock_voltage_on_dc; } ;
struct pp_hwmgr {TYPE_2__ dyn_state; scalar_t__ pptable; } ;
struct TYPE_15__ {int vddci; int vddc; int mclk; int sclk; } ;
struct phm_ppt_v2_information {TYPE_5__* vdd_dep_on_mclk; int valid_mclk_values; TYPE_5__* vdd_dep_on_dcefclk; int valid_dcefclk_values; TYPE_5__* vdd_dep_on_sclk; int valid_sclk_values; TYPE_5__* vdd_dep_on_socclk; int valid_socclk_values; TYPE_8__ max_clock_voltage_on_dc; int pcie_table; int * vdd_dep_on_dispclk; int * vdd_dep_on_phyclk; int * vdd_dep_on_pixclk; int * tdp_table; int * mm_dep_table; } ;
typedef int Vega10_PPTable_Generic_SubTable_Header ;
struct TYPE_14__ {scalar_t__ count; } ;
struct TYPE_13__ {scalar_t__ usHardLimitTableOffset; scalar_t__ usPCIETableOffset; scalar_t__ usMclkDependencyTableOffset; scalar_t__ usDcefclkDependencyTableOffset; scalar_t__ usDispClkDependencyTableOffset; scalar_t__ usPhyClkDependencyTableOffset; scalar_t__ usPixclkDependencyTableOffset; scalar_t__ usGfxclkDependencyTableOffset; scalar_t__ usSocclkDependencyTableOffset; scalar_t__ usPowerTuneTableOffset; scalar_t__ usMMDependencyTableOffset; } ;
typedef int ATOM_Vega10_SOCCLK_Dependency_Table ;
typedef TYPE_3__ ATOM_Vega10_POWERPLAYTABLE ;
typedef int ATOM_Vega10_PIXCLK_Dependency_Table ;
typedef int ATOM_Vega10_PHYCLK_Dependency_Table ;
typedef int ATOM_Vega10_MM_Dependency_Table ;
typedef int ATOM_Vega10_MCLK_Dependency_Table ;
typedef int ATOM_Vega10_Hard_Limit_Table ;
typedef int ATOM_Vega10_GFXCLK_Dependency_Table ;
typedef int ATOM_Vega10_DISPCLK_Dependency_Table ;
typedef int ATOM_Vega10_DCEFCLK_Dependency_Table ;


 int FUNC_0 (struct pp_hwmgr*,TYPE_5__**,int const*) ;
 int FUNC_1 (struct pp_hwmgr*,TYPE_5__**,int const*) ;
 int FUNC_2 (struct pp_hwmgr*,TYPE_8__*,int const*) ;
 int FUNC_3 (struct pp_hwmgr*,TYPE_5__**,int const*) ;
 int FUNC_4 (struct pp_hwmgr*,int **,int const*) ;
 int FUNC_5 (struct pp_hwmgr*,int *,int const*) ;
 int FUNC_6 (struct pp_hwmgr*,int **,int const*) ;
 int FUNC_7 (struct pp_hwmgr*,TYPE_5__**,int const*) ;
 int FUNC_8 (struct pp_hwmgr*,int **,int const*) ;
 int FUNC_9 (struct pp_hwmgr*,int *,TYPE_5__*) ;
 scalar_t__ FUNC_10 (scalar_t__) ;

__attribute__((used)) static int FUNC_11(
  struct pp_hwmgr *VAR_0,
  const ATOM_Vega10_POWERPLAYTABLE *VAR_1)
{
 int VAR_2 = 0;
 struct phm_ppt_v2_information *VAR_3 =
  (struct phm_ppt_v2_information *)(VAR_0->pptable);

 const ATOM_Vega10_MM_Dependency_Table *VAR_4 =
   (const ATOM_Vega10_MM_Dependency_Table *)
   (((unsigned long) VAR_1) +
   FUNC_10(VAR_1->usMMDependencyTableOffset));
 const Vega10_PPTable_Generic_SubTable_Header *VAR_5 =
   (const Vega10_PPTable_Generic_SubTable_Header *)
   (((unsigned long) VAR_1) +
   FUNC_10(VAR_1->usPowerTuneTableOffset));
 const ATOM_Vega10_SOCCLK_Dependency_Table *VAR_6 =
   (const ATOM_Vega10_SOCCLK_Dependency_Table *)
   (((unsigned long) VAR_1) +
   FUNC_10(VAR_1->usSocclkDependencyTableOffset));
 const ATOM_Vega10_GFXCLK_Dependency_Table *VAR_7 =
   (const ATOM_Vega10_GFXCLK_Dependency_Table *)
   (((unsigned long) VAR_1) +
   FUNC_10(VAR_1->usGfxclkDependencyTableOffset));
 const ATOM_Vega10_DCEFCLK_Dependency_Table *VAR_8 =
   (const ATOM_Vega10_DCEFCLK_Dependency_Table *)
   (((unsigned long) VAR_1) +
   FUNC_10(VAR_1->usDcefclkDependencyTableOffset));
 const ATOM_Vega10_MCLK_Dependency_Table *VAR_9 =
   (const ATOM_Vega10_MCLK_Dependency_Table *)
   (((unsigned long) VAR_1) +
   FUNC_10(VAR_1->usMclkDependencyTableOffset));
 const ATOM_Vega10_Hard_Limit_Table *VAR_10 =
   (const ATOM_Vega10_Hard_Limit_Table *)
   (((unsigned long) VAR_1) +
   FUNC_10(VAR_1->usHardLimitTableOffset));
 const Vega10_PPTable_Generic_SubTable_Header *VAR_11 =
   (const Vega10_PPTable_Generic_SubTable_Header *)
   (((unsigned long) VAR_1) +
   FUNC_10(VAR_1->usPCIETableOffset));
 const ATOM_Vega10_PIXCLK_Dependency_Table *VAR_12 =
   (const ATOM_Vega10_PIXCLK_Dependency_Table *)
   (((unsigned long) VAR_1) +
   FUNC_10(VAR_1->usPixclkDependencyTableOffset));
 const ATOM_Vega10_PHYCLK_Dependency_Table *VAR_13 =
   (const ATOM_Vega10_PHYCLK_Dependency_Table *)
   (((unsigned long) VAR_1) +
   FUNC_10(VAR_1->usPhyClkDependencyTableOffset));
 const ATOM_Vega10_DISPCLK_Dependency_Table *VAR_14 =
   (const ATOM_Vega10_DISPCLK_Dependency_Table *)
   (((unsigned long) VAR_1) +
   FUNC_10(VAR_1->usDispClkDependencyTableOffset));

 VAR_3->vdd_dep_on_socclk = ((void*)0);
 VAR_3->vdd_dep_on_sclk = ((void*)0);
 VAR_3->vdd_dep_on_mclk = ((void*)0);
 VAR_3->vdd_dep_on_dcefclk = ((void*)0);
 VAR_3->mm_dep_table = ((void*)0);
 VAR_3->tdp_table = ((void*)0);
 VAR_3->vdd_dep_on_pixclk = ((void*)0);
 VAR_3->vdd_dep_on_phyclk = ((void*)0);
 VAR_3->vdd_dep_on_dispclk = ((void*)0);

 if (VAR_1->usMMDependencyTableOffset)
  VAR_2 = FUNC_4(VAR_0,
    &VAR_3->mm_dep_table,
    VAR_4);

 if (!VAR_2 && VAR_1->usPowerTuneTableOffset)
  VAR_2 = FUNC_8(VAR_0,
    &VAR_3->tdp_table,
    VAR_5);

 if (!VAR_2 && VAR_1->usSocclkDependencyTableOffset)
  VAR_2 = FUNC_7(VAR_0,
    &VAR_3->vdd_dep_on_socclk,
    VAR_6);

 if (!VAR_2 && VAR_1->usGfxclkDependencyTableOffset)
  VAR_2 = FUNC_1(VAR_0,
    &VAR_3->vdd_dep_on_sclk,
    VAR_7);

 if (!VAR_2 && VAR_1->usPixclkDependencyTableOffset)
  VAR_2 = FUNC_6(VAR_0,
    &VAR_3->vdd_dep_on_pixclk,
    (const ATOM_Vega10_PIXCLK_Dependency_Table*)
    VAR_12);

 if (!VAR_2 && VAR_1->usPhyClkDependencyTableOffset)
  VAR_2 = FUNC_6(VAR_0,
    &VAR_3->vdd_dep_on_phyclk,
    (const ATOM_Vega10_PIXCLK_Dependency_Table *)
    VAR_13);

 if (!VAR_2 && VAR_1->usDispClkDependencyTableOffset)
  VAR_2 = FUNC_6(VAR_0,
    &VAR_3->vdd_dep_on_dispclk,
    (const ATOM_Vega10_PIXCLK_Dependency_Table *)
    VAR_14);

 if (!VAR_2 && VAR_1->usDcefclkDependencyTableOffset)
  VAR_2 = FUNC_0(VAR_0,
    &VAR_3->vdd_dep_on_dcefclk,
    VAR_8);

 if (!VAR_2 && VAR_1->usMclkDependencyTableOffset)
  VAR_2 = FUNC_3(VAR_0,
    &VAR_3->vdd_dep_on_mclk,
    VAR_9);

 if (!VAR_2 && VAR_1->usPCIETableOffset)
  VAR_2 = FUNC_5(VAR_0,
    &VAR_3->pcie_table,
    VAR_11);

 if (!VAR_2 && VAR_1->usHardLimitTableOffset)
  VAR_2 = FUNC_2(VAR_0,
    &VAR_3->max_clock_voltage_on_dc,
    VAR_10);

 VAR_0->dyn_state.max_clock_voltage_on_dc.sclk =
   VAR_3->max_clock_voltage_on_dc.sclk;
 VAR_0->dyn_state.max_clock_voltage_on_dc.mclk =
   VAR_3->max_clock_voltage_on_dc.mclk;
 VAR_0->dyn_state.max_clock_voltage_on_dc.vddc =
   VAR_3->max_clock_voltage_on_dc.vddc;
 VAR_0->dyn_state.max_clock_voltage_on_dc.vddci =
   VAR_3->max_clock_voltage_on_dc.vddci;

 if (!VAR_2 &&
  VAR_3->vdd_dep_on_socclk &&
  VAR_3->vdd_dep_on_socclk->count)
  VAR_2 = FUNC_9(VAR_0,
    &VAR_3->valid_socclk_values,
    VAR_3->vdd_dep_on_socclk);

 if (!VAR_2 &&
  VAR_3->vdd_dep_on_sclk &&
  VAR_3->vdd_dep_on_sclk->count)
  VAR_2 = FUNC_9(VAR_0,
    &VAR_3->valid_sclk_values,
    VAR_3->vdd_dep_on_sclk);

 if (!VAR_2 &&
  VAR_3->vdd_dep_on_dcefclk &&
  VAR_3->vdd_dep_on_dcefclk->count)
  VAR_2 = FUNC_9(VAR_0,
    &VAR_3->valid_dcefclk_values,
    VAR_3->vdd_dep_on_dcefclk);

 if (!VAR_2 &&
  VAR_3->vdd_dep_on_mclk &&
  VAR_3->vdd_dep_on_mclk->count)
  VAR_2 = FUNC_9(VAR_0,
    &VAR_3->valid_mclk_values,
    VAR_3->vdd_dep_on_mclk);

 return VAR_2;
}
