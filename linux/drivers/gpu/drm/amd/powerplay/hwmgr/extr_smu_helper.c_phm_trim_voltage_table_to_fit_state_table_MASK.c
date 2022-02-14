
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct pp_atomctrl_voltage_table {unsigned int count; int * entries; } ;



void FUNC_0(uint32_t VAR_0,
    struct pp_atomctrl_voltage_table *VAR_1)
{
 unsigned int VAR_2, VAR_3;

 if (VAR_1->count <= VAR_0)
  return;

 VAR_3 = VAR_1->count - VAR_0;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  VAR_1->entries[VAR_2] = VAR_1->entries[VAR_2 + VAR_3];

 VAR_1->count = VAR_0;

 return;
}
