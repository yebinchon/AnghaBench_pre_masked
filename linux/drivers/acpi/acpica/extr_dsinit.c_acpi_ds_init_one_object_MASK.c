
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int info_flags; } ;
union acpi_operand_object {TYPE_1__ method; } ;
typedef int u32 ;
struct acpi_namespace_node {scalar_t__ owner_id; } ;
struct acpi_init_walk_info {scalar_t__ owner_id; int device_count; int non_serial_method_count; int serialized_method_count; int serial_method_count; int method_count; int op_region_count; int object_count; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_handle ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct acpi_namespace_node*,union acpi_operand_object*) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_3 ;
 union acpi_operand_object* FUNC_5 (struct acpi_namespace_node*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static acpi_status
FUNC_8(acpi_handle VAR_4,
   u32 VAR_5, void *VAR_6, void **VAR_7)
{
 struct acpi_init_walk_info *VAR_8 =
     (struct acpi_init_walk_info *)VAR_6;
 struct acpi_namespace_node *VAR_9 =
     (struct acpi_namespace_node *)VAR_4;
 acpi_status VAR_10;
 union acpi_operand_object *VAR_11;

 FUNC_2();





 if (VAR_9->owner_id != VAR_8->owner_id) {
  return (VAR_2);
 }

 VAR_8->object_count++;



 switch (FUNC_6(VAR_4)) {
 case 128:

  VAR_10 = FUNC_4(VAR_4);
  if (FUNC_1(VAR_10)) {
   FUNC_0((VAR_1, VAR_10,
     "During Region initialization %p [%4.4s]",
     VAR_4,
     FUNC_7(VAR_4)));
  }

  VAR_8->op_region_count++;
  break;

 case 129:
  VAR_8->method_count++;
  VAR_11 = FUNC_5(VAR_9);
  if (!VAR_11) {
   break;
  }



  if (VAR_11->method.info_flags & VAR_0) {
   VAR_8->serial_method_count++;
   break;
  }

  if (VAR_3) {



   FUNC_3(VAR_9, VAR_11);
   if (VAR_11->method.
       info_flags & VAR_0) {



    VAR_8->serial_method_count++;
    VAR_8->serialized_method_count++;
    break;
   }
  }

  VAR_8->non_serial_method_count++;
  break;

 case 130:

  VAR_8->device_count++;
  break;

 default:

  break;
 }





 return (VAR_2);
}
