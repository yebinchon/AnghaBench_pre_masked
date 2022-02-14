
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct radeon_device {int dummy; } ;
struct radeon_clock_voltage_dependency_table {scalar_t__ count; TYPE_1__* entries; } ;
struct TYPE_2__ {size_t clk; size_t v; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct radeon_device *VAR_1,
      struct radeon_clock_voltage_dependency_table *VAR_2,
      u32 VAR_3, u32 *VAR_4)
{
 u32 VAR_5 = 0;

 if (VAR_2->count == 0)
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_2->count; VAR_5++) {
  if (VAR_2->entries[VAR_5].clk >= VAR_3) {
   *VAR_4 = VAR_2->entries[VAR_5].v;
   return 0;
  }
 }

 *VAR_4 = VAR_2->entries[VAR_5-1].v;

 return 0;
}
