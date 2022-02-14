
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int Length; int EnumerationId; int Bus; int EntryType; } ;
struct TYPE_3__ {int Device; int Function; } ;
typedef TYPE_1__ ACPI_DMAR_PCI_PATH ;
typedef TYPE_2__ ACPI_DMAR_DEVICE_SCOPE ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int
FUNC_2(void *VAR_0, int VAR_1)
{
 char VAR_2;
 int VAR_3;
 ACPI_DMAR_PCI_PATH *VAR_4, *VAR_5;
 ACPI_DMAR_DEVICE_SCOPE *VAR_6 = VAR_0;

 if (VAR_1 < (int)sizeof(ACPI_DMAR_DEVICE_SCOPE))
  return (-1);

 if (VAR_1 < VAR_6->Length)
  return (-1);

 FUNC_1("\n");
 FUNC_1("\t\tType=%s\n", FUNC_0(VAR_6->EntryType));
 FUNC_1("\t\tLength=%d\n", VAR_6->Length);
 FUNC_1("\t\tEnumerationId=%d\n", VAR_6->EnumerationId);
 FUNC_1("\t\tStartBusNumber=%d\n", VAR_6->Bus);

 VAR_4 = (ACPI_DMAR_PCI_PATH *)(VAR_6 + 1);
 VAR_3 = VAR_6->Length - sizeof(ACPI_DMAR_DEVICE_SCOPE);
 VAR_5 = VAR_4 + VAR_3 / sizeof(ACPI_DMAR_PCI_PATH);
 if (VAR_4 < VAR_5) {
  VAR_2 = '{';
  FUNC_1("\t\tPath=");
  do {
   FUNC_1("%c%d:%d", VAR_2, VAR_4->Device, VAR_4->Function);
   VAR_2=',';
   VAR_4++;
  } while (VAR_4 < VAR_5);
  FUNC_1("}\n");
 }

 return (VAR_6->Length);
}
