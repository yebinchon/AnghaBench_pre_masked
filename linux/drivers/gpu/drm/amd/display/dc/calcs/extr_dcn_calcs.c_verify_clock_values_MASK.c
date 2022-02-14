
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_pp_clock_levels_with_voltage {int num_levels; TYPE_1__* data; } ;
struct TYPE_2__ {scalar_t__ clocks_in_khz; } ;



__attribute__((used)) static bool FUNC_0(struct dm_pp_clock_levels_with_voltage *VAR_0)
{
 int VAR_1;

 if (VAR_0->num_levels == 0)
  return 0;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_levels; VAR_1++)

  if (VAR_0->data[VAR_1].clocks_in_khz == 0)
   return 0;

 return 1;
}
