
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {union acpi_parse_object* arg; } ;
struct TYPE_4__ {int arg_list_length; union acpi_parse_object* next; union acpi_parse_object* parent; TYPE_1__ value; int aml_opcode; } ;
union acpi_parse_object {TYPE_2__ common; } ;
struct acpi_opcode_info {scalar_t__ class; int flags; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct acpi_opcode_info* FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_3(union acpi_parse_object *VAR_5, union acpi_parse_object *VAR_6)
{
 union acpi_parse_object *VAR_7;
 const struct acpi_opcode_info *VAR_8;

 FUNC_1(VAR_3);

 if (!VAR_5) {
  VAR_4;
 }



 VAR_8 = FUNC_2(VAR_5->common.aml_opcode);
 if (VAR_8->class == VAR_1) {



  FUNC_0((VAR_0, "Invalid AML Opcode: 0x%2.2X",
       VAR_5->common.aml_opcode));
  VAR_4;
 }



 if (!(VAR_8->flags & VAR_2)) {



  VAR_4;
 }



 if (VAR_5->common.value.arg) {



  VAR_7 = VAR_5->common.value.arg;
  while (VAR_7->common.next) {
   VAR_7 = VAR_7->common.next;
  }
  VAR_7->common.next = VAR_6;
 } else {


  VAR_5->common.value.arg = VAR_6;
 }



 while (VAR_6) {
  VAR_6->common.parent = VAR_5;
  VAR_6 = VAR_6->common.next;

  VAR_5->common.arg_list_length++;
 }

 VAR_4;
}
