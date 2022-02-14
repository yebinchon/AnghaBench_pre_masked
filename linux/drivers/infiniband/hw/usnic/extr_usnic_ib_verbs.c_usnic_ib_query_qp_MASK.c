
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usnic_ib_vf {TYPE_2__* pf; } ;
struct TYPE_3__ {int qp_type; } ;
struct usnic_ib_qp_grp {TYPE_1__ ibqp; int state; struct usnic_ib_vf* vf; } ;
struct ib_qp_init_attr {int qkey; int cur_qp_state; int qp_state; } ;
struct ib_qp_attr {int qkey; int cur_qp_state; int qp_state; } ;
struct ib_qp {int dummy; } ;
struct TYPE_4__ {int usdev_lock; } ;


 int VAR_0 ;

 int FUNC_0 (struct ib_qp_init_attr*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct usnic_ib_qp_grp* FUNC_3 (struct ib_qp*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int) ;

int FUNC_6(struct ib_qp *VAR_1, struct ib_qp_attr *VAR_2,
    int VAR_3,
    struct ib_qp_init_attr *VAR_4)
{
 struct usnic_ib_qp_grp *VAR_5;
 struct usnic_ib_vf *VAR_6;
 int VAR_7;

 FUNC_4("\n");

 FUNC_0(VAR_2, 0, sizeof(*VAR_2));
 FUNC_0(VAR_4, 0, sizeof(*VAR_4));

 VAR_5 = FUNC_3(VAR_1);
 VAR_6 = VAR_5->vf;
 FUNC_1(&VAR_6->pf->usdev_lock);
 FUNC_4("\n");
 VAR_2->qp_state = VAR_5->state;
 VAR_2->cur_qp_state = VAR_5->state;

 switch (VAR_5->ibqp.qp_type) {
 case 128:
  VAR_2->qkey = 0;
  break;
 default:
  FUNC_5("Unexpected qp_type %d\n", VAR_5->ibqp.qp_type);
  VAR_7 = -VAR_0;
  goto err_out;
 }

 FUNC_2(&VAR_6->pf->usdev_lock);
 return 0;

err_out:
 FUNC_2(&VAR_6->pf->usdev_lock);
 return VAR_7;
}
