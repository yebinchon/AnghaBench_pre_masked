
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_sec; } ;
struct sctp_association {int sctp_autoclose_ticks; struct sctp_nets* primary_destination; struct sctp_nets* alternate; int sent_queue; int send_queue; struct timeval time_last_sent; struct timeval time_last_rcvd; } ;
struct sctp_tcb {struct sctp_inpcb* sctp_ep; struct sctp_association asoc; } ;
struct sctp_nets {int dummy; } ;
struct sctp_inpcb {int dummy; } ;


 int FUNC_0 (struct timeval*) ;
 scalar_t__ FUNC_1 (struct sctp_tcb*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct sctp_tcb*,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct sctp_inpcb*,struct sctp_tcb*,int ,int ) ;
 scalar_t__ FUNC_7 (struct sctp_inpcb*,int ) ;
 int FUNC_8 (struct sctp_tcb*,struct sctp_nets*) ;
 int FUNC_9 (struct sctp_tcb*) ;
 int FUNC_10 (int ,struct sctp_inpcb*,struct sctp_tcb*,struct sctp_nets*) ;
 int VAR_9 ;

void
FUNC_11(struct sctp_inpcb *VAR_10,
    struct sctp_tcb *VAR_11,
    struct sctp_nets *VAR_12)
{
 struct timeval VAR_13, *VAR_14;
 struct sctp_association *VAR_15;
 int VAR_16;

 (void)FUNC_0(&VAR_13);
 if (VAR_11->asoc.sctp_autoclose_ticks &&
     FUNC_7(VAR_10, VAR_1)) {

  VAR_15 = &VAR_11->asoc;

  if (VAR_15->time_last_rcvd.tv_sec >
      VAR_15->time_last_sent.tv_sec) {
   VAR_14 = &VAR_15->time_last_rcvd;
  } else {
   VAR_14 = &VAR_15->time_last_sent;
  }

  VAR_16 = FUNC_4(VAR_13.tv_sec - VAR_14->tv_sec);
  if ((VAR_16 > 0) &&
      (VAR_16 >= (int)VAR_15->sctp_autoclose_ticks)) {







   FUNC_6(VAR_10, VAR_11, VAR_0, VAR_2);

   if (FUNC_5(&VAR_15->send_queue) &&
       FUNC_5(&VAR_15->sent_queue)) {




    if (FUNC_1(VAR_11) != VAR_5) {

     struct sctp_nets *VAR_17;

     if ((FUNC_1(VAR_11) == VAR_3) ||
         (FUNC_1(VAR_11) == VAR_4)) {
      FUNC_3(VAR_9);
     }
     FUNC_2(VAR_11, VAR_5);
     FUNC_9(VAR_11);
     if (VAR_11->asoc.alternate) {
      VAR_17 = VAR_11->asoc.alternate;
     } else {
      VAR_17 = VAR_11->asoc.primary_destination;
     }
     FUNC_8(VAR_11, VAR_17);
     FUNC_10(VAR_7,
         VAR_11->sctp_ep, VAR_11,
         VAR_17);
     FUNC_10(VAR_8,
         VAR_11->sctp_ep, VAR_11,
         VAR_17);
    }
   }
  } else {




   int VAR_18;


   VAR_18 = VAR_15->sctp_autoclose_ticks;
   VAR_15->sctp_autoclose_ticks -= VAR_16;
   FUNC_10(VAR_6, VAR_10, VAR_11,
       VAR_12);

   VAR_15->sctp_autoclose_ticks = VAR_18;
  }
 }
}
