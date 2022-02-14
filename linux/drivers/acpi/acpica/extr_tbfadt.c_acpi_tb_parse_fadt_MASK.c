
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct acpi_table_header {int dummy; } ;
struct acpi_table_desc {int length; } ;
typedef int acpi_status ;
typedef int acpi_physical_address ;
struct TYPE_4__ {scalar_t__ Xfacs; scalar_t__ facs; scalar_t__ Xdsdt; } ;
struct TYPE_3__ {struct acpi_table_desc* tables; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct acpi_table_header*,int ) ;
 int FUNC_2 (struct acpi_table_desc*,struct acpi_table_header**) ;
 int FUNC_3 (int ,int ,int ,int ,int *) ;
 int FUNC_4 (struct acpi_table_desc*) ;
 int FUNC_5 (struct acpi_table_header*,int ) ;

void FUNC_6(void)
{
 u32 VAR_10;
 struct acpi_table_header *VAR_11;
 struct acpi_table_desc *VAR_12;
 acpi_status VAR_13;
 VAR_12 = &VAR_8.tables[VAR_6];
 VAR_13 = FUNC_2(VAR_12, &VAR_11);
 if (FUNC_0(VAR_13)) {
  return;
 }
 VAR_10 = VAR_12->length;





 (void)FUNC_5(VAR_11, VAR_10);



 FUNC_1(VAR_11, VAR_10);



 FUNC_4(VAR_12);



 FUNC_3((acpi_physical_address)VAR_3.
           Xdsdt,
           VAR_0,
           VAR_1, VAR_2, &VAR_4);



 if (!VAR_7) {
  if (VAR_3.facs) {
   FUNC_3((acpi_physical_address)
             VAR_3.facs,
             VAR_0,
             VAR_1, VAR_2,
             &VAR_5);
  }
  if (VAR_3.Xfacs) {
   FUNC_3((acpi_physical_address)
             VAR_3.Xfacs,
             VAR_0,
             VAR_1, VAR_2,
             &VAR_9);
  }
 }
}
