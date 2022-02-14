
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_7__ {scalar_t__ opcode; } ;
struct rvt_swqe {int lpsn; TYPE_3__ wr; TYPE_2__* sg_list; } ;
struct TYPE_5__ {int device; } ;
struct rvt_qp {scalar_t__ s_acked; int r_flags; int s_last_psn; int s_flags; scalar_t__ s_tail; int s_psn; int s_state; int s_rnr_retry; int s_rnr_retry_cnt; scalar_t__ s_last; int s_retry_cnt; int s_retry; scalar_t__ s_num_rd_atomic; int rspwait; int port_num; TYPE_1__ ibqp; } ;
struct TYPE_8__ {int n_rc_resends; int n_other_naks; int n_seq_naks; int n_rnr_naks; int * rc_acks; } ;
struct qib_ibport {TYPE_4__ rvp; } ;
struct qib_ctxtdata {int qp_wait_list; } ;
typedef enum ib_wc_status { ____Placeholder_ib_wc_status } ib_wc_status ;
struct TYPE_6__ {int * vaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 struct rvt_swqe* FUNC_1 (struct rvt_qp*,struct rvt_swqe*,struct qib_ibport*) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct rvt_qp*,int,int ) ;
 int FUNC_6 (struct rvt_qp*) ;
 int FUNC_7 (struct rvt_qp*,int) ;
 int FUNC_8 (struct rvt_qp*,int) ;
 int FUNC_9 (struct rvt_qp*,int ) ;
 int FUNC_10 (struct rvt_qp*,int) ;
 int FUNC_11 (struct rvt_qp*) ;
 struct rvt_swqe* FUNC_12 (struct rvt_qp*,scalar_t__) ;
 int FUNC_13 (struct rvt_qp*) ;
 int FUNC_14 (struct rvt_qp*,struct rvt_swqe*,int) ;
 int FUNC_15 (struct rvt_qp*) ;
 int FUNC_16 (int ) ;
 struct qib_ibport* FUNC_17 (int ,int ) ;
 int FUNC_18 (struct rvt_qp*,int) ;

