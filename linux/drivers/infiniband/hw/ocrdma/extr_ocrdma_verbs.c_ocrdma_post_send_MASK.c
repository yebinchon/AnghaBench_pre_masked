
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ocrdma_sge {int dummy; } ;
struct TYPE_8__ {scalar_t__ max_sges; size_t head; } ;
struct ocrdma_qp {scalar_t__ state; scalar_t__ qp_type; int q_lock; TYPE_3__ sq; TYPE_2__* wqe_wr_id_tbl; scalar_t__ signaled; } ;
struct ocrdma_hdr_wqe {int cw; int lkey; void* immdt; scalar_t__ total_len; } ;
struct TYPE_6__ {int invalidate_rkey; int imm_data; } ;
struct ib_send_wr {int opcode; scalar_t__ num_sge; int send_flags; struct ib_send_wr* next; int wr_id; TYPE_1__ ex; } ;
struct ib_qp {int dummy; } ;
struct TYPE_7__ {int signaled; int wrid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 struct ocrdma_qp* FUNC_0 (struct ib_qp*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct ocrdma_qp*,struct ocrdma_hdr_wqe*,struct ib_send_wr const*) ;
 int FUNC_3 (struct ocrdma_qp*,struct ocrdma_hdr_wqe*,int ) ;
 int FUNC_4 (struct ocrdma_qp*,struct ocrdma_hdr_wqe*,struct ib_send_wr const*) ;
 int FUNC_5 (struct ocrdma_qp*,struct ocrdma_hdr_wqe*,struct ib_send_wr const*) ;
 int FUNC_6 (struct ocrdma_hdr_wqe*,int) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 struct ocrdma_hdr_wqe* FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (struct ocrdma_qp*) ;
 int FUNC_11 (struct ib_send_wr const*) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 () ;

int FUNC_15(struct ib_qp *VAR_21, const struct ib_send_wr *VAR_22,
       const struct ib_send_wr **VAR_23)
{
 int VAR_24 = 0;
 struct ocrdma_qp *VAR_25 = FUNC_0(VAR_21);
 struct ocrdma_hdr_wqe *VAR_26;
 unsigned long VAR_27;

 FUNC_12(&VAR_25->q_lock, VAR_27);
 if (VAR_25->state != VAR_12 && VAR_25->state != VAR_13) {
  FUNC_13(&VAR_25->q_lock, VAR_27);
  *VAR_23 = VAR_22;
  return -VAR_0;
 }

 while (VAR_22) {
  if (VAR_25->qp_type == VAR_2 &&
      (VAR_22->opcode != 130 &&
       VAR_22->opcode != 129)) {
   *VAR_23 = VAR_22;
   VAR_24 = -VAR_0;
   break;
  }
  if (FUNC_7(&VAR_25->sq) == 0 ||
      VAR_22->num_sge > VAR_25->sq.max_sges) {
   *VAR_23 = VAR_22;
   VAR_24 = -VAR_1;
   break;
  }
  VAR_26 = FUNC_8(&VAR_25->sq);
  VAR_26->cw = 0;
  if (VAR_22->send_flags & VAR_4 || VAR_25->signaled)
   VAR_26->cw |= (VAR_9 << VAR_15);
  if (VAR_22->send_flags & VAR_3)
   VAR_26->cw |=
       (VAR_6 << VAR_15);
  if (VAR_22->send_flags & VAR_5)
   VAR_26->cw |=
       (VAR_10 << VAR_15);
  VAR_26->total_len = 0;
  switch (VAR_22->opcode) {
  case 129:
   VAR_26->cw |= (VAR_7 << VAR_15);
   VAR_26->immdt = FUNC_1(VAR_22->ex.imm_data);

  case 130:
   VAR_26->cw |= (VAR_14 << VAR_16);
   FUNC_4(VAR_25, VAR_26, VAR_22);
   break;
  case 128:
   VAR_26->cw |= (VAR_8 << VAR_15);
   VAR_26->cw |= (VAR_14 << VAR_16);
   VAR_26->lkey = VAR_22->ex.invalidate_rkey;
   VAR_24 = FUNC_4(VAR_25, VAR_26, VAR_22);
   break;
  case 132:
   VAR_26->cw |= (VAR_7 << VAR_15);
   VAR_26->immdt = FUNC_1(VAR_22->ex.imm_data);

  case 133:
   VAR_26->cw |= (VAR_20 << VAR_16);
   VAR_24 = FUNC_5(VAR_25, VAR_26, VAR_22);
   break;
  case 134:
   FUNC_2(VAR_25, VAR_26, VAR_22);
   break;
  case 135:
   VAR_26->cw |=
       (VAR_11 << VAR_16);
   VAR_26->cw |= ((sizeof(struct ocrdma_hdr_wqe) +
     sizeof(struct ocrdma_sge)) /
    VAR_19) << VAR_18;
   VAR_26->lkey = VAR_22->ex.invalidate_rkey;
   break;
  case 131:
   VAR_24 = FUNC_3(VAR_25, VAR_26, FUNC_11(VAR_22));
   break;
  default:
   VAR_24 = -VAR_0;
   break;
  }
  if (VAR_24) {
   *VAR_23 = VAR_22;
   break;
  }
  if (VAR_22->send_flags & VAR_4 || VAR_25->signaled)
   VAR_25->wqe_wr_id_tbl[VAR_25->sq.head].signaled = 1;
  else
   VAR_25->wqe_wr_id_tbl[VAR_25->sq.head].signaled = 0;
  VAR_25->wqe_wr_id_tbl[VAR_25->sq.head].wrid = VAR_22->wr_id;
  FUNC_6(VAR_26, ((VAR_26->cw >> VAR_18) &
       VAR_17) * VAR_19);

  FUNC_14();

  FUNC_10(VAR_25);


  FUNC_9(&VAR_25->sq);
  VAR_22 = VAR_22->next;
 }
 FUNC_13(&VAR_25->q_lock, VAR_27);
 return VAR_24;
}
