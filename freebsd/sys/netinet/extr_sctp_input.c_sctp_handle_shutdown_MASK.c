
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct socket {int dummy; } ;
struct sctp_association {int state; int sent_queue; int send_queue; int time_entered; int refcnt; TYPE_2__* control_pdapi; struct sctp_stream_in* strmin; } ;
struct sctp_tcb {int sctp_ep; scalar_t__ sctp_socket; struct sctp_association asoc; } ;
struct sctp_stream_in {int inqueue; int uno_inqueue; } ;
struct TYPE_4__ {int chunk_length; } ;
struct sctp_shutdown_chunk {TYPE_1__ ch; } ;
struct sctp_nets {int dummy; } ;
struct TYPE_5__ {scalar_t__ on_strm_q; size_t sinfo_stream; int end_added; int pdapi_aborted; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sctp_tcb*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct socket* FUNC_5 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (struct sctp_tcb*,int) ;
 int FUNC_7 (struct socket*,int) ;
 int FUNC_8 (struct socket*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct sctp_tcb*) ;
 int FUNC_11 (struct sctp_tcb*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,TYPE_2__*,int ) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int *,int) ;
 int VAR_16 ;
 int FUNC_16 (int ) ;
 int FUNC_17 (char*,TYPE_2__*,scalar_t__) ;
 int FUNC_18 (struct sctp_tcb*,int ) ;
 int FUNC_19 (struct sctp_tcb*,struct sctp_nets*) ;
 int FUNC_20 (int ,scalar_t__) ;
 int FUNC_21 (struct sctp_tcb*) ;
 int FUNC_22 (int ,int ,struct sctp_tcb*,struct sctp_nets*) ;
 int FUNC_23 (int ,int ,struct sctp_tcb*,struct sctp_nets*,scalar_t__) ;
 int FUNC_24 (int ,struct sctp_tcb*,int ,int *,int ) ;
 int FUNC_25 (struct sctp_tcb*,struct sctp_shutdown_chunk*,int*) ;
 int VAR_17 ;

__attribute__((used)) static void
FUNC_26(struct sctp_shutdown_chunk *VAR_18,
    struct sctp_tcb *VAR_19, struct sctp_nets *VAR_20, int *VAR_21)
{
 struct sctp_association *VAR_22;
 int VAR_23;
 int VAR_24;




 FUNC_0(VAR_0,
     "sctp_handle_shutdown: handling SHUTDOWN\n");
 if (VAR_19 == ((void*)0))
  return;
 VAR_22 = &VAR_19->asoc;
 if ((FUNC_2(VAR_19) == VAR_9) ||
     (FUNC_2(VAR_19) == VAR_8)) {
  return;
 }
 if (FUNC_16(VAR_18->ch.chunk_length) != sizeof(struct sctp_shutdown_chunk)) {

  return;
 }
 VAR_24 = FUNC_2(VAR_19);
 FUNC_25(VAR_19, VAR_18, VAR_21);
 if (*VAR_21) {
  return;
 }
 if (VAR_22->control_pdapi) {



  FUNC_3(VAR_19->sctp_ep);
  if (VAR_22->control_pdapi->on_strm_q) {
   struct sctp_stream_in *VAR_25;

   VAR_25 = &VAR_22->strmin[VAR_22->control_pdapi->sinfo_stream];
   if (VAR_22->control_pdapi->on_strm_q == VAR_5) {

    FUNC_13(&VAR_25->uno_inqueue, VAR_22->control_pdapi, VAR_16);
    VAR_22->control_pdapi->on_strm_q = 0;
   } else if (VAR_22->control_pdapi->on_strm_q == VAR_4) {

    FUNC_13(&VAR_25->inqueue, VAR_22->control_pdapi, VAR_16);
    VAR_22->control_pdapi->on_strm_q = 0;






   }
  }
  VAR_22->control_pdapi->end_added = 1;
  VAR_22->control_pdapi->pdapi_aborted = 1;
  VAR_22->control_pdapi = ((void*)0);
  FUNC_4(VAR_19->sctp_ep);
  if (VAR_19->sctp_socket) {
   FUNC_20(VAR_19->sctp_ep, VAR_19->sctp_socket);
  }



 }

 if (VAR_19->sctp_socket) {
  if ((FUNC_2(VAR_19) != VAR_12) &&
      (FUNC_2(VAR_19) != VAR_11) &&
      (FUNC_2(VAR_19) != VAR_13)) {
   FUNC_6(VAR_19, VAR_12);




   FUNC_24(VAR_3, VAR_19, 0, ((void*)0), VAR_6);


   (void)FUNC_1(&VAR_22->time_entered);
  }
 }
 if (FUNC_2(VAR_19) == VAR_13) {




  FUNC_23(VAR_14, VAR_19->sctp_ep, VAR_19,
      VAR_20, VAR_1 + VAR_2);
 }

 VAR_23 = FUNC_18(VAR_19, VAR_6);

 if (!FUNC_12(&VAR_22->send_queue) ||
     !FUNC_12(&VAR_22->sent_queue) ||
     VAR_23) {

  return;
 } else {



  if ((FUNC_2(VAR_19) == VAR_10) ||
      (FUNC_2(VAR_19) == VAR_12)) {
   FUNC_9(VAR_17);
  }
  if (FUNC_2(VAR_19) != VAR_11) {
   FUNC_6(VAR_19, VAR_11);
   FUNC_21(VAR_19);
   FUNC_19(VAR_19, VAR_20);
   FUNC_22(VAR_15,
       VAR_19->sctp_ep, VAR_19, VAR_20);
  } else if (VAR_24 == VAR_11) {
   FUNC_19(VAR_19, VAR_20);
  }
 }
}
