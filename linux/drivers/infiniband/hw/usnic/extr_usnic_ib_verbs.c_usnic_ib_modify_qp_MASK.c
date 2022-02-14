
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usnic_ib_qp_grp {TYPE_2__* vf; } ;
struct ib_udata {int dummy; } ;
struct ib_qp_attr {int port_num; int qp_state; } ;
struct ib_qp {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pf; } ;
struct TYPE_3__ {int usdev_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct usnic_ib_qp_grp* FUNC_2 (struct ib_qp*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct usnic_ib_qp_grp*,int ,int *) ;

int FUNC_6(struct ib_qp *VAR_3, struct ib_qp_attr *VAR_4,
    int VAR_5, struct ib_udata *VAR_6)
{
 struct usnic_ib_qp_grp *VAR_7;
 int VAR_8;
 FUNC_3("\n");

 VAR_7 = FUNC_2(VAR_3);

 FUNC_0(&VAR_7->vf->pf->usdev_lock);
 if ((VAR_5 & VAR_1) && VAR_4->port_num != 1) {

  VAR_8 = -VAR_0;
  goto out_unlock;
 }
 if (VAR_5 & VAR_2) {
  VAR_8 = FUNC_5(VAR_7, VAR_4->qp_state, ((void*)0));
 } else {
  FUNC_4("Unhandled request, attr_mask=0x%x\n", VAR_5);
  VAR_8 = -VAR_0;
 }

out_unlock:
 FUNC_1(&VAR_7->vf->pf->usdev_lock);
 return VAR_8;
}
