
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct radeon_phase_shedding_limits_table {unsigned int count; TYPE_1__* entries; } ;
struct radeon_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ mclk; } ;



__attribute__((used)) static void FUNC_0(struct radeon_device *VAR_0,
        const struct radeon_phase_shedding_limits_table *VAR_1,
        u32 VAR_2,
        u32 *VAR_3)
{
 unsigned int VAR_4;

 *VAR_3 = 1;

 for (VAR_4 = 0; VAR_4 < VAR_1->count; VAR_4++) {
  if (VAR_2 < VAR_1->entries[VAR_4].mclk) {
   *VAR_3 = VAR_4;
   break;
  }
 }
}
