
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wc ;
typedef scalar_t__ u32 ;
struct rvt_rwqe {int num_sge; TYPE_2__* sg_list; int wr_id; } ;
struct TYPE_8__ {unsigned int max_sge; scalar_t__ size; struct rvt_krwq* kwq; } ;
struct TYPE_5__ {int recv_cq; int srq; } ;
struct rvt_qp {size_t state; TYPE_4__ r_rq; TYPE_1__ ibqp; } ;
struct rvt_krwq {scalar_t__ head; int p_lock; int tail; } ;
struct ib_wc {int status; int wr_id; int opcode; TYPE_1__* qp; } ;
struct ib_recv_wr {int num_sge; TYPE_3__* sg_list; int wr_id; struct ib_recv_wr* next; } ;
struct ib_qp {int dummy; } ;
struct TYPE_7__ {int lkey; int length; int addr; } ;
struct TYPE_6__ {int lkey; int length; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int* VAR_6 ;
 int FUNC_1 (int ) ;
 struct rvt_qp* FUNC_2 (struct ib_qp*) ;
 int FUNC_3 (struct ib_wc*,int ,int) ;
 int FUNC_4 (int ,struct ib_wc*,int) ;
 struct rvt_rwqe* FUNC_5 (TYPE_4__*,scalar_t__) ;
 int FUNC_6 (scalar_t__*,scalar_t__) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 scalar_t__ FUNC_9 (int) ;

int FUNC_10(struct ib_qp *VAR_7, const struct ib_recv_wr *VAR_8,
    const struct ib_recv_wr **VAR_9)
{
 struct rvt_qp *VAR_10 = FUNC_2(VAR_7);
 struct rvt_krwq *VAR_11 = VAR_10->r_rq.kwq;
 unsigned long VAR_12;
 int VAR_13 = (VAR_6[VAR_10->state] & VAR_4) &&
    !VAR_10->ibqp.srq;


 if (!(VAR_6[VAR_10->state] & VAR_5) || !VAR_11) {
  *VAR_9 = VAR_8;
  return -VAR_0;
 }

 for (; VAR_8; VAR_8 = VAR_8->next) {
  struct rvt_rwqe *VAR_14;
  u32 VAR_15;
  int VAR_16;

  if ((unsigned)VAR_8->num_sge > VAR_10->r_rq.max_sge) {
   *VAR_9 = VAR_8;
   return -VAR_0;
  }

  FUNC_7(&VAR_10->r_rq.kwq->p_lock, VAR_12);
  VAR_15 = VAR_11->head + 1;
  if (VAR_15 >= VAR_10->r_rq.size)
   VAR_15 = 0;
  if (VAR_15 == FUNC_0(VAR_11->tail)) {
   FUNC_8(&VAR_10->r_rq.kwq->p_lock, VAR_12);
   *VAR_9 = VAR_8;
   return -VAR_1;
  }
  if (FUNC_9(VAR_13)) {
   struct ib_wc VAR_17;

   FUNC_3(&VAR_17, 0, sizeof(VAR_17));
   VAR_17.qp = &VAR_10->ibqp;
   VAR_17.opcode = VAR_2;
   VAR_17.wr_id = VAR_8->wr_id;
   VAR_17.status = VAR_3;
   FUNC_4(FUNC_1(VAR_10->ibqp.recv_cq), &VAR_17, 1);
  } else {
   VAR_14 = FUNC_5(&VAR_10->r_rq, VAR_11->head);
   VAR_14->wr_id = VAR_8->wr_id;
   VAR_14->num_sge = VAR_8->num_sge;
   for (VAR_16 = 0; VAR_16 < VAR_8->num_sge; VAR_16++) {
    VAR_14->sg_list[VAR_16].addr = VAR_8->sg_list[VAR_16].addr;
    VAR_14->sg_list[VAR_16].length = VAR_8->sg_list[VAR_16].length;
    VAR_14->sg_list[VAR_16].lkey = VAR_8->sg_list[VAR_16].lkey;
   }




   FUNC_6(&VAR_11->head, VAR_15);
  }
  FUNC_8(&VAR_10->r_rq.kwq->p_lock, VAR_12);
 }
 return 0;
}
