
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {struct pci_bus* bus; } ;
struct pci_bus {struct pci_bus* parent; } ;
struct device {int dummy; } ;


 struct pci_dev* FUNC_0 (struct device*) ;

__attribute__((used)) static struct pci_bus *FUNC_1(struct device *VAR_0)
{
 struct pci_dev *VAR_1 = FUNC_0(VAR_0);
 struct pci_bus *VAR_2 = VAR_1->bus;

 while (VAR_2->parent)
  VAR_2 = VAR_2->parent;

 return VAR_2;
}
