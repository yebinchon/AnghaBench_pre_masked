
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Facs; int XFacs; } ;
typedef TYPE_1__ ACPI_TABLE_FADT ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(ACPI_TABLE_FADT *VAR_1)
{
 int VAR_2;


 if (VAR_0 == 8) {
  VAR_2 = 2;
  if (VAR_1->Facs != 0 &&
      (VAR_1->XFacs & 0xffffffff) != VAR_1->Facs)
   VAR_2 = 1;
 } else
  VAR_2 = 1;
 return (VAR_2);
}
