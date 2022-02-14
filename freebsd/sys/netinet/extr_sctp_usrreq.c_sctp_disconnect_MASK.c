
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sb_cc; } ;
struct socket {int so_options; scalar_t__ so_linger; TYPE_1__ so_rcv; scalar_t__ so_pcb; } ;
struct TYPE_4__ {scalar_t__ (* sctp_ss_is_user_msgs_incomplete ) (struct sctp_tcb*,struct sctp_association*) ;} ;
struct sctp_association {int state; scalar_t__ stream_queue_cnt; int sent_queue; int send_queue; TYPE_2__ ss_functions; struct sctp_nets* primary_destination; struct sctp_nets* alternate; } ;
struct sctp_tcb {struct sctp_inpcb* sctp_ep; struct sctp_association asoc; } ;
struct sctp_nets {int dummy; } ;
struct sctp_inpcb {int sctp_flags; scalar_t__ last_abort_code; int sctp_asoc_list; } ;
struct mbuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 struct sctp_tcb* FUNC_1 (int *) ;
 int FUNC_2 (struct sctp_tcb*,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (struct sctp_tcb*) ;
 int FUNC_4 (struct sctp_inpcb*) ;
 int FUNC_5 (struct sctp_inpcb*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (struct sctp_inpcb*,int *,int *,scalar_t__,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (struct sctp_tcb*,scalar_t__) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct sctp_tcb*) ;
 int FUNC_11 (struct sctp_tcb*) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (struct sctp_inpcb*,struct sctp_tcb*,int ,int ) ;
 int FUNC_14 (struct sctp_inpcb*,struct sctp_tcb*,int ,scalar_t__) ;
 struct mbuf* FUNC_15 (int ,char*) ;
 int FUNC_16 (struct sctp_tcb*,struct mbuf*,int ) ;
 int FUNC_17 (struct sctp_tcb*,struct sctp_nets*) ;
 int FUNC_18 (struct sctp_tcb*) ;
 int FUNC_19 (int ,struct sctp_inpcb*,struct sctp_tcb*,struct sctp_nets*) ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_20 (struct socket*) ;
 scalar_t__ FUNC_21 (struct sctp_tcb*,struct sctp_association*) ;
 scalar_t__ FUNC_22 (struct sctp_tcb*,struct sctp_association*) ;

int
FUNC_23(struct socket *VAR_27)
{
 struct sctp_inpcb *VAR_28;

 VAR_28 = (struct sctp_inpcb *)VAR_27->so_pcb;
 if (VAR_28 == ((void*)0)) {
  FUNC_6(VAR_28, ((void*)0), ((void*)0), VAR_4, VAR_1);
  return (VAR_1);
 }
 FUNC_4(VAR_28);
 if ((VAR_28->sctp_flags & VAR_12) ||
     (VAR_28->sctp_flags & VAR_11)) {
  if (FUNC_0(&VAR_28->sctp_asoc_list)) {

   FUNC_5(VAR_28);
   return (0);
  } else {
   struct sctp_association *VAR_29;
   struct sctp_tcb *VAR_30;

   VAR_30 = FUNC_1(&VAR_28->sctp_asoc_list);
   if (VAR_30 == ((void*)0)) {
    FUNC_5(VAR_28);
    FUNC_6(VAR_28, ((void*)0), ((void*)0), VAR_4, VAR_0);
    return (VAR_0);
   }
   FUNC_10(VAR_30);
   VAR_29 = &VAR_30->asoc;
   if (VAR_30->asoc.state & VAR_14) {

    FUNC_11(VAR_30);
    FUNC_5(VAR_28);
    return (0);
   }
   if (((VAR_27->so_options & VAR_24) &&
       (VAR_27->so_linger == 0)) ||
       (VAR_27->so_rcv.sb_cc > 0)) {
    if (FUNC_3(VAR_30) != VAR_15) {

     struct mbuf *VAR_31;

     VAR_31 = FUNC_15(VAR_3, "");
     FUNC_16(VAR_30, VAR_31, VAR_13);
     FUNC_9(VAR_25);
    }
    FUNC_5(VAR_28);
    if ((FUNC_3(VAR_30) == VAR_16) ||
        (FUNC_3(VAR_30) == VAR_20)) {
     FUNC_8(VAR_26);
    }
    (void)FUNC_14(VAR_28, VAR_30, VAR_8,
        VAR_4 + VAR_5);

    return (0);
   }
   if (FUNC_12(&VAR_29->send_queue) &&
       FUNC_12(&VAR_29->sent_queue) &&
       (VAR_29->stream_queue_cnt == 0)) {

    if ((*VAR_29->ss_functions.sctp_ss_is_user_msgs_incomplete) (VAR_30, VAR_29)) {
     goto abort_anyway;
    }
    if ((FUNC_3(VAR_30) != VAR_21) &&
        (FUNC_3(VAR_30) != VAR_18)) {

     struct sctp_nets *VAR_32;

     if ((FUNC_3(VAR_30) == VAR_16) ||
         (FUNC_3(VAR_30) == VAR_20)) {
      FUNC_8(VAR_26);
     }
     FUNC_7(VAR_30, VAR_21);
     FUNC_18(VAR_30);
     if (VAR_30->asoc.alternate) {
      VAR_32 = VAR_30->asoc.alternate;
     } else {
      VAR_32 = VAR_30->asoc.primary_destination;
     }
     FUNC_17(VAR_30, VAR_32);
     FUNC_19(VAR_22,
         VAR_30->sctp_ep, VAR_30, VAR_32);
     FUNC_19(VAR_23,
         VAR_30->sctp_ep, VAR_30, VAR_32);
     FUNC_13(VAR_30->sctp_ep, VAR_30, VAR_10, VAR_13);
    }
   } else {
    struct sctp_nets *VAR_33;

    if (VAR_30->asoc.alternate) {
     VAR_33 = VAR_30->asoc.alternate;
    } else {
     VAR_33 = VAR_30->asoc.primary_destination;
    }

    FUNC_2(VAR_30, VAR_19);
    FUNC_19(VAR_23, VAR_30->sctp_ep, VAR_30,
        VAR_33);
    if ((*VAR_29->ss_functions.sctp_ss_is_user_msgs_incomplete) (VAR_30, VAR_29)) {
     FUNC_2(VAR_30, VAR_17);
    }
    if (FUNC_12(&VAR_29->send_queue) &&
        FUNC_12(&VAR_29->sent_queue) &&
        (VAR_29->state & VAR_17)) {
     struct mbuf *VAR_34;

   abort_anyway:
     VAR_34 = FUNC_15(VAR_3, "");
     VAR_30->sctp_ep->last_abort_code = VAR_4 + VAR_6;
     FUNC_16(VAR_30, VAR_34, VAR_13);
     FUNC_9(VAR_25);
     if ((FUNC_3(VAR_30) == VAR_16) ||
         (FUNC_3(VAR_30) == VAR_20)) {
      FUNC_8(VAR_26);
     }
     FUNC_5(VAR_28);
     (void)FUNC_14(VAR_28, VAR_30, VAR_8,
         VAR_4 + VAR_7);
     return (0);
    } else {
     FUNC_13(VAR_28, VAR_30, VAR_9, VAR_13);
    }
   }
   FUNC_20(VAR_27);
   FUNC_11(VAR_30);
   FUNC_5(VAR_28);
   return (0);
  }

 } else {

  FUNC_5(VAR_28);
  FUNC_6(VAR_28, ((void*)0), ((void*)0), VAR_4, VAR_2);
  return (VAR_2);
 }
}
