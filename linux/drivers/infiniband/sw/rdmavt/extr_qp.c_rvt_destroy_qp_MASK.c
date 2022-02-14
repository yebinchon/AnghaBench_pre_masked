
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int kwq; } ;
struct TYPE_7__ {scalar_t__ qp_type; int qp_num; } ;
struct rvt_qp {int s_wq; int alt_ah_attr; int remote_ah_attr; struct rvt_qp* s_ack_queue; TYPE_4__ r_rq; TYPE_3__* ip; TYPE_2__ ibqp; int refcount; int wait; int r_lock; int s_hlock; int s_lock; } ;
struct TYPE_10__ {int (* qp_priv_free ) (struct rvt_dev_info*,struct rvt_qp*) ;} ;
struct rvt_dev_info {int n_rc_qps; int busy_jiffies; TYPE_5__ driver_f; int n_qps_lock; int n_qps_allocated; TYPE_1__* qp_dev; } ;
struct ib_udata {int dummy; } ;
struct ib_qp {int qp_type; int device; } ;
struct TYPE_8__ {int ref; } ;
struct TYPE_6__ {int qpn_table; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct rvt_qp*) ;
 struct rvt_dev_info* FUNC_2 (int ) ;
 struct rvt_qp* FUNC_3 (struct ib_qp*) ;
 int FUNC_4 (struct rvt_qp*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int VAR_2 ;
 int FUNC_9 (struct rvt_dev_info*,struct rvt_qp*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct rvt_dev_info*,struct rvt_qp*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int) ;

int FUNC_17(struct ib_qp *VAR_3, struct ib_udata *VAR_4)
{
 struct rvt_qp *VAR_5 = FUNC_3(VAR_3);
 struct rvt_dev_info *VAR_6 = FUNC_2(VAR_3->device);

 FUNC_11(&VAR_5->r_lock);
 FUNC_10(&VAR_5->s_hlock);
 FUNC_10(&VAR_5->s_lock);
 FUNC_9(VAR_6, VAR_5, VAR_3->qp_type);
 FUNC_12(&VAR_5->s_lock);
 FUNC_12(&VAR_5->s_hlock);
 FUNC_13(&VAR_5->r_lock);

 FUNC_16(VAR_5->wait, !FUNC_0(&VAR_5->refcount));

 FUNC_8(&VAR_6->qp_dev->qpn_table, VAR_5->ibqp.qp_num);

 FUNC_10(&VAR_6->n_qps_lock);
 VAR_6->n_qps_allocated--;
 if (VAR_5->ibqp.qp_type == VAR_0) {
  VAR_6->n_rc_qps--;
  VAR_6->busy_jiffies = VAR_6->n_rc_qps / VAR_1;
 }
 FUNC_12(&VAR_6->n_qps_lock);

 if (VAR_5->ip)
  FUNC_5(&VAR_5->ip->ref, VAR_2);
 FUNC_6(VAR_5->r_rq.kwq);
 VAR_6->driver_f.qp_priv_free(VAR_6, VAR_5);
 FUNC_4(VAR_5->s_ack_queue);
 FUNC_7(&VAR_5->remote_ah_attr);
 FUNC_7(&VAR_5->alt_ah_attr);
 FUNC_1(VAR_5);
 FUNC_15(VAR_5->s_wq);
 FUNC_4(VAR_5);
 return 0;
}
