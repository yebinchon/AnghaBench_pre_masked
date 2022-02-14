
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_namespace_node {int dummy; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,struct acpi_namespace_node*) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;

acpi_status
FUNC_4(u32 VAR_3, struct acpi_namespace_node *VAR_4)
{
 acpi_status VAR_5;

 FUNC_1(VAR_2);
 FUNC_0((VAR_0,
         "%s: **** Start table execution pass\n",
         VAR_1));

 VAR_5 = FUNC_2(VAR_3, VAR_4);

 FUNC_3(VAR_5);
}
