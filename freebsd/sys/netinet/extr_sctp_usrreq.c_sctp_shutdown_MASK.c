
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int sb_state; } ;
struct socket {int so_state; TYPE_4__ so_rcv; scalar_t__ so_pcb; } ;
struct TYPE_6__ {scalar_t__ (* sctp_ss_is_user_msgs_incomplete ) (struct sctp_tcb*,struct sctp_association*) ;} ;
struct sctp_association {int state; scalar_t__ stream_queue_cnt; int sent_queue; int send_queue; TYPE_1__ ss_functions; struct sctp_nets* primary_destination; struct sctp_nets* alternate; } ;
struct sctp_tcb {TYPE_2__* sctp_ep; struct sctp_association asoc; } ;
struct sctp_nets {int dummy; } ;
struct sctp_inpcb {int sctp_flags; int sctp_asoc_list; } ;
struct mbuf {int dummy; } ;
struct TYPE_7__ {scalar_t__ last_abort_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sctp_tcb* FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (struct sctp_tcb*,int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (struct sctp_tcb*) ;
 int FUNC_3 (struct sctp_inpcb*) ;
 int FUNC_4 (struct sctp_inpcb*) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (struct sctp_inpcb*,int *,int *,scalar_t__,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (struct sctp_tcb*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct sctp_tcb*) ;
 int FUNC_9 (struct sctp_tcb*) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (TYPE_2__*,struct sctp_tcb*,struct mbuf*,int ) ;
 int FUNC_14 (struct sctp_inpcb*,struct sctp_tcb*,int ,int ) ;
 struct mbuf* FUNC_15 (int ,char*) ;
 int FUNC_16 (struct sctp_tcb*,struct sctp_nets*) ;
 int FUNC_17 (struct sctp_tcb*) ;
 int FUNC_18 (int ,TYPE_2__*,struct sctp_tcb*,struct sctp_nets*) ;
 int VAR_23 ;
 int FUNC_19 (struct socket*) ;
 scalar_t__ FUNC_20 (struct sctp_tcb*,struct sctp_association*) ;
 scalar_t__ FUNC_21 (struct sctp_tcb*,struct sctp_association*) ;

int
FUNC_22(struct socket *VAR_24)
{
 struct sctp_inpcb *VAR_25;

 VAR_25 = (struct sctp_inpcb *)VAR_24->so_pcb;
 if (VAR_25 == ((void*)0)) {
  FUNC_5(VAR_25, ((void*)0), ((void*)0), VAR_5, VAR_0);
  return (VAR_0);
 }
 FUNC_3(VAR_25);

 if (!((VAR_25->sctp_flags & VAR_9) ||
     (VAR_25->sctp_flags & VAR_8))) {

  FUNC_10(&VAR_24->so_rcv);
  VAR_24->so_rcv.sb_state &= ~VAR_3;
  FUNC_11(&VAR_24->so_rcv);

  FUNC_4(VAR_25);
  FUNC_5(VAR_25, ((void*)0), ((void*)0), VAR_5, VAR_2);
  return (VAR_2);
 } else {





  struct sctp_tcb *VAR_26;
  struct sctp_association *VAR_27;
  struct sctp_nets *VAR_28;

  if ((VAR_24->so_state &
      (VAR_20 | VAR_21 | VAR_22)) == 0) {
   FUNC_4(VAR_25);
   return (VAR_1);
  }
  FUNC_19(VAR_24);

  VAR_26 = FUNC_0(&VAR_25->sctp_asoc_list);
  if (VAR_26 == ((void*)0)) {





   FUNC_4(VAR_25);
   return (0);
  }
  FUNC_8(VAR_26);
  VAR_27 = &VAR_26->asoc;
  if (VAR_27->state & VAR_11) {
   FUNC_9(VAR_26);
   FUNC_4(VAR_25);
   return (0);
  }
  if ((FUNC_2(VAR_26) != VAR_13) &&
      (FUNC_2(VAR_26) != VAR_12) &&
      (FUNC_2(VAR_26) != VAR_14)) {




   FUNC_9(VAR_26);
   FUNC_4(VAR_25);
   return (0);
  }
  if (VAR_26->asoc.alternate) {
   VAR_28 = VAR_26->asoc.alternate;
  } else {
   VAR_28 = VAR_26->asoc.primary_destination;
  }
  if ((FUNC_2(VAR_26) == VAR_14) &&
      FUNC_12(&VAR_27->send_queue) &&
      FUNC_12(&VAR_27->sent_queue) &&
      (VAR_27->stream_queue_cnt == 0)) {
   if ((*VAR_27->ss_functions.sctp_ss_is_user_msgs_incomplete) (VAR_26, VAR_27)) {
    goto abort_anyway;
   }

   FUNC_7(VAR_23);
   FUNC_6(VAR_26, VAR_17);
   FUNC_17(VAR_26);
   FUNC_16(VAR_26, VAR_28);
   FUNC_18(VAR_18,
       VAR_26->sctp_ep, VAR_26, VAR_28);
  } else {




   FUNC_1(VAR_26, VAR_16);
   if ((*VAR_27->ss_functions.sctp_ss_is_user_msgs_incomplete) (VAR_26, VAR_27)) {
    FUNC_1(VAR_26, VAR_15);
   }
   if (FUNC_12(&VAR_27->send_queue) &&
       FUNC_12(&VAR_27->sent_queue) &&
       (VAR_27->state & VAR_15)) {
    struct mbuf *VAR_29;

  abort_anyway:
    VAR_29 = FUNC_15(VAR_4, "");
    VAR_26->sctp_ep->last_abort_code = VAR_5 + VAR_6;
    FUNC_4(VAR_25);
    FUNC_13(VAR_26->sctp_ep, VAR_26,
        VAR_29, VAR_10);
    return (0);
   }
  }
  FUNC_18(VAR_19, VAR_26->sctp_ep, VAR_26, VAR_28);




  FUNC_14(VAR_25, VAR_26, VAR_7, VAR_10);
  FUNC_9(VAR_26);
  FUNC_4(VAR_25);
  return (0);
 }
}
