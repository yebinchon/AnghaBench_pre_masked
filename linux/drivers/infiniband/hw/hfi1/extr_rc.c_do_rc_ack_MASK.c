
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_11__ {scalar_t__ opcode; } ;
struct rvt_swqe {int lpsn; int psn; TYPE_5__ wr; TYPE_4__* sg_list; } ;
struct TYPE_7__ {int device; } ;
struct rvt_qp {scalar_t__ s_acked; int s_last_psn; int s_flags; scalar_t__ s_tail; scalar_t__ s_cur; int s_psn; int s_state; int s_rnr_retry; int s_rnr_retry_cnt; scalar_t__ s_last; int s_retry_cnt; int s_retry; TYPE_1__ ibqp; scalar_t__ s_num_rd_atomic; int s_lock; struct hfi1_qp_priv* priv; } ;
struct rvt_dev_info {TYPE_2__* post_parms; } ;
struct hfi1_qp_priv {scalar_t__ s_tid_cur; int pending_tid_w_resp; int timeout_shift; } ;
struct TYPE_9__ {int n_rc_resends; int n_other_naks; int n_seq_naks; int n_rnr_naks; int * rc_acks; } ;
struct hfi1_ibport {TYPE_3__ rvp; } ;
struct hfi1_ctxtdata {int dummy; } ;
typedef enum ib_wc_status { ____Placeholder_ib_wc_status } ib_wc_status ;
struct TYPE_12__ {int ack_pending; } ;
struct TYPE_10__ {int * vaddr; } ;
struct TYPE_8__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_1 (int ) ;
 int VAR_26 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 struct rvt_swqe* FUNC_4 (struct rvt_qp*,struct rvt_swqe*,struct hfi1_ibport*) ;
 int FUNC_5 (struct rvt_qp*) ;
 int FUNC_6 (struct rvt_qp*,int,int ) ;
 int FUNC_7 (struct rvt_qp*) ;
 int FUNC_8 (struct rvt_qp*,struct rvt_swqe*,int) ;
 struct rvt_dev_info* FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct rvt_qp*,int ) ;
 struct hfi1_ibport* FUNC_12 (struct hfi1_ctxtdata*) ;
 int FUNC_13 (struct rvt_qp*,int) ;
 int FUNC_14 (struct rvt_qp*,int) ;
 int FUNC_15 (struct rvt_qp*,int ) ;
 int FUNC_16 (struct rvt_qp*,int) ;
 struct rvt_swqe* FUNC_17 (struct rvt_qp*,scalar_t__) ;
 int FUNC_18 (struct rvt_qp*) ;
 int FUNC_19 (struct rvt_qp*,int ) ;
 int FUNC_20 (struct rvt_qp*) ;
 int FUNC_21 (struct rvt_qp*,struct hfi1_ctxtdata*) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (struct rvt_qp*,int,int,struct rvt_swqe*) ;
 int FUNC_24 (struct rvt_qp*) ;
 int FUNC_25 (struct rvt_qp*,int) ;
 int FUNC_26 (struct rvt_qp*,int,int,int) ;
 TYPE_6__* FUNC_27 (struct rvt_swqe*) ;

