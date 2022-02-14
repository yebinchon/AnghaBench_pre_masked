
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_pci_device {struct acpi_pci_device* next; } ;


 int FUNC_0 (struct acpi_pci_device*) ;

__attribute__((used)) static void FUNC_1(struct acpi_pci_device *VAR_0)
{
 struct acpi_pci_device *VAR_1;
 struct acpi_pci_device *VAR_2;

 VAR_1 = VAR_0;
 while (VAR_1) {
  VAR_2 = VAR_1;
  VAR_1 = VAR_2->next;
  FUNC_0(VAR_2);
 }
}
