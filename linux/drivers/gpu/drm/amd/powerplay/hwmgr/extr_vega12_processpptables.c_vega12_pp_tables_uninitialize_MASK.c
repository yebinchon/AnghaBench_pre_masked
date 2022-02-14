
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_hwmgr {int * pptable; } ;
struct phm_ppt_v3_information {int * smc_pptable; int * od_settings_min; int * od_settings_max; int * power_saving_clock_min; int * power_saving_clock_max; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_0)
{
 struct phm_ppt_v3_information *VAR_1 =
   (struct phm_ppt_v3_information *)(VAR_0->pptable);

 FUNC_0(VAR_1->power_saving_clock_max);
 VAR_1->power_saving_clock_max = ((void*)0);

 FUNC_0(VAR_1->power_saving_clock_min);
 VAR_1->power_saving_clock_min = ((void*)0);

 FUNC_0(VAR_1->od_settings_max);
 VAR_1->od_settings_max = ((void*)0);

 FUNC_0(VAR_1->od_settings_min);
 VAR_1->od_settings_min = ((void*)0);

 FUNC_0(VAR_1->smc_pptable);
 VAR_1->smc_pptable = ((void*)0);

 FUNC_0(VAR_0->pptable);
 VAR_0->pptable = ((void*)0);

 return 0;
}
