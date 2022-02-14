
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct sctp_tmit_chunk {int whoTo; } ;
struct TYPE_15__ {scalar_t__ num_send_timers_up; scalar_t__ sent_queue_cnt; int sent_queue; TYPE_7__* deleted_primary; TYPE_5__* primary_destination; } ;
struct sctp_tcb {int sctp_ep; TYPE_6__ asoc; } ;
struct sctp_nets {int dest_state; } ;
struct TYPE_10__ {int sa; } ;
struct TYPE_11__ {TYPE_1__ _l_addr; } ;
struct TYPE_16__ {TYPE_2__ ro; } ;
struct TYPE_12__ {int sa; } ;
struct TYPE_13__ {TYPE_3__ _l_addr; } ;
struct TYPE_14__ {TYPE_4__ ro; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct sctp_tcb*) ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 struct sctp_tmit_chunk* FUNC_5 (int *) ;
 int FUNC_6 (int,int ,struct sctp_tcb*,TYPE_7__*) ;
 int FUNC_7 (int ,struct sctp_tcb*,int ,int ) ;
 int FUNC_8 (int ,struct sctp_tcb*,TYPE_7__*) ;
 int FUNC_9 (int ,int ,struct sctp_tcb*,int ) ;
 int FUNC_10 (int ,int ,struct sctp_tcb*,TYPE_7__*,scalar_t__) ;

void
FUNC_11(struct sctp_tcb *VAR_7, struct sctp_nets *VAR_8)
{
 int VAR_9;

 if (VAR_8->dest_state & VAR_0) {
  return;
 }
 if (VAR_7->asoc.deleted_primary == ((void*)0)) {
  return;
 }

 if (!FUNC_4(&VAR_7->asoc.sent_queue)) {
  FUNC_0(VAR_1, "assoc_immediate_retrans: Deleted primary is ");
  FUNC_1(VAR_1, &VAR_7->asoc.deleted_primary->ro._l_addr.sa);
  FUNC_0(VAR_1, "Current Primary is ");
  FUNC_1(VAR_1, &VAR_7->asoc.primary_destination->ro._l_addr.sa);
  FUNC_10(VAR_6, VAR_7->sctp_ep, VAR_7,
      VAR_7->asoc.deleted_primary,
      VAR_2 + VAR_3);
  VAR_7->asoc.num_send_timers_up--;
  if (VAR_7->asoc.num_send_timers_up < 0) {
   VAR_7->asoc.num_send_timers_up = 0;
  }
  FUNC_3(VAR_7);
  VAR_9 = FUNC_8(VAR_7->sctp_ep, VAR_7,
      VAR_7->asoc.deleted_primary);
  if (VAR_9) {
   FUNC_2(VAR_7->sctp_ep);
   return;
  }
  FUNC_3(VAR_7);



  FUNC_7(VAR_7->sctp_ep, VAR_7, VAR_4, VAR_5);
  if ((VAR_7->asoc.num_send_timers_up == 0) &&
      (VAR_7->asoc.sent_queue_cnt > 0)) {
   struct sctp_tmit_chunk *VAR_10;

   VAR_10 = FUNC_5(&VAR_7->asoc.sent_queue);
   FUNC_9(VAR_6, VAR_7->sctp_ep,
       VAR_7, VAR_10->whoTo);
  }
 }
 return;
}
