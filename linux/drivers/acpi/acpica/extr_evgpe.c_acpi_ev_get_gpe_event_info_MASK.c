
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int gpe_block; } ;
union acpi_operand_object {TYPE_1__ device; } ;
typedef size_t u32 ;
struct acpi_namespace_node {int dummy; } ;
struct acpi_gpe_event_info {int dummy; } ;
typedef scalar_t__ acpi_handle ;


 int FUNC_0 () ;
 size_t VAR_0 ;
 struct acpi_gpe_event_info* FUNC_1 (size_t,int ) ;
 int * VAR_1 ;
 union acpi_operand_object* FUNC_2 (struct acpi_namespace_node*) ;

struct acpi_gpe_event_info *FUNC_3(acpi_handle VAR_2,
             u32 VAR_3)
{
 union acpi_operand_object *VAR_4;
 struct acpi_gpe_event_info *VAR_5;
 u32 VAR_6;

 FUNC_0();



 if (!VAR_2) {



  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
   VAR_5 = FUNC_1(VAR_3,
           VAR_1
           [VAR_6]);
   if (VAR_5) {
    return (VAR_5);
   }
  }



  return (((void*)0));
 }



 VAR_4 =
     FUNC_2((struct acpi_namespace_node *)
            VAR_2);
 if (!VAR_4 || !VAR_4->device.gpe_block) {
  return (((void*)0));
 }

 return (FUNC_1
  (VAR_3, VAR_4->device.gpe_block));
}
