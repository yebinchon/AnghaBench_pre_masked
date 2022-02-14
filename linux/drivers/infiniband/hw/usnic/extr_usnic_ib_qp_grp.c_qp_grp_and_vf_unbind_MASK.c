
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usnic_ib_qp_grp {TYPE_1__* vf; } ;
struct usnic_ib_pd {int umem_pd; } ;
struct pci_dev {int dev; } ;
struct TYPE_2__ {scalar_t__ qp_grp_ref_cnt; struct usnic_ib_pd* pd; int vnic; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct usnic_ib_qp_grp *VAR_0)
{
 struct pci_dev *VAR_1;
 struct usnic_ib_pd *VAR_2;

 FUNC_0(&VAR_0->vf->lock);

 VAR_2 = VAR_0->vf->pd;
 VAR_1 = FUNC_2(VAR_0->vf->vnic);
 if (--VAR_0->vf->qp_grp_ref_cnt == 0) {
  VAR_0->vf->pd = ((void*)0);
  FUNC_1(VAR_2->umem_pd, &VAR_1->dev);
 }
 VAR_0->vf = ((void*)0);
}
