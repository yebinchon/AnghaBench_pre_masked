
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef size_t u32 ;
struct acpi_pnp_device_id_list {size_t count; TYPE_1__* ids; int string; } ;
struct acpi_pnp_device_id {size_t count; TYPE_1__* ids; int string; } ;
struct acpi_namespace_node {int dummy; } ;
typedef int acpi_status ;
struct TYPE_2__ {int string; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct acpi_pnp_device_id_list*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct acpi_namespace_node*,struct acpi_pnp_device_id_list**) ;
 int FUNC_3 (struct acpi_namespace_node*,struct acpi_pnp_device_id_list**) ;
 scalar_t__ FUNC_4 (int ) ;

u8 FUNC_5(struct acpi_namespace_node *VAR_2)
{
 acpi_status VAR_3;
 struct acpi_pnp_device_id *VAR_4;
 struct acpi_pnp_device_id_list *VAR_5;
 u32 VAR_6;
 u8 VAR_7;



 VAR_3 = FUNC_3(VAR_2, &VAR_4);
 if (FUNC_0(VAR_3)) {
  return (VAR_0);
 }

 VAR_7 = FUNC_4(VAR_4->string);
 FUNC_1(VAR_4);

 if (VAR_7) {
  return (VAR_1);
 }



 VAR_3 = FUNC_2(VAR_2, &VAR_5);
 if (FUNC_0(VAR_3)) {
  return (VAR_0);
 }



 for (VAR_6 = 0; VAR_6 < VAR_5->count; VAR_6++) {
  if (FUNC_4(VAR_5->ids[VAR_6].string)) {
   FUNC_1(VAR_5);
   return (VAR_1);
  }
 }

 FUNC_1(VAR_5);
 return (VAR_0);
}
