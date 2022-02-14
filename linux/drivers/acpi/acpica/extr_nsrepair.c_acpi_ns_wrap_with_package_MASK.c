
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {union acpi_operand_object** elements; } ;
union acpi_operand_object {TYPE_1__ package; } ;
struct acpi_evaluate_info {int return_flags; int full_pathname; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 union acpi_operand_object* FUNC_2 (int) ;
 int FUNC_3 (union acpi_operand_object*) ;
 int VAR_5 ;

acpi_status
FUNC_4(struct acpi_evaluate_info *VAR_6,
     union acpi_operand_object *VAR_7,
     union acpi_operand_object **VAR_8)
{
 union acpi_operand_object *VAR_9;

 FUNC_1(VAR_5);





 VAR_9 = FUNC_2(1);
 if (!VAR_9) {
  return (VAR_3);
 }

 VAR_9->package.elements[0] = VAR_7;

 FUNC_0((VAR_0,
     "%s: Wrapped %s with expected Package object\n",
     VAR_6->full_pathname,
     FUNC_3(VAR_7)));



 *VAR_8 = VAR_9;
 VAR_6->return_flags |= VAR_1 | VAR_2;
 return (VAR_4);
}
