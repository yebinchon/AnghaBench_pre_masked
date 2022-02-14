
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usnic_fwd_dev {TYPE_1__* netdev; int name; int lock; struct pci_dev* pdev; } ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct usnic_fwd_dev* FUNC_1 (int,int ) ;
 TYPE_1__* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;

struct usnic_fwd_dev *FUNC_5(struct pci_dev *VAR_1)
{
 struct usnic_fwd_dev *VAR_2;

 VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->pdev = VAR_1;
 VAR_2->netdev = FUNC_2(VAR_1);
 FUNC_3(&VAR_2->lock);
 FUNC_0(sizeof(VAR_2->name) != sizeof(VAR_2->netdev->name));
 FUNC_4(VAR_2->name, VAR_2->netdev->name);

 return VAR_2;
}