int FUNC_28(struct rvt_qp *VAR_27, u32 VAR_28, u32 VAR_29, int VAR_30,
       u64 VAR_31, struct hfi1_ctxtdata *VAR_32)
{
 struct hfi1_ibport *VAR_33;
 enum ib_wc_status VAR_34;
 struct hfi1_qp_priv *VAR_35 = VAR_27->priv;
 struct rvt_swqe *VAR_36;
 int VAR_37 = 0;
 u32 VAR_38;
 int VAR_39;
 struct rvt_dev_info *VAR_40;

 FUNC_10(&VAR_27->s_lock);






 VAR_38 = VAR_29;
 if (VAR_28 >> VAR_4)
  VAR_38--;
 VAR_36 = FUNC_17(VAR_27, VAR_27->s_acked);
 VAR_33 = FUNC_12(VAR_32);





 while ((VAR_39 = FUNC_3(VAR_38, VAR_36->lpsn)) >= 0) {






  if (VAR_36->wr.opcode == VAR_13 &&
      VAR_30 == FUNC_0(VAR_17) &&
      VAR_39 == 0) {
   VAR_37 = 1;
   goto bail_stop;
  }
  if ((VAR_36->wr.opcode == VAR_13 &&
       (VAR_30 != FUNC_0(VAR_16) || VAR_39 != 0)) ||
      (VAR_36->wr.opcode == VAR_14 &&
       (VAR_30 != FUNC_1(VAR_18) || VAR_39 != 0)) ||
      ((VAR_36->wr.opcode == VAR_10 ||
        VAR_36->wr.opcode == VAR_11) &&
       (VAR_30 != FUNC_0(VAR_0) || VAR_39 != 0)) ||
      (VAR_36->wr.opcode == VAR_15 &&
       (FUNC_3(VAR_29, VAR_27->s_last_psn) != 1))) {
   FUNC_21(VAR_27, VAR_32);




   goto bail_stop;
  }
  if (VAR_36->wr.opcode == VAR_10 ||
      VAR_36->wr.opcode == VAR_11) {
   u64 *VAR_41 = VAR_36->sg_list[0].vaddr;
   *VAR_41 = VAR_31;
  }
  if (VAR_36->wr.opcode == VAR_12)
   FUNC_11(VAR_27, VAR_31);

  if (VAR_27->s_num_rd_atomic &&
      (VAR_36->wr.opcode == VAR_13 ||
       VAR_36->wr.opcode == VAR_10 ||
       VAR_36->wr.opcode == VAR_11)) {
   VAR_27->s_num_rd_atomic--;

   if ((VAR_27->s_flags & VAR_21) &&
       !VAR_27->s_num_rd_atomic) {
    VAR_27->s_flags &= ~(VAR_21 |
       VAR_20);
    FUNC_7(VAR_27);
   } else if (VAR_27->s_flags & VAR_22) {
    VAR_27->s_flags &= ~(VAR_22 |
       VAR_20);
    FUNC_7(VAR_27);
   }
  }





  if (VAR_36->wr.opcode == VAR_15)
   break;

  VAR_36 = FUNC_4(VAR_27, VAR_36, VAR_33);
  if (VAR_27->s_acked == VAR_27->s_tail)
   break;
 }

 FUNC_23(VAR_27, VAR_28, VAR_29, VAR_36);
 FUNC_24(VAR_27);
 switch (VAR_28 >> VAR_4) {
 case 0:
  FUNC_22(*VAR_33->rvp.rc_acks);
  if (VAR_36->wr.opcode == VAR_14) {
   if (FUNC_27(VAR_36)->ack_pending)
    FUNC_19(VAR_27,
       VAR_35->timeout_shift);
   else
    FUNC_20(VAR_27);
  } else if (VAR_27->s_acked != VAR_27->s_tail) {
   struct rvt_swqe *VAR_42 = ((void*)0);

   if (VAR_35->s_tid_cur != VAR_1)
    VAR_42 = FUNC_17(VAR_27, VAR_35->s_tid_cur);





   if (VAR_42 && VAR_42->wr.opcode == VAR_15 &&
       VAR_30 == FUNC_1(VAR_26)) {
    if (FUNC_2(VAR_29, VAR_27->s_last_psn + 1)) {
     FUNC_21(VAR_27, VAR_32);
     goto bail_stop;
    }




    if (VAR_27->s_cur != VAR_27->s_tail &&
        FUNC_2(VAR_27->s_psn, VAR_29) <= 0)
     FUNC_26(VAR_27, VAR_29,
             VAR_42->psn,
             VAR_42->lpsn);
    else if (--VAR_35->pending_tid_w_resp)
     FUNC_18(VAR_27);
    else
     FUNC_20(VAR_27);
   } else {




    FUNC_18(VAR_27);





    if (FUNC_2(VAR_27->s_psn, VAR_29) <= 0)
     FUNC_13(VAR_27, VAR_29 + 1);
   }
  } else {

   FUNC_20(VAR_27);
   if (FUNC_2(VAR_27->s_psn, VAR_29) <= 0) {
    VAR_27->s_state = FUNC_0(VAR_25);
    VAR_27->s_psn = VAR_29 + 1;
   }
  }
  if (VAR_27->s_flags & VAR_20) {
   VAR_27->s_flags &= ~VAR_20;
   FUNC_7(VAR_27);
  }
  FUNC_16(VAR_27, VAR_28);
  VAR_27->s_rnr_retry = VAR_27->s_rnr_retry_cnt;
  VAR_27->s_retry = VAR_27->s_retry_cnt;





  if (VAR_36->wr.opcode == VAR_15 &&
      VAR_30 != FUNC_1(VAR_26) &&
      FUNC_2(VAR_29, VAR_36->psn) >= 0)
   return 1;
  FUNC_25(VAR_27, VAR_29);
  return 1;

 case 1:
  VAR_33->rvp.n_rnr_naks++;
  if (VAR_27->s_acked == VAR_27->s_tail)
   goto bail_stop;
  if (VAR_27->s_flags & VAR_23)
   goto bail_stop;
  VAR_40 = FUNC_9(VAR_27->ibqp.device);
  if (VAR_27->s_rnr_retry == 0 &&
      !((VAR_40->post_parms[VAR_36->wr.opcode].flags &
        VAR_19) &&
        VAR_27->s_rnr_retry_cnt == 0)) {
   VAR_34 = VAR_8;
   goto class_b;
  }
  if (VAR_27->s_rnr_retry_cnt < 7 && VAR_27->s_rnr_retry_cnt > 0)
   VAR_27->s_rnr_retry--;







  if (VAR_36->wr.opcode == VAR_15) {
   FUNC_13(VAR_27, VAR_27->s_last_psn + 1);
  } else {
   FUNC_25(VAR_27, VAR_29 - 1);
   FUNC_13(VAR_27, VAR_29);
  }

  VAR_33->rvp.n_rc_resends += FUNC_3(VAR_27->s_psn, VAR_29);
  VAR_27->s_flags &= ~(VAR_24 | VAR_20);
  FUNC_20(VAR_27);
  FUNC_14(VAR_27, VAR_28);
  return 0;

 case 3:
  if (VAR_27->s_acked == VAR_27->s_tail)
   goto bail_stop;

  FUNC_25(VAR_27, VAR_29 - 1);
  switch ((VAR_28 >> VAR_3) &
   VAR_2) {
  case 0:
   VAR_33->rvp.n_seq_naks++;






   FUNC_6(VAR_27, VAR_29, 0);
   FUNC_7(VAR_27);
   break;

  case 1:
   VAR_34 = VAR_6;
   VAR_33->rvp.n_other_naks++;
   goto class_b;

  case 2:
   VAR_34 = VAR_5;
   VAR_33->rvp.n_other_naks++;
   goto class_b;

  case 3:
   VAR_34 = VAR_7;
   VAR_33->rvp.n_other_naks++;
class_b:
   if (VAR_27->s_last == VAR_27->s_acked) {
    if (VAR_36->wr.opcode == VAR_14)
     FUNC_5(VAR_27);

    FUNC_8(VAR_27, VAR_36, VAR_34);
    FUNC_15(VAR_27, VAR_9);
   }
   break;

  default:

   goto reserved;
  }
  VAR_27->s_retry = VAR_27->s_retry_cnt;
  VAR_27->s_rnr_retry = VAR_27->s_rnr_retry_cnt;
  goto bail_stop;

 default:
reserved:

  goto bail_stop;
 }

bail_stop:
 FUNC_20(VAR_27);
 return VAR_37;
}
