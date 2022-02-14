
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct vega10_single_dpm_table {size_t count; TYPE_1__* dpm_levels; } ;
struct pp_hwmgr {int dummy; } ;
struct TYPE_2__ {size_t value; int enabled; } ;



__attribute__((used)) static int FUNC_0(struct pp_hwmgr *VAR_0,
  struct vega10_single_dpm_table *VAR_1,
  uint32_t VAR_2, uint32_t VAR_3)
{
 uint32_t VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->count; VAR_4++) {
  if ((VAR_1->dpm_levels[VAR_4].value < VAR_2) ||
      (VAR_1->dpm_levels[VAR_4].value > VAR_3))
   VAR_1->dpm_levels[VAR_4].enabled = 0;
  else
   VAR_1->dpm_levels[VAR_4].enabled = 1;
 }
 return 0;
}
