
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ count; union acpi_operand_object** elements; } ;
union acpi_operand_object {TYPE_1__ package; } ;
typedef scalar_t__ u32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (union acpi_operand_object*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(union acpi_operand_object *VAR_1, u32 VAR_2)
{
 union acpi_operand_object **VAR_3;
 union acpi_operand_object **VAR_4;
 u32 VAR_5;
 u32 VAR_6;
 u32 VAR_7;

 FUNC_0(VAR_0);

 VAR_5 = VAR_1->package.count;
 VAR_6 = VAR_5 - 1;

 VAR_3 = VAR_1->package.elements;
 VAR_4 = VAR_3;



 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  if (VAR_7 == VAR_2) {
   FUNC_1(*VAR_3);
   FUNC_1(*VAR_3);
  } else {
   *VAR_4 = *VAR_3;
   VAR_4++;
  }

  VAR_3++;
 }



 *VAR_4 = ((void*)0);
 VAR_1->package.count = VAR_6;
}
