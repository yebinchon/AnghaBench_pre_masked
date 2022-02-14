
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int devfn; struct pci_channel* sysdata; struct pci_bus* bus; } ;
struct pci_channel {int pci_ops; } ;
struct pci_bus {int number; struct pci_bus* parent; int ops; struct pci_channel* sysdata; } ;



__attribute__((used)) static struct pci_dev *FUNC_0(struct pci_channel *VAR_0,
 int VAR_1, int VAR_2, int VAR_3)
{
 static struct pci_dev VAR_4;
 static struct pci_bus VAR_5;

 VAR_4.bus = &VAR_5;
 VAR_4.sysdata = VAR_0;
 VAR_4.devfn = VAR_3;
 VAR_5.number = VAR_2;
 VAR_5.sysdata = VAR_0;
 VAR_5.ops = VAR_0->pci_ops;

 if(VAR_2 != VAR_1)

  VAR_5.parent = &VAR_5;
 else
  VAR_5.parent = ((void*)0);

 return &VAR_4;
}
