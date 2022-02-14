
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_9__ {int qp_num; } ;
struct TYPE_10__ {size_t cons; size_t gsi_cons; } ;
struct qedr_qp {TYPE_4__ ibqp; TYPE_5__ sq; TYPE_5__ rq; TYPE_3__* wqe_wr_id; TYPE_2__* rqe_wr_id; } ;
struct qedr_dev {struct qedr_qp* gsi_qp; } ;
struct qedr_cq {int cq_lock; } ;
struct ib_wc {int wc_flags; int vlan_id; int sl; void* status; int opcode; int wr_id; TYPE_4__* qp; int smac; int byte_len; scalar_t__ pkey_index; } ;
struct ib_cq {int device; } ;
struct TYPE_8__ {int wr_id; } ;
struct TYPE_7__ {int vlan; int smac; TYPE_1__* sg_list; scalar_t__ rc; int wr_id; } ;
struct TYPE_6__ {int length; } ;


 int FUNC_0 (struct qedr_dev*,int ,char*,int,int,size_t,size_t,size_t,size_t,int ) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,int ) ;
 struct qedr_cq* FUNC_2 (struct ib_cq*) ;
 struct qedr_dev* FUNC_3 (int ) ;
 int FUNC_4 (struct ib_wc*,int ,int) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

int FUNC_8(struct ib_cq *VAR_12, int VAR_13, struct ib_wc *VAR_14)
{
 struct qedr_dev *VAR_15 = FUNC_3(VAR_12->device);
 struct qedr_cq *VAR_16 = FUNC_2(VAR_12);
 struct qedr_qp *VAR_17 = VAR_15->gsi_qp;
 unsigned long VAR_18;
 u16 VAR_19;
 int VAR_20 = 0;

 FUNC_6(&VAR_16->cq_lock, VAR_18);

 while (VAR_20 < VAR_13 && VAR_17->rq.cons != VAR_17->rq.gsi_cons) {
  FUNC_4(&VAR_14[VAR_20], 0, sizeof(*VAR_14));

  VAR_14[VAR_20].qp = &VAR_17->ibqp;
  VAR_14[VAR_20].wr_id = VAR_17->rqe_wr_id[VAR_17->rq.cons].wr_id;
  VAR_14[VAR_20].opcode = VAR_3;
  VAR_14[VAR_20].pkey_index = 0;
  VAR_14[VAR_20].status = (VAR_17->rqe_wr_id[VAR_17->rq.cons].rc) ?
      VAR_0 : VAR_5;

  VAR_14[VAR_20].byte_len = VAR_17->rqe_wr_id[VAR_17->rq.cons].sg_list[0].length;
  VAR_14[VAR_20].wc_flags |= VAR_1 | VAR_2;
  FUNC_1(VAR_14[VAR_20].smac, VAR_17->rqe_wr_id[VAR_17->rq.cons].smac);
  VAR_14[VAR_20].wc_flags |= VAR_6;

  VAR_19 = VAR_17->rqe_wr_id[VAR_17->rq.cons].vlan &
     VAR_11;
  if (VAR_19) {
   VAR_14[VAR_20].wc_flags |= VAR_7;
   VAR_14[VAR_20].vlan_id = VAR_19;
   VAR_14[VAR_20].sl = (VAR_17->rqe_wr_id[VAR_17->rq.cons].vlan &
        VAR_9) >> VAR_10;
  }

  FUNC_5(&VAR_17->rq);
  VAR_20++;
 }

 while (VAR_20 < VAR_13 && VAR_17->sq.cons != VAR_17->sq.gsi_cons) {
  FUNC_4(&VAR_14[VAR_20], 0, sizeof(*VAR_14));

  VAR_14[VAR_20].qp = &VAR_17->ibqp;
  VAR_14[VAR_20].wr_id = VAR_17->wqe_wr_id[VAR_17->sq.cons].wr_id;
  VAR_14[VAR_20].opcode = VAR_4;
  VAR_14[VAR_20].status = VAR_5;

  FUNC_5(&VAR_17->sq);
  VAR_20++;
 }

 FUNC_7(&VAR_16->cq_lock, VAR_18);

 FUNC_0(VAR_15, VAR_8,
   "gsi poll_cq: requested entries=%d, actual=%d, qp->rq.cons=%d, qp->rq.gsi_cons=%x, qp->sq.cons=%d, qp->sq.gsi_cons=%d, qp_num=%d\n",
   VAR_13, VAR_20, VAR_17->rq.cons, VAR_17->rq.gsi_cons, VAR_17->sq.cons,
   VAR_17->sq.gsi_cons, VAR_17->ibqp.qp_num);

 return VAR_20;
}
