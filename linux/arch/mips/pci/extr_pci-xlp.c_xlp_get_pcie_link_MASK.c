
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {struct pci_bus* bus; } ;
struct pci_bus {scalar_t__ number; struct pci_dev* self; struct pci_bus* parent; } ;


 scalar_t__ FUNC_0 () ;

struct pci_dev *FUNC_1(const struct pci_dev *VAR_0)
{
 struct pci_bus *VAR_1, *VAR_2;

 VAR_1 = VAR_0->bus;

 if (FUNC_0()) {

  for (VAR_2 = VAR_1->parent; VAR_2 && VAR_2->parent && VAR_2->parent->number != 0;
    VAR_2 = VAR_2->parent)
   VAR_1 = VAR_2;
  return (VAR_2 && VAR_2->parent) ? VAR_1->self : ((void*)0);
 } else {

  for (VAR_2 = VAR_1->parent; VAR_2 && VAR_2->number != 0; VAR_2 = VAR_2->parent)
   VAR_1 = VAR_2;

  return VAR_2 ? VAR_1->self : ((void*)0);
 }
}
