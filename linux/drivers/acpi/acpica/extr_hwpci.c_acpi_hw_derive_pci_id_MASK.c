
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_pci_id {int dummy; } ;
struct acpi_pci_device {int dummy; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,struct acpi_pci_device**) ;
 int FUNC_3 (struct acpi_pci_device*) ;
 int FUNC_4 (struct acpi_pci_id*,struct acpi_pci_device*) ;
 int VAR_1 ;
 int FUNC_5 (int ) ;

acpi_status
FUNC_6(struct acpi_pci_id *VAR_2,
        acpi_handle VAR_3, acpi_handle VAR_4)
{
 acpi_status VAR_5;
 struct acpi_pci_device *VAR_6;

 FUNC_0(VAR_1);

 if (!VAR_2) {
  FUNC_5(VAR_0);
 }



 VAR_5 =
     FUNC_2(VAR_3, VAR_4, &VAR_6);
 if (FUNC_1(VAR_5)) {



  VAR_5 = FUNC_4(VAR_2, VAR_6);



  FUNC_3(VAR_6);
 }

 FUNC_5(VAR_5);
}
