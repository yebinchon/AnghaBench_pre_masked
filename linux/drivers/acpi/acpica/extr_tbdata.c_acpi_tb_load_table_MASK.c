
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_table_header {int dummy; } ;
struct acpi_namespace_node {int dummy; } ;
typedef int acpi_status ;
typedef int acpi_owner_id ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct acpi_table_header**) ;
 int FUNC_5 (int ,struct acpi_namespace_node*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,struct acpi_table_header*) ;
 int FUNC_8 (int ) ;
 int VAR_1 ;

acpi_status
FUNC_9(u32 VAR_2, struct acpi_namespace_node *VAR_3)
{
 struct acpi_table_header *VAR_4;
 acpi_status VAR_5;
 acpi_owner_id VAR_6;

 FUNC_1(VAR_1);





 VAR_5 = FUNC_4(VAR_2, &VAR_4);
 if (FUNC_0(VAR_5)) {
  FUNC_8(VAR_5);
 }

 VAR_5 = FUNC_5(VAR_2, VAR_3);






 VAR_5 = FUNC_6(VAR_2, &VAR_6);
 if (FUNC_2(VAR_5)) {
  FUNC_3(VAR_6);
 }



 FUNC_7(VAR_0, VAR_4);
 FUNC_8(VAR_5);
}
