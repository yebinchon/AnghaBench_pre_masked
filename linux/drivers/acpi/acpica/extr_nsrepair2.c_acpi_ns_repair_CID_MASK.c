
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; int reference_count; } ;
struct TYPE_3__ {scalar_t__ count; union acpi_operand_object** elements; } ;
union acpi_operand_object {TYPE_2__ common; TYPE_1__ package; } ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct acpi_evaluate_info {int dummy; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct acpi_evaluate_info*,union acpi_operand_object**) ;

__attribute__((used)) static acpi_status
FUNC_2(struct acpi_evaluate_info *VAR_3,
     union acpi_operand_object **VAR_4)
{
 acpi_status VAR_5;
 union acpi_operand_object *VAR_6 = *VAR_4;
 union acpi_operand_object **VAR_7;
 union acpi_operand_object *VAR_8;
 u16 VAR_9;
 u32 VAR_10;



 if (VAR_6->common.type == VAR_1) {
  VAR_5 = FUNC_1(VAR_3, VAR_4);
  return (VAR_5);
 }



 if (VAR_6->common.type != VAR_0) {
  return (VAR_2);
 }



 VAR_7 = VAR_6->package.elements;
 for (VAR_10 = 0; VAR_10 < VAR_6->package.count; VAR_10++) {
  VAR_8 = *VAR_7;
  VAR_9 = VAR_8->common.reference_count;

  VAR_5 = FUNC_1(VAR_3, VAR_7);
  if (FUNC_0(VAR_5)) {
   return (VAR_5);
  }

  if (VAR_8 != *VAR_7) {



   (*VAR_7)->common.reference_count =
       VAR_9;
  }

  VAR_7++;
 }

 return (VAR_2);
}
