
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* elements; } ;
union acpi_object {TYPE_3__ package; } ;
typedef scalar_t__ acpi_handle ;
struct TYPE_4__ {scalar_t__ handle; } ;
struct TYPE_5__ {TYPE_1__ reference; } ;



__attribute__((used)) static bool FUNC_0(union acpi_object *VAR_0,
           unsigned int VAR_1, unsigned int VAR_2)
{
 acpi_handle VAR_3, VAR_4;
 unsigned int VAR_5;


 VAR_3 = VAR_0->package.elements[VAR_2].reference.handle;
 for (VAR_5 = VAR_1; VAR_5 < VAR_2; VAR_5++) {
  VAR_4 = VAR_0->package.elements[VAR_5].reference.handle;
  if (VAR_4 == VAR_3)
   return 1;
 }

 return 0;
}
