
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int Length; int Type; } ;
typedef TYPE_1__ ACPI_DMAR_HEADER ;



 int FUNC_0 (void*) ;

__attribute__((used)) static int
FUNC_1(void *VAR_0, int VAR_1)
{
 ACPI_DMAR_HEADER *VAR_2 = VAR_0;

 if (VAR_1 < (int)sizeof(ACPI_DMAR_HEADER))
  return (-1);

 if (VAR_1 < VAR_2->Length)
  return (-1);

 switch (VAR_2->Type) {
 case 128:
  FUNC_0(VAR_0);
  break;
 }
 return (VAR_2->Length);
}
