
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int Length; int Type; } ;
typedef TYPE_1__ ACPI_DMAR_HEADER ;






 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static int
FUNC_5(void *VAR_0, int VAR_1)
{
 ACPI_DMAR_HEADER *VAR_2 = VAR_0;

 if (VAR_1 < (int)sizeof(ACPI_DMAR_HEADER))
  return (-1);

 if (VAR_1 < VAR_2->Length)
  return (-1);

 switch (VAR_2->Type) {
 case 130:
  FUNC_1(VAR_0);
  break;
 case 129:
  FUNC_3(VAR_0);
  break;
 case 128:
  FUNC_0(VAR_0);
  break;
 case 131:
  FUNC_2(VAR_0);
  break;
 default:
  FUNC_4("\n");
  FUNC_4("\tType=%d\n", VAR_2->Type);
  FUNC_4("\tLength=%d\n", VAR_2->Length);
  break;
 }
 return (VAR_2->Length);
}
