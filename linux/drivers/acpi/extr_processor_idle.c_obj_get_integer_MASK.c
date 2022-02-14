
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union acpi_object {scalar_t__ type; TYPE_1__ integer; } ;
typedef int u32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(union acpi_object *VAR_2, u32 *VAR_3)
{
 if (VAR_2->type != VAR_0)
  return -VAR_1;

 *VAR_3 = VAR_2->integer.value;
 return 0;
}
