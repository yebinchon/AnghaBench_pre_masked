
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int start; int flags; } ;
struct pci_dev {struct pci_channel* sysdata; } ;
struct pci_channel {TYPE_1__* resources; } ;
typedef int resource_size_t ;
struct TYPE_2__ {int start; } ;


 int VAR_0 ;
 int VAR_1 ;

resource_size_t FUNC_0(void *VAR_2, const struct resource *VAR_3,
    resource_size_t VAR_4, resource_size_t VAR_5)
{
 struct pci_dev *VAR_6 = VAR_2;
 struct pci_channel *VAR_7 = VAR_6->sysdata;
 resource_size_t VAR_8 = VAR_3->start;

 if (VAR_3->flags & VAR_0) {
  if (VAR_8 < VAR_1 + VAR_7->resources[0].start)
   VAR_8 = VAR_1 + VAR_7->resources[0].start;




  if (VAR_8 & 0x300)
   VAR_8 = (VAR_8 + 0x3ff) & ~0x3ff;
 }

 return VAR_8;
}
