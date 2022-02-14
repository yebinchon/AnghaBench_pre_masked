
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ value; } ;
struct TYPE_3__ {union acpi_operand_object** elements; } ;
union acpi_operand_object {TYPE_2__ integer; TYPE_1__ package; } ;
typedef scalar_t__ u8 ;
typedef int u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_0(union acpi_operand_object **VAR_2,
    u32 VAR_3, u32 VAR_4, u8 VAR_5)
{
 union acpi_operand_object *VAR_6;
 union acpi_operand_object *VAR_7;
 union acpi_operand_object *VAR_8;
 u32 VAR_9;
 u32 VAR_10;



 for (VAR_9 = 1; VAR_9 < VAR_3; VAR_9++) {
  for (VAR_10 = (VAR_3 - 1); VAR_10 >= VAR_9; VAR_10--) {
   VAR_6 = VAR_2[VAR_10 - 1]->package.elements[VAR_4];
   VAR_7 = VAR_2[VAR_10]->package.elements[VAR_4];

   if (((VAR_5 == VAR_0) &&
        (VAR_6->integer.value >
         VAR_7->integer.value))
       || ((VAR_5 == VAR_1)
    && (VAR_6->integer.value <
        VAR_7->integer.value))) {
    VAR_8 = VAR_2[VAR_10 - 1];
    VAR_2[VAR_10 - 1] = VAR_2[VAR_10];
    VAR_2[VAR_10] = VAR_8;
   }
  }
 }
}
