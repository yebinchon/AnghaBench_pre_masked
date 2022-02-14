
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Length; } ;
typedef TYPE_1__ ACPI_TABLE_HEADER ;
typedef int ACPI_TABLE_DMAR ;


 int FUNC_0 (char*,int) ;

__attribute__((used)) static void
FUNC_1(ACPI_TABLE_HEADER *VAR_0)
{
 char *VAR_1;
 int VAR_2, VAR_3;
 ACPI_TABLE_DMAR *VAR_4;

 VAR_4 = (ACPI_TABLE_DMAR *)VAR_0;
 VAR_2 = VAR_0->Length - sizeof(ACPI_TABLE_DMAR);
 while (VAR_2 > 0) {
  VAR_1 = (char *)VAR_0 + VAR_0->Length - VAR_2;
  VAR_3 = FUNC_0(VAR_1, VAR_2);
  if (VAR_3 <= 0)
   break;
  else
   VAR_2 -= VAR_3;
 }
}
