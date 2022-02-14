
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usnic_vnic {int res_lock; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct usnic_vnic* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct usnic_vnic*) ;
 struct usnic_vnic* FUNC_2 (int,int ) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,int ,...) ;
 int FUNC_8 (struct pci_dev*,struct usnic_vnic*) ;
 int FUNC_9 (struct usnic_vnic*) ;

struct usnic_vnic *FUNC_10(struct pci_dev *VAR_3)
{
 struct usnic_vnic *VAR_4;
 int VAR_5 = 0;

 if (!FUNC_3(VAR_3)) {
  FUNC_7("PCI dev %s is disabled\n", FUNC_4(VAR_3));
  return FUNC_0(-VAR_0);
 }

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_2);
 if (!VAR_4)
  return FUNC_0(-VAR_1);

 FUNC_5(&VAR_4->res_lock);

 VAR_5 = FUNC_8(VAR_3, VAR_4);
 if (VAR_5) {
  FUNC_7("Failed to discover %s resources with err %d\n",
    FUNC_4(VAR_3), VAR_5);
  goto out_free_vnic;
 }

 FUNC_6("Allocated vnic for %s\n", FUNC_9(VAR_4));

 return VAR_4;

out_free_vnic:
 FUNC_1(VAR_4);

 return FUNC_0(VAR_5);
}
