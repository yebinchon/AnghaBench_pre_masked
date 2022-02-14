
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_hwmgr {scalar_t__ pptable; } ;
struct phm_clock_and_voltage_limits {int mclk; int sclk; } ;
struct phm_ppt_v2_information {struct phm_clock_and_voltage_limits max_clock_voltage_on_ac; } ;
struct amd_pp_simple_clock_info {int memory_max_clock; int engine_max_clock; } ;



__attribute__((used)) static int FUNC_0(struct pp_hwmgr *VAR_0,
  struct amd_pp_simple_clock_info *VAR_1)
{
 struct phm_ppt_v2_information *VAR_2 =
   (struct phm_ppt_v2_information *)VAR_0->pptable;
 struct phm_clock_and_voltage_limits *VAR_3 =
   &VAR_2->max_clock_voltage_on_ac;

 VAR_1->engine_max_clock = VAR_3->sclk;
 VAR_1->memory_max_clock = VAR_3->mclk;

 return 0;
}
