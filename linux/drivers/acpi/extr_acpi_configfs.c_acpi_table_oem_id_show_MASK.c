
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_item {int dummy; } ;
struct acpi_table_header {int oem_id; } ;
typedef int ssize_t ;


 char* VAR_0 ;
 int VAR_1 ;
 struct acpi_table_header* FUNC_0 (struct config_item*) ;
 int FUNC_1 (char*,char*,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct config_item *VAR_2, char *VAR_3)
{
 struct acpi_table_header *VAR_4 = FUNC_0(VAR_2);

 if (!VAR_4)
  return -VAR_1;

 return FUNC_1(VAR_3, "%.*s\n", VAR_0, VAR_4->oem_id);
}
