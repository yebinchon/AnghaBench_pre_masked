
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uintmax_t ;
struct TYPE_8__ {int Length; } ;
struct TYPE_7__ {int * TableOffsetEntry; } ;
struct TYPE_6__ {int * TableOffsetEntry; } ;
typedef TYPE_1__ ACPI_TABLE_XSDT ;
typedef TYPE_2__ ACPI_TABLE_RSDT ;
typedef TYPE_3__ ACPI_TABLE_HEADER ;


 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void
FUNC_4(ACPI_TABLE_HEADER *VAR_3)
{
 ACPI_TABLE_RSDT *VAR_4;
 ACPI_TABLE_XSDT *VAR_5;
 int VAR_6, VAR_7;

 VAR_4 = (ACPI_TABLE_RSDT *)VAR_3;
 VAR_5 = (ACPI_TABLE_XSDT *)VAR_3;
 FUNC_3(VAR_0);
 FUNC_0(VAR_3);
 VAR_7 = (VAR_3->Length - sizeof(ACPI_TABLE_HEADER)) / VAR_2;
 FUNC_3("\tEntries={ ");
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  if (VAR_6 > 0)
   FUNC_3(", ");
  if (VAR_2 == 4)
   FUNC_3("0x%08x", FUNC_1(VAR_4->TableOffsetEntry[VAR_6]));
  else
   FUNC_3("0x%016jx",
       (uintmax_t)FUNC_2(VAR_5->TableOffsetEntry[VAR_6]));
 }
 FUNC_3(" }\n");
 FUNC_3(VAR_1);
}
