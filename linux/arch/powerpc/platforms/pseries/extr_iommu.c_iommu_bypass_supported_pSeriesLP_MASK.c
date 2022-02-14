
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_4__ {int dma_offset; } ;
struct TYPE_5__ {TYPE_1__ archdata; } ;
struct pci_dev {TYPE_2__ dev; } ;
struct device_node {struct device_node* parent; } ;
typedef int __be32 ;
struct TYPE_6__ {int table_group; } ;


 scalar_t__ FUNC_0 (int) ;
 TYPE_3__* FUNC_1 (struct device_node*) ;
 int FUNC_2 (TYPE_2__*,char*,struct device_node*) ;
 int FUNC_3 (struct pci_dev*,struct device_node*) ;
 int * FUNC_4 (struct device_node*,char*,int *) ;
 struct device_node* FUNC_5 (struct pci_dev*) ;

__attribute__((used)) static bool FUNC_6(struct pci_dev *VAR_0, u64 VAR_1)
{
 struct device_node *VAR_2 = FUNC_5(VAR_0), *VAR_3;
 const __be32 *VAR_4 = ((void*)0);


 if (VAR_1 < FUNC_0(64))
  return 0;

 FUNC_2(&VAR_0->dev, "node is %pOF\n", VAR_2);







 for (VAR_3 = VAR_2; VAR_3 && FUNC_1(VAR_3) && !FUNC_1(VAR_3)->table_group;
   VAR_3 = VAR_3->parent) {
  VAR_4 = FUNC_4(VAR_3, "ibm,dma-window", ((void*)0));
  if (VAR_4)
   break;
 }

 if (VAR_3 && FUNC_1(VAR_3)) {
  VAR_0->dev.archdata.dma_offset = FUNC_3(VAR_0, VAR_3);
  if (VAR_0->dev.archdata.dma_offset)
   return 1;
 }

 return 0;
}
