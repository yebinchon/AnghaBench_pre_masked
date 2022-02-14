
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usnic_ib_vf {struct usnic_ib_dev* vnic; int link; int lock; struct usnic_ib_dev* pf; } ;
struct TYPE_2__ {int dev; } ;
struct usnic_ib_dev {TYPE_1__ ib_dev; int usdev_lock; int * vf_res_cnt; int vf_dev_list; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dummy; } ;
typedef enum usnic_vnic_res_type { ____Placeholder_usnic_vnic_res_type } usnic_vnic_res_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct usnic_ib_dev*) ;
 int FUNC_1 (struct usnic_ib_dev*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct usnic_ib_vf*) ;
 struct usnic_ib_vf* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (struct pci_dev*,int ) ;
 int FUNC_14 (struct pci_dev*,struct usnic_ib_vf*) ;
 int FUNC_15 (struct pci_dev*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (char*,int ,int) ;
 struct usnic_ib_dev* FUNC_18 (struct usnic_ib_dev*) ;
 int FUNC_19 (struct usnic_ib_vf*) ;
 int FUNC_20 (char*,int ,int ) ;
 struct usnic_ib_dev* FUNC_21 (struct pci_dev*) ;
 int FUNC_22 (struct usnic_ib_dev*) ;
 int FUNC_23 (struct usnic_ib_dev*,int) ;

__attribute__((used)) static int FUNC_24(struct pci_dev *VAR_6,
    const struct pci_device_id *VAR_7)
{
 int VAR_8;
 struct usnic_ib_dev *VAR_9;
 struct usnic_ib_vf *VAR_10;
 enum usnic_vnic_res_type VAR_11;

 VAR_10 = FUNC_4(sizeof(*VAR_10), VAR_3);
 if (!VAR_10)
  return -VAR_2;

 VAR_8 = FUNC_10(VAR_6);
 if (VAR_8) {
  FUNC_17("Failed to enable %s with err %d\n",
    FUNC_11(VAR_6), VAR_8);
  goto out_clean_vf;
 }

 VAR_8 = FUNC_13(VAR_6, VAR_0);
 if (VAR_8) {
  FUNC_17("Failed to request region for %s with err %d\n",
    FUNC_11(VAR_6), VAR_8);
  goto out_disable_device;
 }

 FUNC_15(VAR_6);
 FUNC_14(VAR_6, VAR_10);

 VAR_10->vnic = FUNC_21(VAR_6);
 if (FUNC_0(VAR_10->vnic)) {
  VAR_8 = VAR_10->vnic ? FUNC_1(VAR_10->vnic) : -VAR_2;
  FUNC_17("Failed to alloc vnic for %s with err %d\n",
    FUNC_11(VAR_6), VAR_8);
  goto out_release_regions;
 }

 VAR_9 = FUNC_18(VAR_10->vnic);
 if (FUNC_0(VAR_9)) {
  FUNC_17("Failed to discover pf of vnic %s with err%ld\n",
    FUNC_11(VAR_6), FUNC_1(VAR_9));
  VAR_8 = VAR_9 ? FUNC_1(VAR_9) : -VAR_1;
  goto out_clean_vnic;
 }

 VAR_10->pf = VAR_9;
 FUNC_16(&VAR_10->lock);
 FUNC_6(&VAR_9->usdev_lock);
 FUNC_5(&VAR_10->link, &VAR_9->vf_dev_list);




 for (VAR_11 = VAR_4+1;
   VAR_11 < VAR_5;
   VAR_11++) {
  VAR_9->vf_res_cnt[VAR_11] = FUNC_23(VAR_10->vnic,
        VAR_11);
 }

 FUNC_7(&VAR_9->usdev_lock);

 FUNC_20("Registering usnic VF %s into PF %s\n", FUNC_11(VAR_6),
     FUNC_2(&VAR_9->ib_dev.dev));
 FUNC_19(VAR_10);
 return 0;

out_clean_vnic:
 FUNC_22(VAR_10->vnic);
out_release_regions:
 FUNC_14(VAR_6, ((void*)0));
 FUNC_8(VAR_6);
 FUNC_12(VAR_6);
out_disable_device:
 FUNC_9(VAR_6);
out_clean_vf:
 FUNC_3(VAR_10);
 return VAR_8;
}
