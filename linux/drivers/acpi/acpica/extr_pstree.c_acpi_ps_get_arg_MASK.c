
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {union acpi_parse_object* arg; } ;
struct TYPE_4__ {union acpi_parse_object* next; TYPE_1__ value; int aml_opcode; } ;
union acpi_parse_object {TYPE_2__ common; } ;
typedef scalar_t__ u32 ;
struct acpi_opcode_info {scalar_t__ class; int flags; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct acpi_opcode_info* FUNC_1 (int ) ;

union acpi_parse_object *FUNC_2(union acpi_parse_object *VAR_2, u32 VAR_3)
{
 union acpi_parse_object *VAR_4 = ((void*)0);
 const struct acpi_opcode_info *VAR_5;

 FUNC_0();
 VAR_5 = FUNC_1(VAR_2->common.aml_opcode);
 if (VAR_5->class == VAR_0) {



  return (((void*)0));
 }



 if (!(VAR_5->flags & VAR_1)) {



  return (((void*)0));
 }



 VAR_4 = VAR_2->common.value.arg;
 while (VAR_4 && VAR_3) {
  VAR_3--;
  VAR_4 = VAR_4->common.next;
 }

 return (VAR_4);
}
