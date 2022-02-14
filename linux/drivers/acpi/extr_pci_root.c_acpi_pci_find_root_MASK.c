
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_pci_root {int dummy; } ;
struct acpi_device {int dummy; } ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ,struct acpi_device**) ;
 struct acpi_pci_root* FUNC_1 (struct acpi_device*) ;
 scalar_t__ FUNC_2 (struct acpi_device*,int ) ;
 int VAR_0 ;

struct acpi_pci_root *FUNC_3(acpi_handle VAR_1)
{
 struct acpi_pci_root *VAR_2;
 struct acpi_device *VAR_3;

 if (FUNC_0(VAR_1, &VAR_3) ||
     FUNC_2(VAR_3, VAR_0))
  return ((void*)0);

 VAR_2 = FUNC_1(VAR_3);

 return VAR_2;
}
