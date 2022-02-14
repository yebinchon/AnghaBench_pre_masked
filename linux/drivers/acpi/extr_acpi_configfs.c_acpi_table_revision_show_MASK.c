
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_item {int dummy; } ;
struct acpi_table_header {int revision; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct acpi_table_header* FUNC_0 (struct config_item*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct config_item *VAR_1, char *VAR_2)
{
 struct acpi_table_header *VAR_3 = FUNC_0(VAR_1);

 if (!VAR_3)
  return -VAR_0;

 return FUNC_1(VAR_2, "%d\n", VAR_3->revision);
}
