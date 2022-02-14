
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sta2x11_instance {int bus0; } ;
struct pci_dev {TYPE_1__* bus; } ;
struct TYPE_2__ {int number; } ;


 struct sta2x11_instance* FUNC_0 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_1(struct pci_dev *VAR_0)
{
 struct sta2x11_instance *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1)
  return -1;

 return VAR_0->bus->number - VAR_1->bus0;
}
