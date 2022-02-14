
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ascii; } ;
union acpi_operand_object {scalar_t__ type; TYPE_1__ name; scalar_t__ object; } ;
typedef scalar_t__ u8 ;
typedef int u32 ;
struct acpi_namespace_node {scalar_t__ type; TYPE_1__ name; scalar_t__ object; } ;
struct acpi_integrity_info {int objects; int nodes; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_handle ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (union acpi_operand_object*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 union acpi_operand_object* FUNC_1 (union acpi_operand_object*) ;
 int FUNC_2 (char*,union acpi_operand_object*,...) ;
 scalar_t__ FUNC_3 (union acpi_operand_object*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static acpi_status
FUNC_5(acpi_handle VAR_8,
         u32 VAR_9, void *VAR_10, void **VAR_11)
{
 struct acpi_integrity_info *VAR_12 =
     (struct acpi_integrity_info *)VAR_10;
 struct acpi_namespace_node *VAR_13 =
     (struct acpi_namespace_node *)VAR_8;
 union acpi_operand_object *VAR_14;
 u8 VAR_15 = VAR_7;

 VAR_12->nodes++;



 while (VAR_15) {
  if (FUNC_0(VAR_13) != VAR_0) {
   FUNC_2
       ("Invalid Descriptor Type for Node %p [%s] - "
        "is %2.2X should be %2.2X\n", VAR_13,
        FUNC_3(VAR_13),
        FUNC_0(VAR_13),
        VAR_0);
   return (VAR_5);
  }

  if ((VAR_13->type == VAR_2) ||
      (VAR_13->type == VAR_4)) {
   VAR_13 = (struct acpi_namespace_node *)VAR_13->object;
  } else {
   VAR_15 = VAR_6;
  }
 }

 if (VAR_13->type > VAR_3) {
  FUNC_2("Invalid Object Type for Node %p, Type = %X\n",
          VAR_13, VAR_13->type);
  return (VAR_5);
 }

 if (!FUNC_4(VAR_13->name.ascii)) {
  FUNC_2("Invalid AcpiName for Node %p\n", VAR_13);
  return (VAR_5);
 }

 VAR_14 = FUNC_1(VAR_13);
 if (VAR_14) {
  VAR_12->objects++;
  if (FUNC_0(VAR_14) != VAR_1) {
   FUNC_2
       ("Invalid Descriptor Type for Object %p [%s]\n",
        VAR_14, FUNC_3(VAR_14));
  }
 }

 return (VAR_5);
}
