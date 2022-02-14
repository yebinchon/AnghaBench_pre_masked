
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int flags; } ;
union acpi_parse_object {TYPE_2__ named; TYPE_1__ common; } ;
typedef int u32 ;


 int VAR_0 ;

void FUNC_0(union acpi_parse_object *VAR_1, u32 VAR_2)
{



 if (VAR_1->common.flags & VAR_0) {
  return;
 }

 VAR_1->named.name = VAR_2;
}