__attribute__((used)) static int FUNC_19(struct rvt_qp *VAR_23, u32 VAR_24, u32 VAR_25, int VAR_26,
       u64 VAR_27, struct qib_ctxtdata *VAR_28)
{
 struct qib_ibport *VAR_29;
 enum ib_wc_status VAR_30;
 struct rvt_swqe *VAR_31;
 int VAR_32 = 0;
 u32 VAR_33;
 int VAR_34;







 VAR_33 = VAR_25;
 if (VAR_24 >> VAR_3)
  VAR_33--;
 VAR_31 = FUNC_12(VAR_23, VAR_23->s_acked);
 VAR_29 = FUNC_17(VAR_23->ibqp.device, VAR_23->port_num);





 while ((VAR_34 = FUNC_4(VAR_33, VAR_31->lpsn)) >= 0) {






  if (VAR_31->wr.opcode == VAR_11 &&
      VAR_26 == FUNC_0(VAR_14) &&
      VAR_34 == 0) {
   VAR_32 = 1;
   goto bail;
  }
  if ((VAR_31->wr.opcode == VAR_11 &&
       (VAR_26 != FUNC_0(VAR_13) || VAR_34 != 0)) ||
      ((VAR_31->wr.opcode == VAR_9 ||
        VAR_31->wr.opcode == VAR_10) &&
       (VAR_26 != FUNC_0(VAR_0) || VAR_34 != 0))) {

   if (!(VAR_23->r_flags & VAR_15)) {
    VAR_23->r_flags |= VAR_15;
    FUNC_5(VAR_23, VAR_23->s_last_psn + 1, 0);
    if (FUNC_3(&VAR_23->rspwait)) {
     VAR_23->r_flags |= VAR_16;
     FUNC_11(VAR_23);
     FUNC_2(&VAR_23->rspwait,
            &VAR_28->qp_wait_list);
    }
   }




   goto bail;
  }
  if (VAR_31->wr.opcode == VAR_9 ||
      VAR_31->wr.opcode == VAR_10) {
   u64 *VAR_35 = VAR_31->sg_list[0].vaddr;
   *VAR_35 = VAR_27;
  }
  if (VAR_23->s_num_rd_atomic &&
      (VAR_31->wr.opcode == VAR_11 ||
       VAR_31->wr.opcode == VAR_9 ||
       VAR_31->wr.opcode == VAR_10)) {
   VAR_23->s_num_rd_atomic--;

   if ((VAR_23->s_flags & VAR_18) &&
       !VAR_23->s_num_rd_atomic) {
    VAR_23->s_flags &= ~(VAR_18 |
       VAR_17);
    FUNC_6(VAR_23);
   } else if (VAR_23->s_flags & VAR_19) {
    VAR_23->s_flags &= ~(VAR_19 |
       VAR_17);
    FUNC_6(VAR_23);
   }
  }
  VAR_31 = FUNC_1(VAR_23, VAR_31, VAR_29);
  if (VAR_23->s_acked == VAR_23->s_tail)
   break;
 }

 switch (VAR_24 >> VAR_3) {
 case 0:
  FUNC_16(*VAR_29->rvp.rc_acks);
  if (VAR_23->s_acked != VAR_23->s_tail) {




   FUNC_13(VAR_23);




   if (FUNC_4(VAR_23->s_psn, VAR_25) <= 0)
    FUNC_7(VAR_23, VAR_25 + 1);
  } else {

   FUNC_15(VAR_23);
   if (FUNC_4(VAR_23->s_psn, VAR_25) <= 0) {
    VAR_23->s_state = FUNC_0(VAR_22);
    VAR_23->s_psn = VAR_25 + 1;
   }
  }
  if (VAR_23->s_flags & VAR_17) {
   VAR_23->s_flags &= ~VAR_17;
   FUNC_6(VAR_23);
  }
  FUNC_10(VAR_23, VAR_24);
  VAR_23->s_rnr_retry = VAR_23->s_rnr_retry_cnt;
  VAR_23->s_retry = VAR_23->s_retry_cnt;
  FUNC_18(VAR_23, VAR_25);
  return 1;

 case 1:
  VAR_29->rvp.n_rnr_naks++;
  if (VAR_23->s_acked == VAR_23->s_tail)
   goto bail;
  if (VAR_23->s_flags & VAR_20)
   goto bail;
  if (VAR_23->s_rnr_retry == 0) {
   VAR_30 = VAR_7;
   goto class_b;
  }
  if (VAR_23->s_rnr_retry_cnt < 7)
   VAR_23->s_rnr_retry--;


  FUNC_18(VAR_23, VAR_25 - 1);

  VAR_29->rvp.n_rc_resends += (VAR_23->s_psn - VAR_25) & VAR_12;

  FUNC_7(VAR_23, VAR_25);

  VAR_23->s_flags &= ~(VAR_21 | VAR_17);
  FUNC_15(VAR_23);
  FUNC_8(VAR_23, VAR_24);
  return 0;

 case 3:
  if (VAR_23->s_acked == VAR_23->s_tail)
   goto bail;

  FUNC_18(VAR_23, VAR_25 - 1);
  switch ((VAR_24 >> VAR_2) &
   VAR_1) {
  case 0:
   VAR_29->rvp.n_seq_naks++;






   FUNC_5(VAR_23, VAR_25, 0);
   FUNC_6(VAR_23);
   break;

  case 1:
   VAR_30 = VAR_5;
   VAR_29->rvp.n_other_naks++;
   goto class_b;

  case 2:
   VAR_30 = VAR_4;
   VAR_29->rvp.n_other_naks++;
   goto class_b;

  case 3:
   VAR_30 = VAR_6;
   VAR_29->rvp.n_other_naks++;
class_b:
   if (VAR_23->s_last == VAR_23->s_acked) {
    FUNC_14(VAR_23, VAR_31, VAR_30);
    FUNC_9(VAR_23, VAR_8);
   }
   break;

  default:

   goto reserved;
  }
  VAR_23->s_retry = VAR_23->s_retry_cnt;
  VAR_23->s_rnr_retry = VAR_23->s_rnr_retry_cnt;
  goto bail;

 default:
reserved:

  goto bail;
 }

bail:
 FUNC_15(VAR_23);
 return VAR_32;
}
