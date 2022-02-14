
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct acpi_pci_root {TYPE_1__* bus; } ;
struct acpi_device {int handle; } ;
struct TYPE_3__ {int bridge; } ;


 int FUNC_0 (int ) ;
 struct acpi_pci_root* FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (struct acpi_pci_root*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct acpi_pci_root*) ;
 int FUNC_6 (struct acpi_device*) ;
 int FUNC_7 (struct acpi_pci_root*) ;
 int FUNC_8 () ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 () ;

__attribute__((used)) static void FUNC_12(struct acpi_device *VAR_0)
{
 struct acpi_pci_root *VAR_1 = FUNC_1(VAR_0);

 FUNC_8();

 FUNC_10(VAR_1->bus);

 FUNC_7(VAR_1);
 FUNC_3(VAR_1->bus->bridge, 0);
 FUNC_6(VAR_0);

 FUNC_9(VAR_1->bus);
 FUNC_0(FUNC_2(VAR_1));

 FUNC_4(VAR_0->handle);

 FUNC_11();

 FUNC_5(VAR_1);
}
