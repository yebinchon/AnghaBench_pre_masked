
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_hwmgr {int* workload_prority; size_t* workload_setting; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;

__attribute__((used)) static void FUNC_0(struct pp_hwmgr *VAR_6)
{
 VAR_6->workload_prority[VAR_0] = 0;
 VAR_6->workload_prority[VAR_2] = 1;
 VAR_6->workload_prority[VAR_3] = 2;
 VAR_6->workload_prority[VAR_4] = 3;
 VAR_6->workload_prority[VAR_5] = 4;
 VAR_6->workload_prority[VAR_1] = 5;

 VAR_6->workload_setting[0] = VAR_0;
 VAR_6->workload_setting[1] = VAR_2;
 VAR_6->workload_setting[2] = VAR_3;
 VAR_6->workload_setting[3] = VAR_4;
 VAR_6->workload_setting[4] = VAR_5;
 VAR_6->workload_setting[5] = VAR_1;
}
