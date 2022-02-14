
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usnic_ib_qp_grp {int kobj; TYPE_1__* vf; } ;
struct usnic_ib_dev {int * qpn_kobj; } ;
struct TYPE_2__ {struct usnic_ib_dev* pf; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct usnic_ib_qp_grp *VAR_0)
{
 struct usnic_ib_dev *VAR_1;

 VAR_1 = VAR_0->vf->pf;

 FUNC_0(&VAR_0->kobj);
 FUNC_0(VAR_1->qpn_kobj);
}
