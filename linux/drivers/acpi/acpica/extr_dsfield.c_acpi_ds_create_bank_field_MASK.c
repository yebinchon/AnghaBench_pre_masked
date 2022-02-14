
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ integer; int string; int name; union acpi_parse_object* arg; } ;
struct TYPE_4__ {union acpi_parse_object* next; TYPE_1__ value; } ;
union acpi_parse_object {TYPE_2__ common; } ;
typedef scalar_t__ u8 ;
struct acpi_walk_state {int scope_info; } ;
struct acpi_namespace_node {int dummy; } ;
struct acpi_create_field_info {struct acpi_namespace_node* data_register_node; struct acpi_namespace_node* region_node; int field_type; scalar_t__ field_flags; struct acpi_namespace_node* register_node; } ;
typedef int acpi_status ;


 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,union acpi_parse_object*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,union acpi_parse_object*,int ,struct acpi_walk_state*,struct acpi_namespace_node**) ;
 int FUNC_4 (struct acpi_create_field_info*,struct acpi_walk_state*,union acpi_parse_object*) ;
 int FUNC_5 (int ,int ,int ,int ,int ,struct acpi_walk_state*,struct acpi_namespace_node**) ;
 int VAR_5 ;
 int FUNC_6 (int ) ;

acpi_status
FUNC_7(union acpi_parse_object *VAR_6,
     struct acpi_namespace_node *VAR_7,
     struct acpi_walk_state *VAR_8)
{
 acpi_status VAR_9;
 union acpi_parse_object *VAR_10;
 struct acpi_create_field_info VAR_11;

 FUNC_2(VAR_5, VAR_6);



 VAR_10 = VAR_6->common.value.arg;
 if (!VAR_7) {
  VAR_9 =
      FUNC_5(VAR_8->scope_info,
       VAR_10->common.value.name, VAR_4,
       VAR_0, VAR_1,
       VAR_8, &VAR_7);






  if (FUNC_1(VAR_9)) {
   FUNC_0(VAR_8->scope_info,
          VAR_10->common.value.name, VAR_9);
   FUNC_6(VAR_9);
  }
 }



 VAR_10 = VAR_10->common.next;
 VAR_9 =
     FUNC_5(VAR_8->scope_info, VAR_10->common.value.string,
      VAR_2, VAR_0,
      VAR_1, VAR_8,
      &VAR_11.register_node);
 if (FUNC_1(VAR_9)) {
  FUNC_0(VAR_8->scope_info,
         VAR_10->common.value.string, VAR_9);
  FUNC_6(VAR_9);
 }






 VAR_10 = VAR_10->common.next;



 VAR_10 = VAR_10->common.next;
 VAR_11.field_flags = (u8) VAR_10->common.value.integer;



 VAR_11.field_type = VAR_3;
 VAR_11.region_node = VAR_7;
 VAR_11.data_register_node = (struct acpi_namespace_node *)VAR_6;

 VAR_9 = FUNC_4(&VAR_11, VAR_8, VAR_10->common.next);
 FUNC_6(VAR_9);
}
