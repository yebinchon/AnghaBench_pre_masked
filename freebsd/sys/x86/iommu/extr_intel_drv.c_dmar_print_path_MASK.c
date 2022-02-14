
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Device; int Function; } ;
typedef TYPE_1__ ACPI_DMAR_PCI_PATH ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(int VAR_0, int VAR_1, const ACPI_DMAR_PCI_PATH *VAR_2)
{
 int VAR_3;

 FUNC_0("[%d, ", VAR_0);
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_3 != 0)
   FUNC_0(", ");
  FUNC_0("(%d, %d)", VAR_2[VAR_3].Device, VAR_2[VAR_3].Function);
 }
 FUNC_0("]");
}
