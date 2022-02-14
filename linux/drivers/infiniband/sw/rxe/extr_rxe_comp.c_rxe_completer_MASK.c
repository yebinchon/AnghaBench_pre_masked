
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct rxe_send_wqe {int status; int state; int last_psn; } ;
struct TYPE_5__ {scalar_t__ state; int need_retry; int task; int psn; int wait_psn; } ;
struct TYPE_6__ {int timeout_retry; int opcode; int psn; int started_retry; int retry_cnt; int rnr_retry; scalar_t__ timeout; } ;
struct TYPE_4__ {int device; } ;
struct rxe_qp {int rnr_nak_timer; TYPE_2__ req; TYPE_3__ comp; scalar_t__ qp_timeout_jiffies; int retrans_timer; int resp_pkts; scalar_t__ valid; TYPE_1__ ibqp; } ;
struct rxe_pkt_info {int mask; int opcode; struct rxe_qp* qp; int psn; } ;
struct rxe_dev {int dummy; } ;
typedef enum comp_state { ____Placeholder_comp_state } comp_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct rxe_pkt_info* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct rxe_pkt_info*) ;
 int FUNC_3 (struct rxe_qp*,struct rxe_pkt_info*,struct rxe_send_wqe*) ;
 int FUNC_4 (struct rxe_qp*,struct rxe_pkt_info*,struct rxe_send_wqe*) ;
 int * VAR_14 ;
 int FUNC_5 (struct rxe_qp*,struct rxe_pkt_info*,struct rxe_send_wqe*) ;
 int FUNC_6 (struct rxe_qp*,struct rxe_pkt_info*,struct rxe_send_wqe*) ;
 int FUNC_7 (struct rxe_qp*,struct rxe_pkt_info*,struct rxe_send_wqe*) ;
 int FUNC_8 (struct rxe_qp*,struct rxe_send_wqe*) ;
 int FUNC_9 (struct rxe_qp*,struct rxe_pkt_info*,struct rxe_send_wqe*) ;
 int FUNC_10 (struct rxe_qp*,struct rxe_pkt_info*,struct rxe_send_wqe**) ;
 scalar_t__ VAR_15 ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (int *,scalar_t__) ;
 int FUNC_13 (char*,int ,...) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (struct rxe_qp*) ;
 int FUNC_16 (struct rxe_qp*) ;
 scalar_t__ FUNC_17 (int) ;
 int FUNC_18 (struct rxe_qp*) ;
 int FUNC_19 (struct rxe_dev*,int ) ;
 int FUNC_20 (struct rxe_qp*,int) ;
 int FUNC_21 (struct rxe_qp*) ;
 int FUNC_22 (struct rxe_qp*) ;
 int FUNC_23 (int *,int) ;
 struct sk_buff* FUNC_24 (int *) ;
 struct rxe_dev* FUNC_25 (int ) ;
 int VAR_16 ;
 int VAR_17 ;

