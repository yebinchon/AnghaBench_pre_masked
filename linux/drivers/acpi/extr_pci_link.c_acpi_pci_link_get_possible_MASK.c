
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int possible_count; } ;
struct acpi_pci_link {TYPE_2__ irq; TYPE_1__* device; } ;
typedef int acpi_status ;
struct TYPE_3__ {int handle; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;
 int VAR_2 ;
 int FUNC_3 (int ,int ,int ,struct acpi_pci_link*) ;

__attribute__((used)) static int FUNC_4(struct acpi_pci_link *VAR_3)
{
 acpi_status VAR_4;

 VAR_4 = FUNC_3(VAR_3->device->handle, VAR_1,
         VAR_2, VAR_3);
 if (FUNC_1(VAR_4)) {
  FUNC_2(VAR_3->device->handle, "_PRS not present or invalid");
  return 0;
 }

 FUNC_0((VAR_0,
     "Found %d possible IRQs\n",
     VAR_3->irq.possible_count));

 return 0;
}
