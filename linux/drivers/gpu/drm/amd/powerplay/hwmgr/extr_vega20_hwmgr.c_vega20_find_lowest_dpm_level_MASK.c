
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct vega20_single_dpm_table {size_t count; TYPE_1__* dpm_levels; } ;
struct TYPE_2__ {int enabled; } ;



__attribute__((used)) static uint32_t FUNC_0(
  struct vega20_single_dpm_table *VAR_0)
{
 uint32_t VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->count; VAR_1++) {
  if (VAR_0->dpm_levels[VAR_1].enabled)
   break;
 }
 if (VAR_1 >= VAR_0->count) {
  VAR_1 = 0;
  VAR_0->dpm_levels[VAR_1].enabled = 1;
 }

 return VAR_1;
}
