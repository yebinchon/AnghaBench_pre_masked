
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t class; } ;
struct TYPE_3__ {scalar_t__ type; } ;
union acpi_operand_object {TYPE_2__ reference; TYPE_1__ common; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (union acpi_operand_object*) ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 char const** VAR_3 ;

const char *FUNC_1(union acpi_operand_object *VAR_4)
{

 if (!VAR_4) {
  return ("NULL Object");
 }

 if (FUNC_0(VAR_4) != VAR_0) {
  return ("Not an Operand object");
 }

 if (VAR_4->common.type != VAR_2) {
  return ("Not a Reference object");
 }

 if (VAR_4->reference.class > VAR_1) {
  return ("Unknown Reference class");
 }

 return (VAR_3[VAR_4->reference.class]);
}
