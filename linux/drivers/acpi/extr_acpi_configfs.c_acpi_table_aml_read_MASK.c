
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_item {int dummy; } ;
struct acpi_table_header {int length; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct acpi_table_header* FUNC_0 (struct config_item*) ;
 int FUNC_1 (void*,struct acpi_table_header*,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct config_item *VAR_1,
       void *VAR_2, size_t VAR_3)
{
 struct acpi_table_header *VAR_4 = FUNC_0(VAR_1);

 if (!VAR_4)
  return -VAR_0;

 if (VAR_2)
  FUNC_1(VAR_2, VAR_4, VAR_4->length);

 return VAR_4->length;
}
