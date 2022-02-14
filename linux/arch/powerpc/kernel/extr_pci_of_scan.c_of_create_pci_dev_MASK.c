
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * bus; int parent; int of_node; } ;
struct pci_dev {int devfn; int dma_mask; scalar_t__ irq; int rom_base_reg; int hdr_type; int error_state; int current_state; void* revision; void* class; TYPE_1__* bus; TYPE_2__ dev; int cfg_size; void* subsystem_device; void* subsystem_vendor; void* device; void* vendor; scalar_t__ needs_freset; scalar_t__ multifunction; } ;
struct pci_bus {int bridge; } ;
struct device_node {int dummy; } ;
struct TYPE_3__ {int number; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (TYPE_2__*,char*,int ,int ,int ,int ) ;
 void* FUNC_3 (struct device_node*,char*,int) ;
 int FUNC_4 (struct device_node*) ;
 int FUNC_5 (struct device_node*) ;
 scalar_t__ FUNC_6 (struct device_node*,char*) ;
 int FUNC_7 (struct device_node*,struct pci_dev*) ;
 struct pci_dev* FUNC_8 (struct pci_bus*) ;
 int VAR_6 ;
 int FUNC_9 (struct pci_dev*) ;
 int VAR_7 ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*,struct pci_bus*) ;
 int FUNC_12 (struct pci_bus*) ;
 int FUNC_13 (int ,struct pci_dev*) ;
 int VAR_8 ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (struct pci_dev*) ;
 int FUNC_16 (struct pci_dev*) ;

struct pci_dev *FUNC_17(struct device_node *VAR_9,
     struct pci_bus *VAR_10, int VAR_11)
{
 struct pci_dev *VAR_12;

 VAR_12 = FUNC_8(VAR_10);
 if (!VAR_12)
  return ((void*)0);

 FUNC_14("    create device, devfn: %x, type: %s\n", VAR_11,
   FUNC_5(VAR_9));

 VAR_12->dev.of_node = FUNC_4(VAR_9);
 VAR_12->dev.parent = VAR_10->bridge;
 VAR_12->dev.bus = &VAR_6;
 VAR_12->devfn = VAR_11;
 VAR_12->multifunction = 0;
 VAR_12->needs_freset = 0;
 FUNC_16(VAR_12);

 FUNC_10(VAR_12);
 VAR_12->vendor = FUNC_3(VAR_9, "vendor-id", 0xffff);
 VAR_12->device = FUNC_3(VAR_9, "device-id", 0xffff);
 VAR_12->subsystem_vendor = FUNC_3(VAR_9, "subsystem-vendor-id", 0);
 VAR_12->subsystem_device = FUNC_3(VAR_9, "subsystem-id", 0);

 VAR_12->cfg_size = FUNC_9(VAR_12);

 FUNC_2(&VAR_12->dev, "%04x:%02x:%02x.%d", FUNC_12(VAR_10),
  VAR_12->bus->number, FUNC_1(VAR_11), FUNC_0(VAR_11));
 VAR_12->class = FUNC_3(VAR_9, "class-code", 0);
 VAR_12->revision = FUNC_3(VAR_9, "revision-id", 0);

 FUNC_14("    class: 0x%x\n", VAR_12->class);
 FUNC_14("    revision: 0x%x\n", VAR_12->revision);

 VAR_12->current_state = VAR_5;
 VAR_12->error_state = VAR_7;
 VAR_12->dma_mask = 0xffffffff;


 FUNC_13(VAR_8, VAR_12);

 if (FUNC_6(VAR_9, "pci") || FUNC_6(VAR_9, "pciex")) {

  VAR_12->hdr_type = VAR_0;
  VAR_12->rom_base_reg = VAR_4;
  FUNC_15(VAR_12);
 } else if (FUNC_6(VAR_9, "cardbus")) {
  VAR_12->hdr_type = VAR_1;
 } else {
  VAR_12->hdr_type = VAR_2;
  VAR_12->rom_base_reg = VAR_3;

  VAR_12->irq = 0;
 }

 FUNC_7(VAR_9, VAR_12);

 FUNC_14("    adding to system ...\n");

 FUNC_11(VAR_12, VAR_10);

 return VAR_12;
}
