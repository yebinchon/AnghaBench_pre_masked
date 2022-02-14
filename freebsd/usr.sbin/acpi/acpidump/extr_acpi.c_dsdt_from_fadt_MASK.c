
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int XDsdt; int Dsdt; } ;
struct TYPE_7__ {int Length; } ;
typedef TYPE_1__ ACPI_TABLE_HEADER ;
typedef TYPE_2__ ACPI_TABLE_FADT ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int,char*) ;

ACPI_TABLE_HEADER *
FUNC_4(ACPI_TABLE_FADT *VAR_0)
{
 ACPI_TABLE_HEADER *VAR_1;


 if (FUNC_1(VAR_0) == 1)
  VAR_1 = (ACPI_TABLE_HEADER *)FUNC_2(VAR_0->Dsdt);
 else
  VAR_1 = (ACPI_TABLE_HEADER *)FUNC_2(VAR_0->XDsdt);
 if (FUNC_0(VAR_1, VAR_1->Length))
  FUNC_3(1, "DSDT is corrupt\n");
 return (VAR_1);
}
