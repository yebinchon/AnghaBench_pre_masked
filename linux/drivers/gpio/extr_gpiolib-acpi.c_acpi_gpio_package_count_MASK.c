
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int count; union acpi_object* elements; } ;
union acpi_object {int type; TYPE_1__ package; } ;




 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const union acpi_object *VAR_1)
{
 const union acpi_object *VAR_2 = VAR_1->package.elements;
 const union acpi_object *VAR_3 = VAR_2 + VAR_1->package.count;
 unsigned int VAR_4 = 0;

 while (VAR_2 < VAR_3) {
  switch (VAR_2->type) {
  case 128:
   VAR_2 += 3;

  case 129:
   VAR_2++;
   VAR_4++;
   break;

  default:
   return -VAR_0;
  }
 }

 return VAR_4;
}
