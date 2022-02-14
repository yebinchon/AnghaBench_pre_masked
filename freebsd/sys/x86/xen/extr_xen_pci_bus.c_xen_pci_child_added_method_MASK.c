
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct physdev_pci_device_add {int devfn; int bus; int seg; } ;
struct TYPE_2__ {int slot; int func; int bus; int domain; } ;
struct pci_devinfo {TYPE_1__ cfg; } ;
typedef int device_t ;
typedef int add_pci ;


 int FUNC_0 (int ,struct physdev_pci_device_add*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int FUNC_2 (struct physdev_pci_device_add*,int) ;
 struct pci_devinfo* FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,int,int) ;

void
FUNC_5(device_t VAR_1, device_t VAR_2)
{
 struct pci_devinfo *VAR_3;
 struct physdev_pci_device_add VAR_4;
 int VAR_5;

 VAR_3 = FUNC_3(VAR_2);
 FUNC_1((VAR_3 != ((void*)0)),
     ("xen_pci_add_child_method called with NULL dinfo"));

 FUNC_2(&VAR_4, sizeof(VAR_4));
 VAR_4.seg = VAR_3->cfg.domain;
 VAR_4.bus = VAR_3->cfg.bus;
 VAR_4.devfn = (VAR_3->cfg.slot << 3) | VAR_3->cfg.func;
 VAR_5 = FUNC_0(VAR_0, &VAR_4);
 if (VAR_5)
  FUNC_4("unable to add device bus %u devfn %u error: %d\n",
      VAR_4.bus, VAR_4.devfn, VAR_5);
}
