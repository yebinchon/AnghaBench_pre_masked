
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usnic_ib_vf {int vnic; int link; struct usnic_ib_dev* pf; } ;
struct usnic_ib_dev {int vf_cnt; int usdev_lock; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (struct usnic_ib_vf*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 struct usnic_ib_vf* FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*,int *) ;
 int VAR_0 ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void FUNC_13(struct pci_dev *VAR_1)
{
 struct usnic_ib_vf *VAR_2 = FUNC_7(VAR_1);
 struct usnic_ib_dev *VAR_3 = VAR_2->pf;

 FUNC_3(&VAR_3->usdev_lock);
 FUNC_2(&VAR_2->link);
 FUNC_4(&VAR_3->usdev_lock);

 FUNC_1(&VAR_3->vf_cnt, VAR_0);
 FUNC_12(VAR_2->vnic);
 FUNC_10(VAR_1, ((void*)0));
 FUNC_5(VAR_1);
 FUNC_9(VAR_1);
 FUNC_6(VAR_1);
 FUNC_0(VAR_2);

 FUNC_11("Removed VF %s\n", FUNC_8(VAR_1));
}
