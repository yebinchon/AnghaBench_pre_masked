
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int Uid; int Gpe; char* Id; int Data; int Control; } ;
typedef int ACPI_TABLE_HEADER ;
typedef TYPE_1__ ACPI_TABLE_ECDT ;


 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void
FUNC_3(ACPI_TABLE_HEADER *VAR_2)
{
 ACPI_TABLE_ECDT *VAR_3;

 FUNC_2(VAR_0);
 FUNC_1(VAR_2);
 VAR_3 = (ACPI_TABLE_ECDT *)VAR_2;
 FUNC_2("\tEC_CONTROL=");
 FUNC_0(&VAR_3->Control);
 FUNC_2("\n\tEC_DATA=");
 FUNC_0(&VAR_3->Data);
 FUNC_2("\n\tUID=%#x, ", VAR_3->Uid);
 FUNC_2("GPE_BIT=%#x\n", VAR_3->Gpe);
 FUNC_2("\tEC_ID=%s\n", VAR_3->Id);
 FUNC_2(VAR_1);
}
