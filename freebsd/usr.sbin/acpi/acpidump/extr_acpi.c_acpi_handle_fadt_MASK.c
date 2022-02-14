
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int Length; int Signature; } ;
struct TYPE_11__ {int XDsdt; int Dsdt; int XFacs; int Facs; } ;
struct TYPE_10__ {int Length; } ;
typedef TYPE_1__ ACPI_TABLE_HEADER ;
typedef TYPE_2__ ACPI_TABLE_FADT ;
typedef TYPE_3__ ACPI_TABLE_FACS ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int,char*) ;
 scalar_t__ FUNC_7 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_8(ACPI_TABLE_HEADER *VAR_1)
{
 ACPI_TABLE_HEADER *VAR_2;
 ACPI_TABLE_FACS *VAR_3;
 ACPI_TABLE_FADT *VAR_4;
 int VAR_5;

 VAR_4 = (ACPI_TABLE_FADT *)VAR_1;
 FUNC_5(VAR_1);

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5 == 1)
  VAR_3 = (ACPI_TABLE_FACS *)FUNC_2(VAR_4->Facs);
 else
  VAR_3 = (ACPI_TABLE_FACS *)FUNC_2(VAR_4->XFacs);
 if (FUNC_7(VAR_3->Signature, VAR_0, 4) != 0 || VAR_3->Length < 64)
  FUNC_6(1, "FACS is corrupt");
 FUNC_4(VAR_3);

 if (VAR_5 == 1)
  VAR_2 = (ACPI_TABLE_HEADER *)FUNC_2(VAR_4->Dsdt);
 else
  VAR_2 = (ACPI_TABLE_HEADER *)FUNC_2(VAR_4->XDsdt);
 if (FUNC_0(VAR_2, VAR_2->Length))
  FUNC_6(1, "DSDT is corrupt");
 FUNC_3(VAR_2);
}