int FUNC_26(void *VAR_18)
{
 struct rxe_qp *VAR_19 = (struct rxe_qp *)VAR_18;
 struct rxe_dev *VAR_20 = FUNC_25(VAR_19->ibqp.device);
 struct rxe_send_wqe *VAR_21 = ((void*)0);
 struct sk_buff *VAR_22 = ((void*)0);
 struct rxe_pkt_info *VAR_23 = ((void*)0);
 enum comp_state VAR_24;

 FUNC_18(VAR_19);

 if (!VAR_19->valid || VAR_19->req.state == VAR_7 ||
     VAR_19->req.state == VAR_9) {
  FUNC_20(VAR_19, VAR_19->valid &&
        VAR_19->req.state == VAR_7);
  goto exit;
 }

 if (VAR_19->comp.timeout) {
  VAR_19->comp.timeout_retry = 1;
  VAR_19->comp.timeout = 0;
 } else {
  VAR_19->comp.timeout_retry = 0;
 }

 if (VAR_19->req.need_retry)
  goto exit;

 VAR_24 = 133;

 while (1) {
  FUNC_13("qp#%d state = %s\n", FUNC_15(VAR_19),
    VAR_14[VAR_24]);
  switch (VAR_24) {
  case 133:
   VAR_22 = FUNC_24(&VAR_19->resp_pkts);
   if (VAR_22) {
    VAR_23 = FUNC_0(VAR_22);
    VAR_19->comp.timeout_retry = 0;
   }
   VAR_24 = 132;
   break;

  case 132:
   VAR_24 = FUNC_10(VAR_19, VAR_23, &VAR_21);
   break;

  case 140:
   VAR_24 = FUNC_4(VAR_19, VAR_23, VAR_21);
   break;

  case 141:
   VAR_24 = FUNC_3(VAR_19, VAR_23, VAR_21);
   break;

  case 131:
   VAR_24 = FUNC_9(VAR_19, VAR_23, VAR_21);
   break;

  case 142:
   VAR_24 = FUNC_7(VAR_19, VAR_23, VAR_21);
   break;

  case 128:
   if (VAR_21->state == VAR_16 &&
       VAR_21->last_psn == VAR_23->psn)
    VAR_24 = 139;
   else
    VAR_24 = 129;
   break;

  case 139:
   VAR_24 = FUNC_5(VAR_19, VAR_23, VAR_21);
   break;

  case 138:
   VAR_24 = FUNC_6(VAR_19, VAR_23, VAR_21);
   break;

  case 129:
   if (VAR_23->mask & VAR_13)
    VAR_19->comp.opcode = -1;
   else
    VAR_19->comp.opcode = VAR_23->opcode;

   if (FUNC_14(VAR_23->psn, VAR_19->comp.psn) >= 0)
    VAR_19->comp.psn = (VAR_23->psn + 1) & VAR_1;

   if (VAR_19->req.wait_psn) {
    VAR_19->req.wait_psn = 0;
    FUNC_23(&VAR_19->req.task, 1);
   }

   VAR_24 = 137;
   break;

  case 137:
   if (VAR_23) {
    FUNC_21(VAR_23->qp);
    FUNC_11(VAR_22);
    VAR_22 = ((void*)0);
   }
   goto done;

  case 134:
   if (VAR_19->comp.timeout_retry && VAR_21) {
    VAR_24 = 135;
    break;
   }
   if ((FUNC_16(VAR_19) == VAR_3) &&
       (VAR_19->req.state == VAR_8) &&
       (FUNC_14(VAR_19->req.psn, VAR_19->comp.psn) > 0) &&
       VAR_19->qp_timeout_jiffies)
    FUNC_12(&VAR_19->retrans_timer,
       VAR_15 + VAR_19->qp_timeout_jiffies);
   goto exit;

  case 135:
   if (!VAR_21 || (VAR_21->state == VAR_17)) {
    goto exit;
   }




   if (VAR_19->comp.started_retry &&
       !VAR_19->comp.timeout_retry) {
    if (VAR_23) {
     FUNC_21(VAR_23->qp);
     FUNC_11(VAR_22);
     VAR_22 = ((void*)0);
    }

    goto done;
   }

   if (VAR_19->comp.retry_cnt > 0) {
    if (VAR_19->comp.retry_cnt != 7)
     VAR_19->comp.retry_cnt--;





    if (FUNC_14(VAR_19->req.psn,
      VAR_19->comp.psn) > 0) {



     FUNC_19(VAR_20,
       VAR_10);
     VAR_19->req.need_retry = 1;
     VAR_19->comp.started_retry = 1;
     FUNC_23(&VAR_19->req.task, 1);
    }

    if (VAR_23) {
     FUNC_21(VAR_23->qp);
     FUNC_11(VAR_22);
     VAR_22 = ((void*)0);
    }

    goto done;

   } else {
    FUNC_19(VAR_20, VAR_11);
    VAR_21->status = VAR_4;
    VAR_24 = 136;
   }
   break;

  case 130:
   if (VAR_19->comp.rnr_retry > 0) {
    if (VAR_19->comp.rnr_retry != 7)
     VAR_19->comp.rnr_retry--;

    VAR_19->req.need_retry = 1;
    FUNC_13("qp#%d set rnr nak timer\n",
      FUNC_15(VAR_19));
    FUNC_12(&VAR_19->rnr_nak_timer,
       VAR_15 + FUNC_17(FUNC_2(VAR_23)
      & ~VAR_0));
    FUNC_21(VAR_23->qp);
    FUNC_11(VAR_22);
    VAR_22 = ((void*)0);
    goto exit;
   } else {
    FUNC_19(VAR_20,
      VAR_12);
    VAR_21->status = VAR_5;
    VAR_24 = 136;
   }
   break;

  case 136:
   FUNC_1(VAR_21->status == VAR_6);
   FUNC_8(VAR_19, VAR_21);
   FUNC_22(VAR_19);

   if (VAR_23) {
    FUNC_21(VAR_23->qp);
    FUNC_11(VAR_22);
    VAR_22 = ((void*)0);
   }

   goto exit;
  }
 }

exit:



 FUNC_1(VAR_22);
 FUNC_21(VAR_19);
 return -VAR_2;

done:



 FUNC_1(VAR_22);
 FUNC_21(VAR_19);
 return 0;
}
