
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_table_header {int dummy; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct acpi_table_header*,int ) ;
 int FUNC_2 (int ,int ,struct acpi_table_header**) ;
 int FUNC_3 () ;
 int FUNC_4 (struct acpi_table_header*) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (char*,int) ;

int FUNC_7(unsigned int VAR_1)
{
 u32 VAR_2;
 struct acpi_table_header *VAR_3;
 int VAR_4 = 0;
 acpi_status VAR_5;

 FUNC_6("Cache Setup find last level CPU=%d\n", VAR_1);

 VAR_2 = FUNC_5(VAR_1);
 VAR_5 = FUNC_2(VAR_0, 0, &VAR_3);
 if (FUNC_0(VAR_5)) {
  FUNC_3();
 } else {
  VAR_4 = FUNC_1(VAR_3, VAR_2);
  FUNC_4(VAR_3);
 }
 FUNC_6("Cache Setup find last level level=%d\n", VAR_4);

 return VAR_4;
}
