
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_12__ {scalar_t__ tsn; scalar_t__ chunk_was_revoked; size_t sid; scalar_t__ doing_fast_retransmit; } ;
struct TYPE_13__ {TYPE_3__ data; } ;
struct sctp_tmit_chunk {scalar_t__ sent; int snd_count; TYPE_4__ rec; int * data; scalar_t__ book_size; TYPE_5__* whoTo; scalar_t__ do_rtt; int sent_rcv_time; scalar_t__ send_size; } ;
struct TYPE_10__ {int (* sctp_cwnd_update_tsn_acknowledged ) (TYPE_5__*,struct sctp_tmit_chunk*) ;} ;
struct TYPE_15__ {unsigned int this_sack_highest_gap; int sent_queue_retran_cnt; int trigger_reset; int sent_queue; TYPE_2__* strmout; TYPE_1__ cc_functions; } ;
struct sctp_tcb {TYPE_7__ asoc; } ;
struct TYPE_14__ {int find_pseudo_cumack; scalar_t__ pseudo_cumack; int find_rtx_pseudo_cumack; scalar_t__ rtx_pseudo_cumack; int saw_newack; unsigned int this_sack_highest_newack; int new_pseudo_cumack; int rto_needed; int cwnd; int net_ack2; int net_ack; int flight_size; } ;
struct TYPE_11__ {scalar_t__ chunks_on_queues; scalar_t__ state; int outqueue; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_1 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_2 (int *) ;
 struct sctp_tmit_chunk* FUNC_3 (int *) ;
 struct sctp_tmit_chunk* FUNC_4 (struct sctp_tmit_chunk*,int ) ;
 int FUNC_5 (char*,size_t) ;
 int FUNC_6 (int,int) ;
 scalar_t__ FUNC_7 (struct sctp_tcb*,TYPE_7__*,TYPE_5__*,int *,int ) ;
 int FUNC_8 (struct sctp_tmit_chunk*) ;
 int FUNC_9 (struct sctp_tcb*,TYPE_7__*,struct sctp_tmit_chunk*,int) ;
 int FUNC_10 (struct sctp_tcb*,TYPE_5__*,scalar_t__,int ) ;
 int FUNC_11 (int,int,unsigned int,int,int,int ) ;
 int VAR_13 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int ,scalar_t__,int,unsigned int) ;
 int VAR_14 ;
 int FUNC_14 (struct sctp_tcb*,struct sctp_tmit_chunk*) ;
 int FUNC_15 (int) ;
 int FUNC_16 (TYPE_5__*,struct sctp_tmit_chunk*) ;

