
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


typedef int u32 ;
typedef int u16 ;
struct TYPE_11__ {int qp_type; } ;
struct rvt_qp {size_t state; int r_lock; int rspwait; int r_flags; int r_psn; int r_ack_psn; int r_nak_state; TYPE_5__ ibqp; } ;
struct rvt_dev_info {int dummy; } ;
struct TYPE_12__ {int n_rc_seqnak; int n_pkt_drops; } ;
struct qib_ibport {TYPE_6__ rvp; } ;
struct qib_pportdata {int lmc; int lid; struct qib_devdata* dd; struct qib_ibport ibport_data; } ;
struct qib_message_header {int dummy; } ;
struct TYPE_7__ {struct rvt_dev_info rdi; } ;
struct qib_devdata {TYPE_1__ verbs_dev; } ;
struct qib_ctxtdata {int qp_wait_list; } ;
struct ib_other_headers {int * bth; } ;
struct TYPE_8__ {scalar_t__ next_hdr; int version_tclass_flow; } ;
struct TYPE_9__ {TYPE_2__ grh; struct ib_other_headers oth; } ;
struct TYPE_10__ {TYPE_3__ l; struct ib_other_headers oth; } ;
struct ib_header {TYPE_4__ u; int * lrh; } ;
typedef int __le32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int* VAR_15 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct qib_ibport*,struct ib_header*,int,struct rvt_qp*,int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct rvt_qp*) ;
 struct rvt_qp* FUNC_10 (struct rvt_dev_info*,TYPE_6__*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static u32 FUNC_14(struct qib_ctxtdata *VAR_16, struct qib_pportdata *VAR_17,
     u32 VAR_18, u32 VAR_19, u32 VAR_20, u32 VAR_21,
     __le32 *VAR_22, struct qib_message_header *VAR_23)
{
 u32 VAR_24 = 0;

 if (VAR_19 & (VAR_9 | VAR_11))
  VAR_24 = 1;
 else if (VAR_19 == VAR_10) {

  struct ib_header *VAR_25 = (struct ib_header *)VAR_23;
  struct ib_other_headers *VAR_26 = ((void*)0);
  struct qib_ibport *VAR_27 = &VAR_17->ibport_data;
  struct qib_devdata *VAR_28 = VAR_17->dd;
  struct rvt_dev_info *VAR_29 = &VAR_28->verbs_dev.rdi;
  struct rvt_qp *VAR_30 = ((void*)0);
  u32 VAR_31 = FUNC_5(VAR_22);
  u16 VAR_32 = FUNC_0(VAR_25->lrh[1]);
  int VAR_33 = FUNC_0(VAR_25->lrh[0]) & 3;
  u32 VAR_34;
  u32 VAR_35;
  u32 VAR_36;
  int VAR_37;


  if (VAR_31 < 24)
   goto drop;

  if (VAR_32 < FUNC_0(VAR_3)) {
   VAR_32 &= ~((1 << VAR_17->lmc) - 1);
   if (FUNC_13(VAR_32 != VAR_17->lid))
    goto drop;
  }


  if (VAR_33 == VAR_6)
   VAR_26 = &VAR_25->u.oth;
  else if (VAR_33 == VAR_7) {
   u32 VAR_38;

   VAR_26 = &VAR_25->u.l.oth;
   if (VAR_25->u.l.grh.next_hdr != VAR_0)
    goto drop;
   VAR_38 = FUNC_1(VAR_25->u.l.grh.version_tclass_flow);
   if ((VAR_38 >> VAR_2) != VAR_1)
    goto drop;
  } else
   goto drop;


  VAR_35 = FUNC_1(VAR_26->bth[0]);
  VAR_35 >>= 24;
  VAR_36 = FUNC_1(VAR_26->bth[2]);


  VAR_34 = FUNC_1(VAR_26->bth[1]) & VAR_13;
  if (VAR_34 != VAR_8) {
   int VAR_39;

   FUNC_7();
   VAR_30 = FUNC_10(VAR_29, &VAR_27->rvp, VAR_34);
   if (!VAR_30) {
    FUNC_8();
    goto drop;
   }





   FUNC_11(&VAR_30->r_lock);


   if (!(VAR_15[VAR_30->state] &
         VAR_12)) {
    VAR_27->rvp.n_pkt_drops++;
    goto unlock;
   }

   switch (VAR_30->ibqp.qp_type) {
   case 131:
    VAR_39 =
     FUNC_6(
      VAR_27, VAR_25,
      VAR_33 == VAR_7,
      VAR_30,
      FUNC_1(VAR_26->bth[0]));
    if (VAR_39)
     goto unlock;


    if (VAR_35 <
        VAR_5) {
     VAR_37 = FUNC_4(VAR_36, VAR_30->r_psn);
     if (!VAR_30->r_nak_state && VAR_37 >= 0) {
      VAR_27->rvp.n_rc_seqnak++;
      VAR_30->r_nak_state =
       VAR_4;

      VAR_30->r_ack_psn = VAR_30->r_psn;
      if (FUNC_3(&VAR_30->rspwait)) {
       VAR_30->r_flags |=
        VAR_14;
       FUNC_9(VAR_30);
       FUNC_2(
        &VAR_30->rspwait,
        &VAR_16->qp_wait_list);
      }
     }
    }
    break;
   case 130:
   case 132:
   case 128:
   case 129:
   default:

    break;
   }

unlock:
   FUNC_12(&VAR_30->r_lock);
   FUNC_8();
  }
 }

drop:
 return VAR_24;
}
