
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int flags; scalar_t__ parent; } ;
struct TYPE_2__ {int * dma_ops; int groups; } ;
struct pci_dev {int no_vf_scan; struct resource* resource; TYPE_1__ dev; scalar_t__ is_physfn; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct pci_dev*) ;

int FUNC_2(struct pci_dev *VAR_3)
{
 struct resource *VAR_4;
 int VAR_5;

 if (VAR_3->is_physfn)
  VAR_3->no_vf_scan = 1;

 VAR_3->dev.groups = VAR_2;
 VAR_3->dev.dma_ops = &VAR_1;
 FUNC_1(VAR_3);

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_4 = &VAR_3->resource[VAR_5];
  if (VAR_4->parent || !VAR_4->flags)
   continue;
  FUNC_0(VAR_3, VAR_5);
 }

 return 0;
}
