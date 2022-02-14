
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct atom_voltage_table {unsigned int count; TYPE_1__* entries; } ;
struct TYPE_2__ {scalar_t__ value; } ;



__attribute__((used)) static u16 FUNC_0(struct atom_voltage_table *VAR_0, u16 VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->count; VAR_2++)
  if (VAR_1 <= VAR_0->entries[VAR_2].value)
   return VAR_0->entries[VAR_2].value;

 return VAR_0->entries[VAR_0->count - 1].value;
}
