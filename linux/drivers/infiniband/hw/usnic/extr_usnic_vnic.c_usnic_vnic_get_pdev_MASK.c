
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usnic_vnic {int vdev; } ;
struct pci_dev {int dummy; } ;


 struct pci_dev* FUNC_0 (int ) ;

struct pci_dev *FUNC_1(struct usnic_vnic *VAR_0)
{
 return FUNC_0(VAR_0->vdev);
}
