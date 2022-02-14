
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int Sequence; int Id; int MinimumTick; int Flags; int Address; } ;
typedef TYPE_1__ ACPI_TABLE_HPET ;
typedef int ACPI_TABLE_HEADER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void
FUNC_3(ACPI_TABLE_HEADER *VAR_6)
{
 ACPI_TABLE_HPET *VAR_7;

 FUNC_2(VAR_4);
 FUNC_1(VAR_6);
 VAR_7 = (ACPI_TABLE_HPET *)VAR_6;
 FUNC_2("\tHPET Number=%d\n", VAR_7->Sequence);
 FUNC_2("\tADDR=");
 FUNC_0(&VAR_7->Address);
 FUNC_2("\tHW Rev=0x%x\n", VAR_7->Id & VAR_2);
 FUNC_2("\tComparators=%d\n", (VAR_7->Id & VAR_0) >>
     8);
 FUNC_2("\tCounter Size=%d\n", VAR_7->Id & VAR_1 ?
     1 : 0);
 FUNC_2("\tLegacy IRQ routing capable={");
 if (VAR_7->Id & VAR_3)
  FUNC_2("TRUE}\n");
 else
  FUNC_2("FALSE}\n");
 FUNC_2("\tPCI Vendor ID=0x%04x\n", VAR_7->Id >> 16);
 FUNC_2("\tMinimal Tick=%d\n", VAR_7->MinimumTick);
 FUNC_2("\tFlags=0x%02x\n", VAR_7->Flags);
 FUNC_2(VAR_5);
}
