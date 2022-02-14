
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef scalar_t__ uint16_t ;
struct pp_atomctrl_voltage_table {size_t count; TYPE_1__* entries; } ;
struct TYPE_2__ {scalar_t__ value; } ;


 int FUNC_0 (char*) ;

uint16_t FUNC_1(struct pp_atomctrl_voltage_table *VAR_0, uint16_t VAR_1)
{
 uint32_t VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->count; VAR_2++) {
  if (VAR_0->entries[VAR_2].value >= VAR_1)
   return VAR_0->entries[VAR_2].value;
 }

 FUNC_0("vddci is larger than max value in vddci_table\n");
 return VAR_0->entries[VAR_2-1].value;
}
