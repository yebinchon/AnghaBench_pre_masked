
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct acpi_gpe_event_info {int gpe_number; TYPE_1__* register_info; } ;
struct TYPE_2__ {int base_gpe_number; } ;



u32 FUNC_0(struct acpi_gpe_event_info *VAR_0)
{

 return ((u32)1 <<
  (VAR_0->gpe_number -
   VAR_0->register_info->base_gpe_number));
}
