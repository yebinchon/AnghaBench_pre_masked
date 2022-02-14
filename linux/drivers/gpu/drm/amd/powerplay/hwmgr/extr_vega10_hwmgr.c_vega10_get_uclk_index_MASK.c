
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef scalar_t__ uint32_t ;
struct pp_hwmgr {int dummy; } ;
struct phm_ppt_v1_clock_voltage_dependency_table {scalar_t__ count; TYPE_1__* entries; } ;
struct TYPE_2__ {scalar_t__ clk; } ;



__attribute__((used)) static uint8_t FUNC_0(struct pp_hwmgr *VAR_0,
   struct phm_ppt_v1_clock_voltage_dependency_table *VAR_1,
      uint32_t VAR_2)
{
 uint8_t VAR_3;
 uint8_t VAR_4;

 if (VAR_1 == ((void*)0) || VAR_1->count == 0)
  return 0;

 VAR_3 = (uint8_t)(VAR_1->count);

 for(VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  if(VAR_1->entries[VAR_4].clk >= VAR_2)
   return VAR_4;
 }

 return VAR_4-1;
}
