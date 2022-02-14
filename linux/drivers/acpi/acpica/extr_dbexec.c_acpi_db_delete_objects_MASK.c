
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t count; union acpi_object* elements; } ;
struct TYPE_3__ {union acpi_object* pointer; } ;
union acpi_object {int type; TYPE_2__ package; TYPE_1__ buffer; } ;
typedef size_t u32 ;


 int FUNC_0 (union acpi_object*) ;



void FUNC_1(u32 VAR_0, union acpi_object *VAR_1)
{
 u32 VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  switch (VAR_1[VAR_2].type) {
  case 129:

   FUNC_0(VAR_1[VAR_2].buffer.pointer);
   break;

  case 128:



   FUNC_1(VAR_1[VAR_2].package.count,
            VAR_1[VAR_2].package.elements);



   FUNC_0(VAR_1[VAR_2].package.elements);
   break;

  default:

   break;
  }
 }
}
