
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smu10_clock_voltage_information {int * vdd_dep_on_phyclk; int * vdd_dep_on_dppclk; int * vdd_dep_on_dispclk; int * vdd_dep_on_fclk; int * vdd_dep_on_socclk; int * vdd_dep_on_dcefclk; } ;
struct smu10_hwmgr {struct smu10_clock_voltage_information clock_vol_info; } ;
struct TYPE_2__ {int * vddc_dep_on_dal_pwrl; } ;
struct pp_hwmgr {int * backend; TYPE_1__ dyn_state; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_0)
{
 struct smu10_hwmgr *VAR_1 = (struct smu10_hwmgr *)(VAR_0->backend);
 struct smu10_clock_voltage_information *VAR_2 = &(VAR_1->clock_vol_info);

 FUNC_0(VAR_2->vdd_dep_on_dcefclk);
 VAR_2->vdd_dep_on_dcefclk = ((void*)0);
 FUNC_0(VAR_2->vdd_dep_on_socclk);
 VAR_2->vdd_dep_on_socclk = ((void*)0);
 FUNC_0(VAR_2->vdd_dep_on_fclk);
 VAR_2->vdd_dep_on_fclk = ((void*)0);
 FUNC_0(VAR_2->vdd_dep_on_dispclk);
 VAR_2->vdd_dep_on_dispclk = ((void*)0);
 FUNC_0(VAR_2->vdd_dep_on_dppclk);
 VAR_2->vdd_dep_on_dppclk = ((void*)0);
 FUNC_0(VAR_2->vdd_dep_on_phyclk);
 VAR_2->vdd_dep_on_phyclk = ((void*)0);

 FUNC_0(VAR_0->dyn_state.vddc_dep_on_dal_pwrl);
 VAR_0->dyn_state.vddc_dep_on_dal_pwrl = ((void*)0);

 FUNC_0(VAR_0->backend);
 VAR_0->backend = ((void*)0);

 return 0;
}
