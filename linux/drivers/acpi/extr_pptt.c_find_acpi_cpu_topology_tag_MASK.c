
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_table_header {int dummy; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,struct acpi_table_header**) ;
 int FUNC_2 () ;
 int FUNC_3 (struct acpi_table_header*) ;
 int FUNC_4 (char*,unsigned int,int,int) ;
 int FUNC_5 (struct acpi_table_header*,unsigned int,int,int) ;

__attribute__((used)) static int FUNC_6(unsigned int VAR_2, int VAR_3, int VAR_4)
{
 struct acpi_table_header *VAR_5;
 acpi_status VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_0, 0, &VAR_5);
 if (FUNC_0(VAR_6)) {
  FUNC_2();
  return -VAR_1;
 }
 VAR_7 = FUNC_5(VAR_5, VAR_2, VAR_3, VAR_4);
 FUNC_4("Topology Setup ACPI CPU %d, level %d ret = %d\n",
   VAR_2, VAR_3, VAR_7);
 FUNC_3(VAR_5);

 return VAR_7;
}
