
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int StartMethod; int ControlAddress; } ;
typedef TYPE_1__ ACPI_TABLE_TPM2 ;
typedef int ACPI_TABLE_HEADER ;


 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(ACPI_TABLE_HEADER *VAR_2)
{
 ACPI_TABLE_TPM2 *VAR_3;

 FUNC_1 (VAR_0);
 FUNC_0(VAR_2);
 VAR_3 = (ACPI_TABLE_TPM2 *) VAR_2;
 FUNC_1 ("\t\tControlArea=%jx\n", VAR_3->ControlAddress);
 FUNC_1 ("\t\tStartMethod=%x\n", VAR_3->StartMethod);
 FUNC_1 (VAR_1);
}
