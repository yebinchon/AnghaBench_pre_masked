
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
typedef scalar_t__ u16 ;
struct radeon_clock_voltage_dependency_table {scalar_t__ count; TYPE_1__* entries; } ;
struct TYPE_2__ {size_t clk; scalar_t__ v; } ;



void FUNC_0(struct radeon_clock_voltage_dependency_table *VAR_0,
     u32 VAR_1, u16 VAR_2, u16 *VAR_3)
{
 u32 VAR_4;

 if ((VAR_0 == ((void*)0)) || (VAR_0->count == 0))
  return;

 for (VAR_4= 0; VAR_4 < VAR_0->count; VAR_4++) {
  if (VAR_1 <= VAR_0->entries[VAR_4].clk) {
   if (*VAR_3 < VAR_0->entries[VAR_4].v)
    *VAR_3 = (u16)((VAR_0->entries[VAR_4].v < VAR_2) ?
        VAR_0->entries[VAR_4].v : VAR_2);
   return;
  }
 }

 *VAR_3 = (*VAR_3 > VAR_2) ? *VAR_3 : VAR_2;
}
