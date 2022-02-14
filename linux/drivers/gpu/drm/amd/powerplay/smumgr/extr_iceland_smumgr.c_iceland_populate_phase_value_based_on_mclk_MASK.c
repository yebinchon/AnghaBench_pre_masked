
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct pp_hwmgr {int dummy; } ;
struct phm_phase_shedding_limits_table {unsigned int count; TYPE_1__* entries; } ;
struct TYPE_2__ {scalar_t__ Mclk; } ;



__attribute__((used)) static int FUNC_0(struct pp_hwmgr *VAR_0, const struct phm_phase_shedding_limits_table *VAR_1,
     uint32_t VAR_2, uint32_t *VAR_3)
{
 unsigned int VAR_4;

 *VAR_3 = 1;

 for (VAR_4 = 0; VAR_4 < VAR_1->count; VAR_4++) {
  if (VAR_2 < VAR_1->entries[VAR_4].Mclk) {
   *VAR_3 = VAR_4;
   break;
  }
 }

 return 0;
}
