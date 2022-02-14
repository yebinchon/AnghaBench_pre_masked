
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct pp_clock_levels_with_latency {scalar_t__ num_levels; TYPE_2__* data; } ;
struct dm_pp_clock_levels_with_latency {scalar_t__ num_levels; TYPE_1__* data; } ;
typedef enum dm_pp_clock_type { ____Placeholder_dm_pp_clock_type } dm_pp_clock_type ;
struct TYPE_4__ {int latency_in_us; int clocks_in_khz; } ;
struct TYPE_3__ {int latency_in_us; int clocks_in_khz; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(
  const struct pp_clock_levels_with_latency *VAR_1,
  struct dm_pp_clock_levels_with_latency *VAR_2,
  enum dm_pp_clock_type VAR_3)
{
 uint32_t VAR_4;

 if (VAR_1->num_levels > VAR_0) {
  FUNC_2("DM_PPLIB: Warning: %s clock: number of levels %d exceeds maximum of %d!\n",
    FUNC_0(VAR_3),
    VAR_1->num_levels,
    VAR_0);

  VAR_2->num_levels = VAR_0;
 } else
  VAR_2->num_levels = VAR_1->num_levels;

 FUNC_1("DM_PPLIB: values for %s clock\n",
   FUNC_0(VAR_3));

 for (VAR_4 = 0; VAR_4 < VAR_2->num_levels; VAR_4++) {
  FUNC_1("DM_PPLIB:\t %d in kHz\n", VAR_1->data[VAR_4].clocks_in_khz);
  VAR_2->data[VAR_4].clocks_in_khz = VAR_1->data[VAR_4].clocks_in_khz;
  VAR_2->data[VAR_4].latency_in_us = VAR_1->data[VAR_4].latency_in_us;
 }
}