__attribute__((used)) static int
FUNC_17(struct sctp_tcb *VAR_15, struct sctp_tmit_chunk **VAR_16, uint32_t VAR_17,
    uint16_t VAR_18, uint16_t VAR_19, int VAR_20,
    int *VAR_21,
    uint32_t *VAR_22,
    uint32_t *VAR_23,
    int *VAR_24)
{
 struct sctp_tmit_chunk *VAR_25;
 unsigned int VAR_26;
 int VAR_27, VAR_28 = 0, VAR_29 = 0;


 VAR_25 = *VAR_16;
 if (VAR_25 == ((void*)0)) {
  VAR_25 = FUNC_3(&VAR_15->asoc.sent_queue);
 }
 for (VAR_27 = VAR_18; VAR_27 <= VAR_19; VAR_27++) {
  VAR_26 = VAR_27 + VAR_17;
  while (VAR_25) {
   if (VAR_25->rec.data.doing_fast_retransmit)
    (*VAR_21) += 1;
   if ((VAR_25->sent < VAR_4) &&
       (VAR_25->whoTo->find_pseudo_cumack == 1) &&
       (VAR_25->snd_count == 1)) {
    VAR_25->whoTo->pseudo_cumack = VAR_25->rec.data.tsn;
    VAR_25->whoTo->find_pseudo_cumack = 0;
   }
   if ((VAR_25->sent < VAR_4) &&
       (VAR_25->whoTo->find_rtx_pseudo_cumack == 1) &&
       (VAR_25->snd_count > 1)) {
    VAR_25->whoTo->rtx_pseudo_cumack = VAR_25->rec.data.tsn;
    VAR_25->whoTo->find_rtx_pseudo_cumack = 0;
   }
   if (VAR_25->rec.data.tsn == VAR_26) {
    if (VAR_25->sent != VAR_5) {




     if (VAR_25->sent < VAR_4) {







      if (FUNC_1(VAR_25->rec.data.tsn,
          *VAR_22)) {
       *VAR_22 = VAR_25->rec.data.tsn;
      }







      if (VAR_25->rec.data.chunk_was_revoked == 0)
       VAR_25->whoTo->saw_newack = 1;

      if (FUNC_1(VAR_25->rec.data.tsn,
          VAR_25->whoTo->this_sack_highest_newack)) {
       VAR_25->whoTo->this_sack_highest_newack =
           VAR_25->rec.data.tsn;
      }




      if (*VAR_23 == 0) {
       if (FUNC_0(VAR_13) & VAR_11) {
        FUNC_11(*VAR_23,
            VAR_17,
            VAR_25->rec.data.tsn,
            0,
            0,
            VAR_9);
       }
       *VAR_23 = VAR_25->rec.data.tsn;
      }
      if (VAR_25->rec.data.tsn == VAR_25->whoTo->pseudo_cumack) {
       if (VAR_25->rec.data.chunk_was_revoked == 0) {
        VAR_25->whoTo->new_pseudo_cumack = 1;
       }
       VAR_25->whoTo->find_pseudo_cumack = 1;
      }
      if (FUNC_0(VAR_13) & VAR_0) {
       FUNC_10(VAR_15, VAR_25->whoTo, VAR_25->rec.data.tsn, VAR_1);
      }
      if (VAR_25->rec.data.tsn == VAR_25->whoTo->rtx_pseudo_cumack) {
       if (VAR_25->rec.data.chunk_was_revoked == 0) {
        VAR_25->whoTo->new_pseudo_cumack = 1;
       }
       VAR_25->whoTo->find_rtx_pseudo_cumack = 1;
      }
      if (FUNC_0(VAR_13) & VAR_11) {
       FUNC_11(*VAR_22,
           VAR_17,
           VAR_25->rec.data.tsn,
           VAR_18,
           VAR_19,
           VAR_9);
      }
      if (FUNC_0(VAR_13) & VAR_6) {
       FUNC_13(VAR_7,
           VAR_25->whoTo->flight_size,
           VAR_25->book_size,
           (uint32_t)(uintptr_t)VAR_25->whoTo,
           VAR_25->rec.data.tsn);
      }
      FUNC_8(VAR_25);
      if (VAR_15->asoc.cc_functions.sctp_cwnd_update_tsn_acknowledged) {
       (*VAR_15->asoc.cc_functions.sctp_cwnd_update_tsn_acknowledged) (VAR_25->whoTo,
           VAR_25);
      }
      FUNC_14(VAR_15, VAR_25);

      VAR_25->whoTo->net_ack += VAR_25->send_size;
      if (VAR_25->snd_count < 2) {



       VAR_25->whoTo->net_ack2 += VAR_25->send_size;




       if (VAR_25->do_rtt) {
        if (*VAR_24 &&
            FUNC_7(VAR_15,
            &VAR_15->asoc,
            VAR_25->whoTo,
            &VAR_25->sent_rcv_time,
            VAR_10)) {
         *VAR_24 = 0;
        }
        if (VAR_25->whoTo->rto_needed == 0) {
         VAR_25->whoTo->rto_needed = 1;
        }
        VAR_25->do_rtt = 0;
       }
      }

     }
     if (VAR_25->sent <= VAR_4) {
      if (FUNC_1(VAR_25->rec.data.tsn,
          VAR_15->asoc.this_sack_highest_gap)) {
       VAR_15->asoc.this_sack_highest_gap =
           VAR_25->rec.data.tsn;
      }
      if (VAR_25->sent == VAR_4) {
       FUNC_15(VAR_15->asoc.sent_queue_retran_cnt);




      }
     }




     if ((VAR_25->sent != VAR_8) &&
         (VAR_25->sent != VAR_3)) {
      VAR_25->sent = VAR_2;
     }
     if (VAR_25->rec.data.chunk_was_revoked) {

      VAR_25->whoTo->cwnd -= VAR_25->book_size;
      VAR_25->rec.data.chunk_was_revoked = 0;
     }

     if (VAR_20 &&
         (VAR_25->sent != VAR_3)) {
      if (VAR_15->asoc.strmout[VAR_25->rec.data.sid].chunks_on_queues > 0) {
       VAR_15->asoc.strmout[VAR_25->rec.data.sid].chunks_on_queues--;




      }
      if ((VAR_15->asoc.strmout[VAR_25->rec.data.sid].chunks_on_queues == 0) &&
          (VAR_15->asoc.strmout[VAR_25->rec.data.sid].state == VAR_12) &&
          FUNC_2(&VAR_15->asoc.strmout[VAR_25->rec.data.sid].outqueue)) {
       VAR_15->asoc.trigger_reset = 1;
      }
      VAR_25->sent = VAR_3;
      if (VAR_25->data) {




       FUNC_9(VAR_15, &VAR_15->asoc, VAR_25, 1);
       FUNC_12(VAR_25->data);
       VAR_25->data = ((void*)0);
      }
      VAR_28++;
     }
    }
    break;
   }
   if (FUNC_1(VAR_25->rec.data.tsn, VAR_26)) {
    break;
   }
   VAR_25 = FUNC_4(VAR_25, VAR_14);
   if ((VAR_25 == ((void*)0)) && (VAR_29 == 0)) {
    VAR_29++;
    VAR_25 = FUNC_3(&VAR_15->asoc.sent_queue);
   }
  }
  if (VAR_25 == ((void*)0)) {
   VAR_29 = 0;
   VAR_25 = FUNC_3(&VAR_15->asoc.sent_queue);
  }

 }
 *VAR_16 = VAR_25;
 return (VAR_28);
}
