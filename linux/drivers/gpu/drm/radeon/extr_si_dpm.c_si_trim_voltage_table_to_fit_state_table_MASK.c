
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct radeon_device {int dummy; } ;
struct atom_voltage_table {unsigned int count; int * entries; } ;



void FUNC_0(struct radeon_device *VAR_0,
           u32 VAR_1,
           struct atom_voltage_table *VAR_2)
{
 unsigned int VAR_3, VAR_4;

 if (VAR_2->count <= VAR_1)
  return;

 VAR_4 = VAR_2->count - VAR_1;

 for (VAR_3= 0; VAR_3 < VAR_1; VAR_3++)
  VAR_2->entries[VAR_3] = VAR_2->entries[VAR_3 + VAR_4];

 VAR_2->count = VAR_1;
}
