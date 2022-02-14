
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwnode_handle {int dummy; } ;
struct acpi_device_data {int dummy; } ;
struct acpi_device {struct acpi_device_data const data; } ;
struct acpi_data_node {struct acpi_device_data const data; } ;


 scalar_t__ FUNC_0 (struct fwnode_handle const*) ;
 scalar_t__ FUNC_1 (struct fwnode_handle const*) ;
 struct acpi_data_node* FUNC_2 (struct fwnode_handle const*) ;
 struct acpi_device* FUNC_3 (struct fwnode_handle const*) ;

__attribute__((used)) static const struct acpi_device_data *
FUNC_4(const struct fwnode_handle *VAR_0)
{
 if (FUNC_1(VAR_0)) {
  const struct acpi_device *VAR_1 = FUNC_3(VAR_0);
  return &VAR_1->data;
 } else if (FUNC_0(VAR_0)) {
  const struct acpi_data_node *VAR_2 = FUNC_2(VAR_0);
  return &VAR_2->data;
 }
 return ((void*)0);
}
