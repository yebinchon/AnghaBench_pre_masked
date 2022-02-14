
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_table_header {int dummy; } ;
struct acpi_table_dmar {int flags; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,struct acpi_table_header**) ;
 int FUNC_2 (struct acpi_table_header*) ;

bool FUNC_3(void)
{
 struct acpi_table_dmar *VAR_2;
 acpi_status VAR_3;
 bool VAR_4;

 VAR_3 = FUNC_1(VAR_0, 0,
    (struct acpi_table_header **)&VAR_2);
 if (FUNC_0(VAR_3))
  return 0;

 VAR_4 = !!(VAR_2->flags & VAR_1);
 FUNC_2((struct acpi_table_header *)VAR_2);

 return VAR_4;
}
