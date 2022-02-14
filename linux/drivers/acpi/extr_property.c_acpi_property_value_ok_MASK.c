
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int count; TYPE_1__* elements; } ;
union acpi_object {int type; TYPE_2__ package; } ;
struct TYPE_3__ {int type; } ;







__attribute__((used)) static bool FUNC_0(const union acpi_object *VAR_0)
{
 int VAR_1;





 switch (VAR_0->type) {
 case 131:
 case 128:
 case 130:
  return 1;

 case 129:
  for (VAR_1 = 0; VAR_1 < VAR_0->package.count; VAR_1++)
   switch (VAR_0->package.elements[VAR_1].type) {
   case 131:
   case 128:
   case 130:
    continue;

   default:
    return 0;
   }

  return 1;
 }
 return 0;
}
