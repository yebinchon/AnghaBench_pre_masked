
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; } ;
struct pci_dev {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 struct pci_dev* FUNC_1 (struct device_node*) ;
 int FUNC_2 (struct device_node*) ;
 struct device_node* FUNC_3 (int ,char*,int ) ;

struct pci_dev *FUNC_4(struct pci_dev *VAR_0)
{
 struct device_node *VAR_1;
 struct pci_dev *VAR_2;

 if (FUNC_0(!VAR_0))
  return ((void*)0);

 if (FUNC_0(!VAR_0->dev.of_node))
  return ((void*)0);


 VAR_1 = FUNC_3(VAR_0->dev.of_node, "ibm,gpu", 0);
 if (!VAR_1)
  return ((void*)0);

 VAR_2 = FUNC_1(VAR_1);
 FUNC_2(VAR_1);

 return VAR_2;
}
