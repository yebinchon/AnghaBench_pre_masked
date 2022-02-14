
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_bus {TYPE_2__* bridge; struct pci_bus* parent; } ;
struct device_node {int dummy; } ;
struct device {int of_node; } ;
struct TYPE_6__ {struct pci_bus* bus; } ;
struct TYPE_5__ {TYPE_1__* parent; } ;
struct TYPE_4__ {int of_node; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 struct device_node* FUNC_1 (int ) ;
 int FUNC_2 (struct pci_bus*) ;
 TYPE_3__* FUNC_3 (struct device*) ;

__attribute__((used)) static struct device_node *FUNC_4(struct device *VAR_0)
{
 if (FUNC_0(VAR_0)) {
  struct pci_bus *VAR_1 = FUNC_3(VAR_0)->bus;

  while (!FUNC_2(VAR_1))
   VAR_1 = VAR_1->parent;
  return FUNC_1(VAR_1->bridge->parent->of_node);
 }

 return FUNC_1(VAR_0->of_node);
}
