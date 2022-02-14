
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_table_wdat {int dummy; } ;
struct acpi_table_header {int dummy; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ,struct acpi_table_header**) ;
 scalar_t__ FUNC_2 (struct acpi_table_wdat const*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static const struct acpi_table_wdat *FUNC_4(void)
{
 const struct acpi_table_wdat *VAR_2 = ((void*)0);
 acpi_status VAR_3;

 if (VAR_1)
  return ((void*)0);

 VAR_3 = FUNC_1(VAR_0, 0,
    (struct acpi_table_header **)&VAR_2);
 if (FUNC_0(VAR_3)) {

  return ((void*)0);
 }

 if (FUNC_2(VAR_2)) {
  FUNC_3("Skipping WDAT on this system because it uses RTC SRAM\n");
  return ((void*)0);
 }

 return VAR_2;
}
