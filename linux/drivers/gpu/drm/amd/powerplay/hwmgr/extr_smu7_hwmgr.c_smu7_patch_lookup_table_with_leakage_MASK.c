
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct smu7_leakage_voltage {int dummy; } ;
struct pp_hwmgr {int dummy; } ;
struct TYPE_5__ {size_t count; TYPE_1__* entries; } ;
typedef TYPE_2__ phm_ppt_v1_voltage_lookup_table ;
struct TYPE_4__ {int us_vdd; } ;


 int FUNC_0 (struct pp_hwmgr*,int *,struct smu7_leakage_voltage*) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_0,
  phm_ppt_v1_voltage_lookup_table *VAR_1,
  struct smu7_leakage_voltage *VAR_2)
{
 uint32_t VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->count; VAR_3++)
  FUNC_0(VAR_0,
    &VAR_1->entries[VAR_3].us_vdd, VAR_2);

 return 0;
}
