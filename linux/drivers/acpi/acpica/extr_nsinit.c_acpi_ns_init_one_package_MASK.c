
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
union acpi_operand_object {TYPE_1__ package; } ;
typedef int u32 ;
struct acpi_namespace_node {int dummy; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (union acpi_operand_object*) ;
 int VAR_2 ;
 union acpi_operand_object* FUNC_2 (struct acpi_namespace_node*) ;
 int FUNC_3 (union acpi_operand_object*,int *,int ,int *) ;

acpi_status
FUNC_4(acpi_handle VAR_3,
    u32 VAR_4, void *VAR_5, void **VAR_6)
{
 acpi_status VAR_7;
 union acpi_operand_object *VAR_8;
 struct acpi_namespace_node *VAR_9 =
     (struct acpi_namespace_node *)VAR_3;

 VAR_8 = FUNC_2(VAR_9);
 if (!VAR_8) {
  return (VAR_0);
 }



 if (VAR_8->package.flags & VAR_1) {
  return (VAR_0);
 }

 VAR_7 = FUNC_1(VAR_8);
 if (FUNC_0(VAR_7)) {
  return (VAR_0);
 }

 VAR_7 =
     FUNC_3(VAR_8, ((void*)0),
          VAR_2, ((void*)0));
 if (FUNC_0(VAR_7)) {
  return (VAR_0);
 }

 VAR_8->package.flags |= VAR_1;
 return (VAR_0);
}
