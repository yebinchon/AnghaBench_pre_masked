
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Address; int Flags; } ;
typedef TYPE_1__ ACPI_TABLE_MADT ;
typedef int ACPI_TABLE_HEADER ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void
FUNC_3(ACPI_TABLE_HEADER *VAR_4)
{
 ACPI_TABLE_MADT *VAR_5;

 FUNC_2(VAR_1);
 FUNC_0(VAR_4);
 VAR_5 = (ACPI_TABLE_MADT *)VAR_4;
 FUNC_2("\tLocal APIC ADDR=0x%08x\n", VAR_5->Address);
 FUNC_2("\tFlags={");
 if (VAR_5->Flags & VAR_0)
  FUNC_2("PC-AT");
 FUNC_2("}\n");
 FUNC_1(VAR_4, (VAR_5 + 1), VAR_3);
 FUNC_2(VAR_2);
}
