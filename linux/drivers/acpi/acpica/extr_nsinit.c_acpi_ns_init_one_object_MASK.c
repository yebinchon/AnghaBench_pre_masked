
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
union acpi_operand_object {TYPE_1__ common; } ;
typedef int u32 ;
struct acpi_namespace_node {int dummy; } ;
struct acpi_init_walk_info {int package_init; int field_init; int package_count; int buffer_count; int field_count; int op_region_count; int object_count; } ;
typedef int acpi_status ;
typedef int acpi_object_type ;
typedef scalar_t__ acpi_handle ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (union acpi_operand_object*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 union acpi_operand_object* FUNC_6 (struct acpi_namespace_node*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__,int ,int *,int *) ;
 int FUNC_9 (struct acpi_namespace_node*) ;
 int FUNC_10 (int) ;
 int VAR_4 ;

__attribute__((used)) static acpi_status
FUNC_11(acpi_handle VAR_5,
   u32 VAR_6, void *VAR_7, void **VAR_8)
{
 acpi_object_type VAR_9;
 acpi_status VAR_10 = VAR_1;
 struct acpi_init_walk_info *VAR_11 =
     (struct acpi_init_walk_info *)VAR_7;
 struct acpi_namespace_node *VAR_12 =
     (struct acpi_namespace_node *)VAR_5;
 union acpi_operand_object *VAR_13;

 FUNC_2(VAR_4);

 VAR_11->object_count++;



 VAR_9 = FUNC_7(VAR_5);
 VAR_13 = FUNC_6(VAR_12);
 if (!VAR_13) {
  return (VAR_1);
 }



 switch (VAR_9) {
 case 128:

  VAR_11->op_region_count++;
  break;

 case 131:

  VAR_11->field_count++;
  break;

 case 130:

  VAR_11->field_count++;
  break;

 case 132:

  VAR_11->buffer_count++;
  break;

 case 129:

  VAR_11->package_count++;
  break;

 default:



  return (VAR_1);
 }



 if (VAR_13->common.flags & VAR_3) {
  return (VAR_1);
 }



 FUNC_4();





 switch (VAR_9) {
 case 130:



  VAR_11->field_init++;
  VAR_10 = FUNC_3(VAR_13);
  break;

 case 129:



  VAR_11->package_init++;
  VAR_10 =
      FUNC_8(VAR_5, VAR_6, ((void*)0), ((void*)0));
  break;

 default:



  VAR_10 = VAR_2;
  FUNC_0((VAR_0, VAR_10,
    "Opcode is not deferred [%4.4s] (%s)",
    FUNC_9(VAR_12),
    FUNC_10(VAR_9)));
  break;
 }

 if (FUNC_1(VAR_10)) {
  FUNC_0((VAR_0, VAR_10,
    "Could not execute arguments for [%4.4s] (%s)",
    FUNC_9(VAR_12),
    FUNC_10(VAR_9)));
 }





 FUNC_5();
 return (VAR_1);
}
