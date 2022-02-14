
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int subsystem_device; int subsystem_vendor; int dev; TYPE_1__* driver; } ;
struct TYPE_4__ {int type; int vendor; } ;
struct bcma_bus {int host_is_pcie2; int mmio; struct pci_dev* host_pci; TYPE_2__ boardinfo; int * ops; int hosttype; int * dev; } ;
struct TYPE_3__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bcma_bus*) ;
 int FUNC_1 (struct bcma_bus*) ;
 int FUNC_2 (struct bcma_bus*,char*) ;
 scalar_t__ FUNC_3 (struct bcma_bus*,int ) ;
 int VAR_5 ;
 int FUNC_4 (struct bcma_bus*) ;
 int FUNC_5 (struct bcma_bus*) ;
 char* FUNC_6 (int *) ;
 int FUNC_7 (struct bcma_bus*) ;
 struct bcma_bus* FUNC_8 (int,int ) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*,int ,unsigned long) ;
 int FUNC_12 (struct pci_dev*,int ) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (struct pci_dev*,int,int*) ;
 int FUNC_15 (struct pci_dev*) ;
 int FUNC_16 (struct pci_dev*,char const*) ;
 int FUNC_17 (struct pci_dev*,struct bcma_bus*) ;
 int FUNC_18 (struct pci_dev*) ;
 int FUNC_19 (struct pci_dev*,int,int) ;

__attribute__((used)) static int FUNC_20(struct pci_dev *VAR_6,
          const struct pci_device_id *VAR_7)
{
 struct bcma_bus *VAR_8;
 int VAR_9 = -VAR_2;
 const char *VAR_10;
 u32 VAR_11;


 VAR_8 = FUNC_8(sizeof(*VAR_8), VAR_4);
 if (!VAR_8)
  goto out;


 VAR_9 = FUNC_10(VAR_6);
 if (VAR_9)
  goto err_kfree_bus;

 VAR_10 = FUNC_6(&VAR_6->dev);
 if (VAR_6->driver && VAR_6->driver->name)
  VAR_10 = VAR_6->driver->name;
 VAR_9 = FUNC_16(VAR_6, VAR_10);
 if (VAR_9)
  goto err_pci_disable;
 FUNC_18(VAR_6);



 FUNC_14(VAR_6, 0x40, &VAR_11);
 if ((VAR_11 & 0x0000ff00) != 0)
  FUNC_19(VAR_6, 0x40, VAR_11 & 0xffff00ff);


 if (!FUNC_13(VAR_6)) {
  FUNC_2(VAR_8, "PCI card detected, they are not supported.\n");
  VAR_9 = -VAR_3;
  goto err_pci_release_regions;
 }

 VAR_8->dev = &VAR_6->dev;


 VAR_9 = -VAR_2;
 VAR_8->mmio = FUNC_11(VAR_6, 0, ~0UL);
 if (!VAR_8->mmio)
  goto err_pci_release_regions;


 VAR_8->host_pci = VAR_6;
 VAR_8->hosttype = VAR_1;
 VAR_8->ops = &VAR_5;

 VAR_8->boardinfo.vendor = VAR_8->host_pci->subsystem_vendor;
 VAR_8->boardinfo.type = VAR_8->host_pci->subsystem_device;


 FUNC_4(VAR_8);


 VAR_9 = FUNC_1(VAR_8);
 if (VAR_9)
  goto err_pci_unmap_mmio;

 if (FUNC_3(VAR_8, VAR_0))
  VAR_8->host_is_pcie2 = 1;


 VAR_9 = FUNC_0(VAR_8);
 if (VAR_9)
  goto err_unregister_cores;

 FUNC_17(VAR_6, VAR_8);

out:
 return VAR_9;

err_unregister_cores:
 FUNC_5(VAR_8);
err_pci_unmap_mmio:
 FUNC_12(VAR_6, VAR_8->mmio);
err_pci_release_regions:
 FUNC_15(VAR_6);
err_pci_disable:
 FUNC_9(VAR_6);
err_kfree_bus:
 FUNC_7(VAR_8);
 return VAR_9;
}
