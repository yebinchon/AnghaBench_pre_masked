
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int tsn; scalar_t__ chunk_was_revoked; int fast_retran_tsn; int cwnd_at_send; } ;
struct TYPE_7__ {TYPE_1__ data; } ;
struct sctp_tmit_chunk {int snd_count; scalar_t__ send_size; TYPE_2__ rec; struct sctp_nets* whoTo; int book_size; int sent; int sent_rcv_time; scalar_t__ do_rtt; } ;
struct sctp_tcb {TYPE_4__* sctp_ep; } ;
struct sctp_nets {int flight_size; int ref_count; int cwnd; int last_sent_time; } ;
struct TYPE_10__ {int (* sctp_cwnd_update_packet_transmitted ) (struct sctp_tcb*,struct sctp_nets*) ;} ;
struct sctp_association {scalar_t__ peers_rwnd; scalar_t__ total_flight; TYPE_5__ cc_functions; int sent_queue_cnt; int sent_queue; int send_queue_cnt; int send_queue; } ;
struct TYPE_8__ {scalar_t__ sctp_sws_sender; } ;
struct TYPE_9__ {TYPE_3__ sctp_ep; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,struct sctp_tmit_chunk*,struct sctp_tmit_chunk*,int ) ;
 int FUNC_4 (struct sctp_tmit_chunk*,struct sctp_tmit_chunk*,int ) ;
 int FUNC_5 (int *,struct sctp_tmit_chunk*,int ) ;
 struct sctp_tmit_chunk* FUNC_6 (int *,int ) ;
 struct sctp_tmit_chunk* FUNC_7 (struct sctp_tmit_chunk*,int ,int ) ;
 int FUNC_8 (int *,struct sctp_tmit_chunk*,int ) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (struct sctp_tmit_chunk*) ;
 int FUNC_12 (int ,scalar_t__,scalar_t__,int) ;
 int VAR_5 ;
 int FUNC_13 (int ,int ,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_14 (scalar_t__,int ) ;
 int FUNC_15 (struct sctp_tcb*,struct sctp_tmit_chunk*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_16 (struct sctp_tcb*,struct sctp_nets*) ;

__attribute__((used)) static void
FUNC_17(struct sctp_tcb *VAR_10,
    struct sctp_association *VAR_11,
    struct sctp_tmit_chunk **VAR_12,
    int VAR_13,
    struct sctp_nets *VAR_14)
{
 int VAR_15;
 struct sctp_tmit_chunk *VAR_16;

 for (VAR_15 = 0; VAR_15 < VAR_13; VAR_15++) {

  FUNC_8(&VAR_11->send_queue, VAR_12[VAR_15], VAR_6);
  VAR_11->send_queue_cnt--;
  if (VAR_15 > 0) {





   VAR_12[VAR_15]->do_rtt = 0;
  }

  VAR_12[VAR_15]->sent_rcv_time = VAR_14->last_sent_time;
  VAR_12[VAR_15]->rec.data.cwnd_at_send = VAR_14->cwnd;
  VAR_12[VAR_15]->rec.data.fast_retran_tsn = VAR_12[VAR_15]->rec.data.tsn;
  if (VAR_12[VAR_15]->whoTo == ((void*)0)) {
   VAR_12[VAR_15]->whoTo = VAR_14;
   FUNC_9(&VAR_14->ref_count, 1);
  }

  VAR_16 = FUNC_6(&VAR_11->sent_queue, VAR_8);
  if ((VAR_16) && FUNC_2(VAR_16->rec.data.tsn, VAR_12[VAR_15]->rec.data.tsn)) {
   struct sctp_tmit_chunk *VAR_17;


 back_up_more:
   VAR_17 = FUNC_7(VAR_16, VAR_8, VAR_6);
   if (VAR_17 == ((void*)0)) {
    FUNC_4(VAR_16, VAR_12[VAR_15], VAR_6);
    goto all_done;
   }
   VAR_16 = VAR_17;
   if (FUNC_2(VAR_16->rec.data.tsn, VAR_12[VAR_15]->rec.data.tsn)) {
    goto back_up_more;
   }
   FUNC_3(&VAR_11->sent_queue, VAR_16, VAR_12[VAR_15], VAR_6);
  } else {
   FUNC_5(&VAR_11->sent_queue,
       VAR_12[VAR_15],
       VAR_6);
  }
all_done:

  VAR_11->sent_queue_cnt++;
  if ((VAR_11->peers_rwnd <= 0) &&
      (VAR_11->total_flight == 0) &&
      (VAR_13 == 1)) {

   FUNC_1(VAR_9);
  }



  VAR_12[VAR_15]->sent = VAR_0;
  VAR_12[VAR_15]->snd_count = 1;
  VAR_12[VAR_15]->rec.data.chunk_was_revoked = 0;
  if (FUNC_0(VAR_5) & VAR_2) {
   FUNC_13(VAR_3,
       VAR_12[VAR_15]->whoTo->flight_size,
       VAR_12[VAR_15]->book_size,
       (uint32_t)(uintptr_t)VAR_12[VAR_15]->whoTo,
       VAR_12[VAR_15]->rec.data.tsn);
  }
  FUNC_11(VAR_12[VAR_15]);
  FUNC_15(VAR_10, VAR_12[VAR_15]);
  if (FUNC_0(VAR_5) & VAR_4) {
   FUNC_12(VAR_1,
       VAR_11->peers_rwnd, VAR_12[VAR_15]->send_size, FUNC_0(VAR_7));
  }
  VAR_11->peers_rwnd = FUNC_14(VAR_11->peers_rwnd,
      (uint32_t)(VAR_12[VAR_15]->send_size + FUNC_0(VAR_7)));
  if (VAR_11->peers_rwnd < VAR_10->sctp_ep->sctp_ep.sctp_sws_sender) {

   VAR_11->peers_rwnd = 0;
  }
 }
 if (VAR_11->cc_functions.sctp_cwnd_update_packet_transmitted) {
  (*VAR_11->cc_functions.sctp_cwnd_update_packet_transmitted) (VAR_10, VAR_14);
 }
}
