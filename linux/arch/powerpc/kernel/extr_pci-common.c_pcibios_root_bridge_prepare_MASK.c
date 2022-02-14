
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_host_bridge {int dummy; } ;
struct TYPE_2__ {int (* pcibios_root_bridge_prepare ) (struct pci_host_bridge*) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (struct pci_host_bridge*) ;

int FUNC_1(struct pci_host_bridge *VAR_1)
{
 if (VAR_0.pcibios_root_bridge_prepare)
  return VAR_0.pcibios_root_bridge_prepare(VAR_1);

 return 0;
}
