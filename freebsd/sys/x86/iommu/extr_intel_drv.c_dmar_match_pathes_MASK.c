
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef enum AcpiDmarScopeType { ____Placeholder_AcpiDmarScopeType } AcpiDmarScopeType ;
struct TYPE_4__ {scalar_t__ Device; scalar_t__ Function; } ;
typedef TYPE_1__ ACPI_DMAR_PCI_PATH ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(int VAR_1, const ACPI_DMAR_PCI_PATH *VAR_2, int VAR_3,
    int VAR_4, const ACPI_DMAR_PCI_PATH *VAR_5, int VAR_6,
    enum AcpiDmarScopeType VAR_7)
{
 int VAR_8, VAR_9;

 if (VAR_1 != VAR_4)
  return (0);
 if (VAR_7 == VAR_0 && VAR_3 != VAR_6)
  return (0);
 VAR_9 = VAR_3;
 if (VAR_6 < VAR_9)
  VAR_9 = VAR_6;
 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  if (VAR_2[VAR_8].Device != VAR_5[VAR_8].Device ||
      VAR_2[VAR_8].Function != VAR_5[VAR_8].Function)
   return (0);
 }
 return (1);
}
