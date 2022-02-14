
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usnic_ib_vf {scalar_t__ qp_grp_ref_cnt; struct usnic_ib_pd* pd; int vnic; int lock; } ;
struct usnic_ib_qp_grp {struct usnic_ib_vf* vf; } ;
struct usnic_ib_pd {int umem_pd; } ;
struct pci_dev {int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ,int *) ;
 struct pci_dev* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct usnic_ib_vf *VAR_0,
    struct usnic_ib_pd *VAR_1,
    struct usnic_ib_qp_grp *VAR_2)
{
 int VAR_3;
 struct pci_dev *VAR_4;

 FUNC_1(&VAR_0->lock);

 VAR_4 = FUNC_5(VAR_0->vnic);
 if (VAR_0->qp_grp_ref_cnt == 0) {
  VAR_3 = FUNC_4(VAR_1->umem_pd, &VAR_4->dev);
  if (VAR_3) {
   FUNC_3("Failed to attach %s to domain\n",
     FUNC_2(VAR_4));
   return VAR_3;
  }
  VAR_0->pd = VAR_1;
 }
 VAR_0->qp_grp_ref_cnt++;

 FUNC_0(VAR_0->pd != VAR_1);
 VAR_2->vf = VAR_0;

 return 0;
}
