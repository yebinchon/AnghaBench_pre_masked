
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct acpi_gpe_event_info {int dummy; } ;
struct acpi_gpe_block_info {scalar_t__ block_base_number; scalar_t__ gpe_count; struct acpi_gpe_event_info* event_info; } ;



struct acpi_gpe_event_info *FUNC_0(u32 VAR_0,
           struct acpi_gpe_block_info
           *VAR_1)
{
 u32 VAR_2;





 if (!VAR_1 || (VAR_0 < VAR_1->block_base_number)) {
  return (((void*)0));
 }

 VAR_2 = VAR_0 - VAR_1->block_base_number;
 if (VAR_2 >= VAR_1->gpe_count) {
  return (((void*)0));
 }

 return (&VAR_1->event_info[VAR_2]);
}
