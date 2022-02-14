
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int count; union acpi_object* elements; } ;
union acpi_object {scalar_t__ type; TYPE_1__ package; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (union acpi_object*) ;

__attribute__((used)) static bool FUNC_1(const union acpi_object *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->package.count; VAR_2++) {
  const union acpi_object *VAR_3;

  VAR_3 = &VAR_1->package.elements[VAR_2];




  if (VAR_3->package.count != 2
      || VAR_3->package.elements[0].type != VAR_0
      || !FUNC_0(&VAR_3->package.elements[1]))
   return 0;
 }
 return 1;
}
