
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ integer; int name; union acpi_parse_object* arg; } ;
struct TYPE_7__ {union acpi_parse_object* next; TYPE_1__ value; } ;
union acpi_parse_object {TYPE_2__ common; } ;
typedef scalar_t__ u8 ;
struct acpi_walk_state {int scope_info; } ;
struct acpi_namespace_node {TYPE_5__* object; } ;
struct acpi_create_field_info {struct acpi_namespace_node* region_node; int field_type; scalar_t__ attribute; scalar_t__ field_flags; } ;
typedef int acpi_status ;
struct TYPE_9__ {scalar_t__ space_id; int length; } ;
struct TYPE_8__ {int internal_pcc_buffer; } ;
struct TYPE_10__ {TYPE_4__ region; TYPE_3__ field; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,union acpi_parse_object*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,union acpi_parse_object*,int ,struct acpi_walk_state*,struct acpi_namespace_node**) ;
 int FUNC_5 (struct acpi_create_field_info*,struct acpi_walk_state*,union acpi_parse_object*) ;
 int FUNC_6 (int ,int ,int ,int ,int ,struct acpi_walk_state*,struct acpi_namespace_node**) ;
 int VAR_6 ;
 int FUNC_7 (struct acpi_create_field_info*,int ,int) ;
 int FUNC_8 (int ) ;

acpi_status
FUNC_9(union acpi_parse_object *VAR_7,
       struct acpi_namespace_node *VAR_8,
       struct acpi_walk_state *VAR_9)
{
 acpi_status VAR_10;
 union acpi_parse_object *VAR_11;
 struct acpi_create_field_info VAR_12;

 FUNC_3(VAR_6, VAR_7);



 VAR_11 = VAR_7->common.value.arg;

 if (!VAR_8) {
  VAR_10 =
      FUNC_6(VAR_9->scope_info,
       VAR_11->common.value.name, VAR_4,
       VAR_1, VAR_2,
       VAR_9, &VAR_8);






  if (FUNC_2(VAR_10)) {
   FUNC_1(VAR_9->scope_info,
          VAR_11->common.value.name, VAR_10);
   FUNC_8(VAR_10);
  }
 }

 FUNC_7(&VAR_12, 0, sizeof(struct acpi_create_field_info));



 VAR_11 = VAR_11->common.next;
 VAR_12.field_flags = (u8) VAR_11->common.value.integer;
 VAR_12.attribute = 0;



 VAR_12.field_type = VAR_3;
 VAR_12.region_node = VAR_8;

 VAR_10 = FUNC_5(&VAR_12, VAR_9, VAR_11->common.next);
 if (VAR_12.region_node->object->region.space_id ==
     VAR_0
     && !(VAR_8->object->field.internal_pcc_buffer =
   FUNC_0(VAR_12.region_node->object->region.
          length))) {
  FUNC_8(VAR_5);
 }
 FUNC_8(VAR_10);
}
