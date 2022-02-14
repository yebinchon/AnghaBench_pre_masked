
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * cac_dtp_table; } ;
struct pp_hwmgr {int * pptable; TYPE_1__ dyn_state; } ;
struct phm_ppt_v2_information {int * tdp_table; int * cac_dtp_table; int * mm_dep_table; int * ppm_parameter_table; int * vddci_lookup_table; int * vddmem_lookup_table; int * vddc_lookup_table; int * valid_sclk_values; int * valid_mclk_values; int * vdd_dep_on_mclk; int * vdd_dep_on_sclk; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_0)
{
 struct phm_ppt_v2_information *VAR_1 =
   (struct phm_ppt_v2_information *)(VAR_0->pptable);

 FUNC_0(VAR_1->vdd_dep_on_sclk);
 VAR_1->vdd_dep_on_sclk = ((void*)0);

 FUNC_0(VAR_1->vdd_dep_on_mclk);
 VAR_1->vdd_dep_on_mclk = ((void*)0);

 FUNC_0(VAR_1->valid_mclk_values);
 VAR_1->valid_mclk_values = ((void*)0);

 FUNC_0(VAR_1->valid_sclk_values);
 VAR_1->valid_sclk_values = ((void*)0);

 FUNC_0(VAR_1->vddc_lookup_table);
 VAR_1->vddc_lookup_table = ((void*)0);

 FUNC_0(VAR_1->vddmem_lookup_table);
 VAR_1->vddmem_lookup_table = ((void*)0);

 FUNC_0(VAR_1->vddci_lookup_table);
 VAR_1->vddci_lookup_table = ((void*)0);

 FUNC_0(VAR_1->ppm_parameter_table);
 VAR_1->ppm_parameter_table = ((void*)0);

 FUNC_0(VAR_1->mm_dep_table);
 VAR_1->mm_dep_table = ((void*)0);

 FUNC_0(VAR_1->cac_dtp_table);
 VAR_1->cac_dtp_table = ((void*)0);

 FUNC_0(VAR_0->dyn_state.cac_dtp_table);
 VAR_0->dyn_state.cac_dtp_table = ((void*)0);

 FUNC_0(VAR_1->tdp_table);
 VAR_1->tdp_table = ((void*)0);

 FUNC_0(VAR_0->pptable);
 VAR_0->pptable = ((void*)0);

 return 0;
}
