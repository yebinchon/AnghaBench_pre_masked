
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct acpi_table_header {scalar_t__ oem_revision; int oem_table_id; int oem_id; } ;
typedef int acpi_status ;
struct TYPE_3__ {scalar_t__ oem_revision; int oem_table_id; int oem_id; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,struct acpi_table_header**) ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,int ) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static void FUNC_4(void)
{
 struct acpi_table_header *VAR_6;
 acpi_status VAR_7 = VAR_3;
 int VAR_8;

 VAR_7 = FUNC_2(VAR_2, 0, &VAR_6);
 if (FUNC_0(VAR_7) || !VAR_6)
  return;

 for (VAR_8 = 0; VAR_8 < FUNC_1(VAR_5); VAR_8++) {
  if (!FUNC_3(VAR_5[VAR_8].oem_id, VAR_6->oem_id, VAR_0) &&
      !FUNC_3(VAR_5[VAR_8].oem_table_id, VAR_6->oem_table_id, VAR_1) &&
      VAR_5[VAR_8].oem_revision == VAR_6->oem_revision)
   VAR_4 = 1;
 }
}
