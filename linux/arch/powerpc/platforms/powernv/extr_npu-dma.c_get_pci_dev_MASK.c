
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dn {int devfn; int busno; TYPE_1__* phb; } ;
struct pci_dev {int dummy; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {int bus; } ;


 struct pci_dn* FUNC_0 (struct device_node*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (int ) ;
 struct pci_dev* FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static struct pci_dev *FUNC_4(struct device_node *VAR_0)
{
 struct pci_dn *VAR_1 = FUNC_0(VAR_0);
 struct pci_dev *VAR_2;

 VAR_2 = FUNC_3(FUNC_2(VAR_1->phb->bus),
        VAR_1->busno, VAR_1->devfn);
 if (VAR_2)
  FUNC_1(VAR_2);

 return VAR_2;
}
