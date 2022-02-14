
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpci_dev {int domain; } ;
struct pci_bus {scalar_t__ sysdata; } ;



int FUNC_0(struct pci_bus *VAR_0)
{
 return ((struct zpci_dev *) VAR_0->sysdata)->domain;
}
