
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpci_dev {int dummy; } ;
struct pci_bus {scalar_t__ sysdata; } ;



__attribute__((used)) static struct zpci_dev *FUNC_0(struct pci_bus *VAR_0)
{
 return (VAR_0 && VAR_0->sysdata) ? (struct zpci_dev *) VAR_0->sysdata : ((void*)0);
}
