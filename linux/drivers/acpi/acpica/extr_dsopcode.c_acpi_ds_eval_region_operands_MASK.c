
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ integer; union acpi_parse_object* arg; } ;
struct TYPE_7__ {int aml_opcode; union acpi_parse_object* next; TYPE_1__ value; struct acpi_namespace_node* node; } ;
union acpi_parse_object {TYPE_2__ common; } ;
struct TYPE_10__ {int flags; scalar_t__ length; scalar_t__ address; int space_id; } ;
struct TYPE_9__ {scalar_t__ value; } ;
union acpi_operand_object {TYPE_5__ region; TYPE_4__ integer; } ;
typedef scalar_t__ u32 ;
struct acpi_walk_state {int num_operands; union acpi_operand_object** operands; } ;
struct TYPE_8__ {int ascii; } ;
struct acpi_namespace_node {TYPE_3__ name; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_physical_address ;
typedef scalar_t__ acpi_adr_space_type ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,union acpi_parse_object*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct acpi_walk_state*,union acpi_parse_object*) ;
 int FUNC_6 (int ,int ,struct acpi_walk_state*) ;
 union acpi_operand_object* FUNC_7 (struct acpi_namespace_node*) ;
 int FUNC_8 (int ,scalar_t__,scalar_t__,struct acpi_namespace_node*) ;
 int FUNC_9 (union acpi_operand_object*) ;
 int VAR_6 ;
 int FUNC_10 (int ) ;

acpi_status
FUNC_11(struct acpi_walk_state *VAR_7,
        union acpi_parse_object *VAR_8)
{
 acpi_status VAR_9;
 union acpi_operand_object *VAR_10;
 union acpi_operand_object *VAR_11;
 struct acpi_namespace_node *VAR_12;
 union acpi_parse_object *VAR_13;
 acpi_adr_space_type VAR_14;

 FUNC_3(VAR_6, VAR_8);





 VAR_12 = VAR_8->common.node;



 VAR_13 = VAR_8->common.value.arg;
 VAR_14 = (acpi_adr_space_type)VAR_13->common.value.integer;



 VAR_13 = VAR_13->common.next;



 VAR_9 = FUNC_5(VAR_7, VAR_13);
 if (FUNC_1(VAR_9)) {
  FUNC_10(VAR_9);
 }



 VAR_9 =
     FUNC_6(VAR_8->common.aml_opcode, VAR_2,
         VAR_7);
 if (FUNC_1(VAR_9)) {
  FUNC_10(VAR_9);
 }

 VAR_10 = FUNC_7(VAR_12);
 if (!VAR_10) {
  FUNC_10(VAR_4);
 }





 VAR_11 = VAR_7->operands[VAR_7->num_operands - 1];

 VAR_10->region.length = (u32) VAR_11->integer.value;
 FUNC_9(VAR_11);



 if (!VAR_10->region.length
     && (VAR_14 < VAR_1)) {
  FUNC_4((VAR_3,
         "Operation Region [%4.4s] has zero length (SpaceId %X)",
         VAR_12->name.ascii, VAR_14));
 }





 VAR_11 = VAR_7->operands[VAR_7->num_operands - 2];

 VAR_10->region.address = (acpi_physical_address)
     VAR_11->integer.value;
 FUNC_9(VAR_11);

 FUNC_0((VAR_0, "RgnObj %p Addr %8.8X%8.8X Len %X\n",
     VAR_10,
     FUNC_2(VAR_10->region.address),
     VAR_10->region.length));

 VAR_9 = FUNC_8(VAR_10->region.space_id,
        VAR_10->region.address,
        VAR_10->region.length, VAR_12);



 VAR_10->region.flags |= VAR_5;
 FUNC_10(VAR_9);
}
