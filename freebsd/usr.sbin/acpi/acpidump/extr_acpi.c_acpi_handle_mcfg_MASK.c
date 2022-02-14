
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uintmax_t ;
typedef int u_int ;
struct TYPE_6__ {int PciSegment; int StartBusNumber; int EndBusNumber; scalar_t__ Address; } ;
struct TYPE_5__ {int Length; } ;
typedef int ACPI_TABLE_MCFG ;
typedef TYPE_1__ ACPI_TABLE_HEADER ;
typedef TYPE_2__ ACPI_MCFG_ALLOCATION ;


 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(ACPI_TABLE_HEADER *VAR_2)
{
 ACPI_TABLE_MCFG *VAR_3;
 ACPI_MCFG_ALLOCATION *VAR_4;
 u_int VAR_5, VAR_6;

 FUNC_1(VAR_0);
 FUNC_0(VAR_2);
 VAR_3 = (ACPI_TABLE_MCFG *)VAR_2;
 VAR_6 = (VAR_2->Length - sizeof(ACPI_TABLE_MCFG)) /
     sizeof(ACPI_MCFG_ALLOCATION);
 VAR_4 = (ACPI_MCFG_ALLOCATION *)(VAR_3 + 1);
 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++, VAR_4++) {
  FUNC_1("\n");
  FUNC_1("\tBase Address=0x%016jx\n", (uintmax_t)VAR_4->Address);
  FUNC_1("\tSegment Group=0x%04x\n", VAR_4->PciSegment);
  FUNC_1("\tStart Bus=%d\n", VAR_4->StartBusNumber);
  FUNC_1("\tEnd Bus=%d\n", VAR_4->EndBusNumber);
 }
 FUNC_1(VAR_1);
}
