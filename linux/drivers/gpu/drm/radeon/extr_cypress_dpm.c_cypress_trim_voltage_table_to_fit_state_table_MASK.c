
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;
struct atom_voltage_table {unsigned int count; int * entries; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct radeon_device *VAR_1,
         struct atom_voltage_table *VAR_2)
{
 unsigned int VAR_3, VAR_4;

 if (VAR_2->count <= VAR_0)
  return;

 VAR_4 = VAR_2->count - VAR_0;

 for (VAR_3= 0; VAR_3 < VAR_0; VAR_3++)
  VAR_2->entries[VAR_3] = VAR_2->entries[VAR_3 + VAR_4];

 VAR_2->count = VAR_0;
}
