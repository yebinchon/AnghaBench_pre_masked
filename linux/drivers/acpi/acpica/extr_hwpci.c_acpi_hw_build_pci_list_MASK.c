
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_pci_device {scalar_t__ device; struct acpi_pci_device* next; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_handle ;


 struct acpi_pci_device* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__,scalar_t__*) ;
 int FUNC_3 (struct acpi_pci_device*) ;

__attribute__((used)) static acpi_status
FUNC_4(acpi_handle VAR_2,
         acpi_handle VAR_3,
         struct acpi_pci_device **VAR_4)
{
 acpi_handle VAR_5;
 acpi_handle VAR_6;
 acpi_status VAR_7;
 struct acpi_pci_device *VAR_8;






 *VAR_4 = ((void*)0);
 VAR_5 = VAR_3;
 while (1) {
  VAR_7 = FUNC_2(VAR_5, &VAR_6);
  if (FUNC_1(VAR_7)) {



   FUNC_3(*VAR_4);
   return (VAR_7);
  }



  if (VAR_6 == VAR_2) {
   return (VAR_1);
  }

  VAR_8 = FUNC_0(sizeof(struct acpi_pci_device));
  if (!VAR_8) {



   FUNC_3(*VAR_4);
   return (VAR_0);
  }



  VAR_8->next = *VAR_4;
  VAR_8->device = VAR_6;
  *VAR_4 = VAR_8;

  VAR_5 = VAR_6;
 }
}
