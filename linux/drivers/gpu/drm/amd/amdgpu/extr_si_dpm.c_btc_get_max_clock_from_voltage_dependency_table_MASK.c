
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct amdgpu_clock_voltage_dependency_table {scalar_t__ count; TYPE_1__* entries; } ;
struct TYPE_2__ {size_t clk; } ;



__attribute__((used)) static void FUNC_0(struct amdgpu_clock_voltage_dependency_table *VAR_0,
           u32 *VAR_1)
{
 u32 VAR_2, VAR_3 = 0;

 if ((VAR_0 == ((void*)0)) || (VAR_0->count == 0)) {
  *VAR_1 = VAR_3;
  return;
 }

 for (VAR_2 = 0; VAR_2 < VAR_0->count; VAR_2++) {
  if (VAR_3 < VAR_0->entries[VAR_2].clk)
   VAR_3 = VAR_0->entries[VAR_2].clk;
 }
 *VAR_1 = VAR_3;
}
