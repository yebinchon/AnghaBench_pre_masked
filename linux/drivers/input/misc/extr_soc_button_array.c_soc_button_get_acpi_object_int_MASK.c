
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union acpi_object {scalar_t__ type; TYPE_1__ integer; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(const union acpi_object *VAR_1)
{
 if (VAR_1->type != VAR_0)
  return -1;

 return VAR_1->integer.value;
}
