
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int node; struct acpi_device* companion; int segment; } ;
struct pci_root_info {TYPE_2__ controller; int common; int io_resources; } ;
struct pci_bus {int dummy; } ;
struct TYPE_3__ {scalar_t__ start; } ;
struct acpi_pci_root {int segment; TYPE_1__ secondary; struct acpi_device* device; } ;
struct acpi_device {int handle; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct pci_bus* FUNC_2 (struct acpi_pci_root*,int *,int *,TYPE_2__*) ;
 int FUNC_3 (int *,char*,int ,int) ;
 struct pci_root_info* FUNC_4 (int,int ) ;
 int VAR_1 ;

struct pci_bus *FUNC_5(struct acpi_pci_root *VAR_2)
{
 struct acpi_device *VAR_3 = VAR_2->device;
 struct pci_root_info *VAR_4;

 VAR_4 = FUNC_4(sizeof(*VAR_4), VAR_0);
 if (!VAR_4) {
  FUNC_3(&VAR_3->dev,
   "pci_bus %04x:%02x: ignored (out of memory)\n",
   VAR_2->segment, (int)VAR_2->secondary.start);
  return ((void*)0);
 }

 VAR_4->controller.segment = VAR_2->segment;
 VAR_4->controller.companion = VAR_3;
 VAR_4->controller.node = FUNC_1(VAR_3->handle);
 FUNC_0(&VAR_4->io_resources);
 return FUNC_2(VAR_2, &VAR_1,
        &VAR_4->common, &VAR_4->controller);
}
