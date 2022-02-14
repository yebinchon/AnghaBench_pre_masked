
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int handle; int actual_type; } ;
union acpi_object {int type; TYPE_1__ reference; } ;
struct acpi_object_list {int count; union acpi_object* pointer; } ;
struct acpi_namespace_node {int type; } ;
struct acpi_buffer {scalar_t__ pointer; int length; } ;
typedef int acpi_status ;
typedef int acpi_object_type ;


 int VAR_0 ;
 int FUNC_0 (int ,struct acpi_namespace_node*) ;
 scalar_t__ FUNC_1 (int ) ;


 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int *,struct acpi_object_list*,struct acpi_buffer*) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*,int ,...) ;
 int FUNC_6 (int) ;
 int VAR_7 ;

__attribute__((used)) static acpi_status
FUNC_7(struct acpi_namespace_node *VAR_8,
    acpi_object_type VAR_9,
    union acpi_object **VAR_10)
{
 union acpi_object *VAR_11;
 struct acpi_object_list VAR_12;
 union acpi_object VAR_13[2];
 struct acpi_buffer VAR_14;
 acpi_status VAR_15;

 VAR_13[0].type = VAR_1;
 VAR_13[0].reference.actual_type = VAR_8->type;
 VAR_13[0].reference.handle = FUNC_0(VAR_6, VAR_8);

 VAR_12.count = 1;
 VAR_12.pointer = VAR_13;

 VAR_14.length = VAR_0;

 VAR_5 = VAR_4;
 VAR_15 = FUNC_2(VAR_7, ((void*)0),
          &VAR_12, &VAR_14);

 VAR_5 = VAR_3;
 if (FUNC_1(VAR_15)) {
  FUNC_5("Could not read from object, %s",
          FUNC_3(VAR_15));
  return (VAR_15);
 }

 VAR_11 = (union acpi_object *)VAR_14.pointer;

 switch (VAR_11->type) {
 case 130:
 case 131:
 case 128:
 case 129:





  if (VAR_11->type != VAR_9) {
   FUNC_5
       (" Type mismatch: Expected %s, Received %s",
        FUNC_6(VAR_9),
        FUNC_6(VAR_11->type));

   FUNC_4(VAR_14.pointer);
   return (VAR_2);
  }

  *VAR_10 = VAR_11;
  break;

 default:

  FUNC_5(" Unsupported return object type, %s",
          FUNC_6(VAR_11->type));

  FUNC_4(VAR_14.pointer);
  return (VAR_2);
 }

 return (VAR_15);
}
