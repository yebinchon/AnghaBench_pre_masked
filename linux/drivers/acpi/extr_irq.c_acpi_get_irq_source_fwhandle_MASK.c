
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwnode_handle {int dummy; } ;
struct acpi_resource_source {int string_ptr; int string_length; } ;
struct acpi_device {struct fwnode_handle fwnode; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 struct acpi_device* FUNC_2 (int ) ;
 int FUNC_3 (struct acpi_device*) ;
 int FUNC_4 (int *,int ,int *) ;
 struct fwnode_handle* VAR_0 ;

__attribute__((used)) static struct fwnode_handle *
FUNC_5(const struct acpi_resource_source *VAR_1)
{
 struct fwnode_handle *VAR_2;
 struct acpi_device *VAR_3;
 acpi_handle VAR_4;
 acpi_status VAR_5;

 if (!VAR_1->string_length)
  return VAR_0;

 VAR_5 = FUNC_4(((void*)0), VAR_1->string_ptr, &VAR_4);
 if (FUNC_1(FUNC_0(VAR_5)))
  return ((void*)0);

 VAR_3 = FUNC_2(VAR_4);
 if (FUNC_1(!VAR_3))
  return ((void*)0);

 VAR_2 = &VAR_3->fwnode;
 FUNC_3(VAR_3);
 return VAR_2;
}
