
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usnic_ib_qp_grp {int grp_id; int kobj; TYPE_1__* vf; } ;
struct usnic_ib_dev {int qpn_kobj; } ;
struct TYPE_2__ {struct usnic_ib_dev* pf; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int ,char*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

void FUNC_3(struct usnic_ib_qp_grp *VAR_1)
{
 struct usnic_ib_dev *VAR_2;
 int VAR_3;

 VAR_2 = VAR_1->vf->pf;

 VAR_3 = FUNC_1(&VAR_1->kobj, &VAR_0,
   FUNC_0(VAR_2->qpn_kobj),
   "%d", VAR_1->grp_id);
 if (VAR_3) {
  FUNC_2(VAR_2->qpn_kobj);
  return;
 }
}
