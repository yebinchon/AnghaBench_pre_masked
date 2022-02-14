
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tid_rdma_request {scalar_t__ comp_seg; scalar_t__ total_segs; scalar_t__ ack_seg; scalar_t__ cur_seg; } ;
struct TYPE_2__ {size_t opcode; } ;
struct rvt_swqe {TYPE_1__ wr; scalar_t__ lpsn; } ;
struct rvt_qp {size_t state; scalar_t__ s_size; scalar_t__ s_tail; scalar_t__ s_acked; int s_flags; scalar_t__ s_last; scalar_t__ s_psn; scalar_t__ s_sending_hpsn; scalar_t__ s_sending_psn; int s_rdma_ack_cnt; int s_lock; struct hfi1_qp_priv* priv; } ;
struct ib_other_headers {int dummy; } ;
struct hfi1_qp_priv {scalar_t__ s_tid_head; scalar_t__ s_tid_cur; int s_flags; int timeout_shift; } ;
struct hfi1_opa_header {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (struct rvt_qp*) ;
 struct ib_other_headers* FUNC_5 (struct hfi1_opa_header*) ;
 int FUNC_6 (struct rvt_qp*) ;
 scalar_t__ FUNC_7 (struct ib_other_headers*) ;
 scalar_t__ FUNC_8 (struct ib_other_headers*) ;
 int * VAR_19 ;
 int* VAR_20 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct rvt_qp*,scalar_t__) ;
 int FUNC_11 (struct rvt_qp*) ;
 int FUNC_12 (struct rvt_qp*,int ) ;
 struct rvt_swqe* FUNC_13 (struct rvt_qp*,scalar_t__) ;
 int FUNC_14 (struct rvt_qp*,struct rvt_swqe*,int ,int ) ;
 int FUNC_15 (struct rvt_qp*,struct rvt_swqe*,scalar_t__) ;
 int FUNC_16 (struct rvt_qp*,scalar_t__) ;
 int FUNC_17 (struct rvt_qp*,struct rvt_swqe*) ;
 struct tid_rdma_request* FUNC_18 (struct rvt_swqe*) ;

void FUNC_19(struct rvt_qp *VAR_21, struct hfi1_opa_header *VAR_22)
{
 struct ib_other_headers *VAR_23;
 struct hfi1_qp_priv *VAR_24 = VAR_21->priv;
 struct rvt_swqe *VAR_25;
 u32 VAR_26, VAR_27, VAR_28;
 u32 VAR_29;
 struct tid_rdma_request *VAR_30;

 FUNC_9(&VAR_21->s_lock);
 if (!(VAR_20[VAR_21->state] & VAR_11))
  return;

 VAR_23 = FUNC_5(VAR_22);
 VAR_26 = FUNC_7(VAR_23);
 if ((VAR_26 >= FUNC_0(VAR_6) &&
      VAR_26 <= FUNC_0(VAR_1)) ||
     VAR_26 == FUNC_1(VAR_8) ||
     VAR_26 == FUNC_1(VAR_18)) {
  FUNC_2(!VAR_21->s_rdma_ack_cnt);
  VAR_21->s_rdma_ack_cnt--;
  return;
 }

 VAR_29 = FUNC_8(VAR_23);




 if (VAR_26 != FUNC_1(VAR_15) &&
     VAR_26 != FUNC_1(VAR_16) &&
     VAR_26 != FUNC_1(VAR_0) && VAR_26 != FUNC_1(VAR_9))
  FUNC_10(VAR_21, VAR_29);


 if (VAR_26 >= FUNC_1(VAR_17) &&
     VAR_26 <= FUNC_1(VAR_16)) {
  VAR_27 = VAR_24->s_tid_head;
  VAR_28 = VAR_24->s_tid_cur;
  VAR_25 = FUNC_13(VAR_21, VAR_28);
  VAR_30 = FUNC_18(VAR_25);
  if (VAR_27 == VAR_28 && VAR_30->comp_seg < VAR_30->total_segs) {
   if (VAR_28 == 0)
    VAR_28 = VAR_21->s_size - 1;
   else
    VAR_28 -= 1;
  }
 } else {
  VAR_27 = VAR_21->s_tail;
  VAR_28 = VAR_21->s_acked;
 }





 if ((VAR_29 & VAR_3) && VAR_28 != VAR_27 &&
     VAR_26 != FUNC_1(VAR_15) && VAR_26 != FUNC_1(VAR_16) &&
     VAR_26 != FUNC_1(VAR_9) &&
     !(VAR_21->s_flags &
       (VAR_12 | VAR_14 | VAR_13)) &&
     (VAR_20[VAR_21->state] & VAR_10)) {
  if (VAR_26 == FUNC_1(VAR_7))
   FUNC_12(VAR_21, VAR_24->timeout_shift);
  else
   FUNC_11(VAR_21);
 }


 if ((VAR_26 == FUNC_1(VAR_15) ||
      VAR_26 == FUNC_1(VAR_16) ||
      VAR_26 == FUNC_1(VAR_9)) &&
     (VAR_29 & VAR_3) &&
     !(VAR_24->s_flags & VAR_2) &&
     (VAR_20[VAR_21->state] & VAR_10)) {





  VAR_25 = FUNC_13(VAR_21, VAR_21->s_acked);
  VAR_30 = FUNC_18(VAR_25);
  if (VAR_25->wr.opcode == VAR_5 &&
      VAR_30->ack_seg < VAR_30->cur_seg)
   FUNC_4(VAR_21);
 }

 while (VAR_21->s_last != VAR_21->s_acked) {
  VAR_25 = FUNC_13(VAR_21, VAR_21->s_last);
  if (FUNC_3(VAR_25->lpsn, VAR_21->s_sending_psn) >= 0 &&
      FUNC_3(VAR_21->s_sending_psn, VAR_21->s_sending_hpsn) <= 0)
   break;
  FUNC_17(VAR_21, VAR_25);
  FUNC_15(VAR_21, VAR_25, VAR_21->s_last);
  FUNC_14(VAR_21,
         VAR_25,
         VAR_19[VAR_25->wr.opcode],
         VAR_4);
 }




 FUNC_16(VAR_21, VAR_29);
 if (VAR_21->s_flags & VAR_13 &&
     FUNC_3(VAR_21->s_sending_psn, VAR_21->s_sending_hpsn) > 0) {
  VAR_21->s_flags &= ~VAR_13;
  VAR_21->s_sending_psn = VAR_21->s_psn;
  VAR_21->s_sending_hpsn = VAR_21->s_psn - 1;
  FUNC_6(VAR_21);
 }
}
