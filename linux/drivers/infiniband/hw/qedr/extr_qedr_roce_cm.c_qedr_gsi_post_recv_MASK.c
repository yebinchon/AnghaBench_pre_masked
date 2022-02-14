
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {size_t prod; } ;
struct qedr_qp {scalar_t__ state; int q_lock; TYPE_3__ rq; TYPE_4__* rqe_wr_id; } ;
struct qedr_dev {int gsi_ll2_handle; int rdma_ctx; TYPE_1__* ops; } ;
struct ib_recv_wr {scalar_t__ num_sge; struct ib_recv_wr* next; int wr_id; TYPE_2__* sg_list; } ;
struct ib_qp {int device; } ;
struct TYPE_8__ {int wr_id; TYPE_2__* sg_list; } ;
struct TYPE_6__ {int length; int addr; } ;
struct TYPE_5__ {int (* ll2_post_rx_buffer ) (int ,int ,int ,int ,int *,int) ;} ;


 int FUNC_0 (struct qedr_dev*,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct qedr_dev* FUNC_1 (int ) ;
 struct qedr_qp* FUNC_2 (struct ib_qp*) ;
 int FUNC_3 (TYPE_4__*,int ,int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ,int ,int ,int ,int *,int) ;

int FUNC_8(struct ib_qp *VAR_5, const struct ib_recv_wr *VAR_6,
         const struct ib_recv_wr **VAR_7)
{
 struct qedr_dev *VAR_8 = FUNC_1(VAR_5->device);
 struct qedr_qp *VAR_9 = FUNC_2(VAR_5);
 unsigned long VAR_10;
 int VAR_11 = 0;

 if ((VAR_9->state != VAR_3) &&
     (VAR_9->state != VAR_4)) {
  *VAR_7 = VAR_6;
  FUNC_0(VAR_8,
         "gsi post recv: failed to post rx buffer. state is %d and not QED_ROCE_QP_STATE_RTR/S\n",
         VAR_9->state);
  return -VAR_0;
 }

 FUNC_5(&VAR_9->q_lock, VAR_10);

 while (VAR_6) {
  if (VAR_6->num_sge > VAR_2) {
   FUNC_0(VAR_8,
          "gsi post recv: failed to post rx buffer. too many sges %d>%d\n",
          VAR_6->num_sge, VAR_2);
   goto err;
  }

  VAR_11 = VAR_8->ops->ll2_post_rx_buffer(VAR_8->rdma_ctx,
        VAR_8->gsi_ll2_handle,
        VAR_6->sg_list[0].addr,
        VAR_6->sg_list[0].length,
        ((void*)0) ,
        1 );
  if (VAR_11) {
   FUNC_0(VAR_8,
          "gsi post recv: failed to post rx buffer (rc=%d)\n",
          VAR_11);
   goto err;
  }

  FUNC_3(&VAR_9->rqe_wr_id[VAR_9->rq.prod], 0,
         sizeof(VAR_9->rqe_wr_id[VAR_9->rq.prod]));
  VAR_9->rqe_wr_id[VAR_9->rq.prod].sg_list[0] = VAR_6->sg_list[0];
  VAR_9->rqe_wr_id[VAR_9->rq.prod].wr_id = VAR_6->wr_id;

  FUNC_4(&VAR_9->rq);

  VAR_6 = VAR_6->next;
 }

 FUNC_6(&VAR_9->q_lock, VAR_10);

 return VAR_11;
err:
 FUNC_6(&VAR_9->q_lock, VAR_10);
 *VAR_7 = VAR_6;
 return -VAR_1;
}
