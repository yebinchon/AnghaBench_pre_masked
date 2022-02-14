
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uintmax_t ;
typedef size_t UINT64 ;
struct TYPE_2__ {size_t LocalityCount; int* Entry; } ;
typedef TYPE_1__ ACPI_TABLE_SLIT ;
typedef int ACPI_TABLE_HEADER ;


 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(ACPI_TABLE_HEADER *VAR_2)
{
 ACPI_TABLE_SLIT *VAR_3;
 UINT64 VAR_4, VAR_5;

 FUNC_1(VAR_0);
 FUNC_0(VAR_2);
 VAR_3 = (ACPI_TABLE_SLIT *)VAR_2;
 FUNC_1("\tLocality Count=%ju\n", (uintmax_t)VAR_3->LocalityCount);
 FUNC_1("\n\t      ");
 for (VAR_4 = 0; VAR_4 < VAR_3->LocalityCount; VAR_4++)
  FUNC_1(" %3ju", (uintmax_t)VAR_4);
 FUNC_1("\n\t     +");
 for (VAR_4 = 0; VAR_4 < VAR_3->LocalityCount; VAR_4++)
  FUNC_1("----");
 FUNC_1("\n");
 for (VAR_4 = 0; VAR_4 < VAR_3->LocalityCount; VAR_4++) {
  FUNC_1("\t %3ju |", (uintmax_t)VAR_4);
  for (VAR_5 = 0; VAR_5 < VAR_3->LocalityCount; VAR_5++)
   FUNC_1(" %3d",
       VAR_3->Entry[VAR_4 * VAR_3->LocalityCount + VAR_5]);
  FUNC_1("\n");
 }
 FUNC_1(VAR_1);
}
