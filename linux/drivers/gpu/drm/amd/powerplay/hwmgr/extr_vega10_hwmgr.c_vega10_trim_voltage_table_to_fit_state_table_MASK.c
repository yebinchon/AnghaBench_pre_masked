
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct pp_hwmgr {int dummy; } ;
struct pp_atomfwctrl_voltage_table {unsigned int count; int * entries; } ;



__attribute__((used)) static void FUNC_0(
  struct pp_hwmgr *VAR_0,
  uint32_t VAR_1,
  struct pp_atomfwctrl_voltage_table *VAR_2)
{
 unsigned int VAR_3, VAR_4;

 if (VAR_2->count <= VAR_1)
  return;

 VAR_4 = VAR_2->count - VAR_1;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  VAR_2->entries[VAR_3] = VAR_2->entries[VAR_3 + VAR_4];

 VAR_2->count = VAR_1;
}
