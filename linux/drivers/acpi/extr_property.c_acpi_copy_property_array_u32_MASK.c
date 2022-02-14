
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ value; } ;
union acpi_object {scalar_t__ type; TYPE_1__ integer; } ;
typedef scalar_t__ u32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_0(const union acpi_object *VAR_4,
     u32 *VAR_5, size_t VAR_6)
{
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  if (VAR_4[VAR_7].type != VAR_0)
   return -VAR_2;
  if (VAR_4[VAR_7].integer.value > VAR_3)
   return -VAR_1;

  VAR_5[VAR_7] = VAR_4[VAR_7].integer.value;
 }
 return 0;
}
