
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct attribute {int dummy; } ;
struct acpi_data_node_attr {int (* show ) (struct acpi_data_node*,char*) ;} ;
struct acpi_data_node {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct acpi_data_node*,char*) ;
 struct acpi_data_node_attr* FUNC_1 (struct attribute*) ;
 struct acpi_data_node* FUNC_2 (struct kobject*) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_1,
     struct attribute *VAR_2, char *VAR_3)
{
 struct acpi_data_node *VAR_4 = FUNC_2(VAR_1);
 struct acpi_data_node_attr *VAR_5 = FUNC_1(VAR_2);

 return VAR_5->show ? VAR_5->show(VAR_4, VAR_3) : -VAR_0;
}
