
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int rcv_flags; int ppid; int tsn; int fsn; } ;
struct TYPE_4__ {TYPE_1__ data; } ;
struct sctp_tmit_chunk {TYPE_2__ rec; int * data; scalar_t__ send_size; } ;
struct sctp_tcb {int sctp_ep; } ;
struct sctp_stream_in {int inqueue; int uno_inqueue; scalar_t__ pd_api_started; } ;
struct sctp_queued_to_read {int first_frag_seen; scalar_t__ on_strm_q; int end_added; int last_frag_seen; scalar_t__ pdapi_started; scalar_t__ on_read_q; int sinfo_ppid; int sinfo_tsn; int fsn_included; int * data; } ;
struct sctp_association {int cnt_on_all_streams; int cnt_on_reasm_queue; int size_on_reasm_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,struct sctp_queued_to_read*,int ) ;
 int VAR_5 ;
 int FUNC_3 (char*,struct sctp_queued_to_read*,scalar_t__) ;
 int FUNC_4 (struct sctp_queued_to_read*,int *,int *) ;
 int FUNC_5 (struct sctp_tcb*,struct sctp_tmit_chunk*,int ) ;
 int FUNC_6 (struct sctp_association*,int ) ;
 int FUNC_7 (struct sctp_queued_to_read*) ;
 int FUNC_8 (int ) ;

uint32_t
FUNC_9(struct sctp_queued_to_read *VAR_6,
    struct sctp_stream_in *VAR_7,
    struct sctp_tcb *VAR_8, struct sctp_association *VAR_9,
    struct sctp_tmit_chunk *VAR_10, int VAR_11)
{




 uint32_t VAR_12 = 0;
 int VAR_13 = 0;

 if (VAR_6->on_read_q && (VAR_11 == 0)) {



  FUNC_0(VAR_8->sctp_ep);
  VAR_13 = 1;
 }
 if (VAR_6->data == ((void*)0)) {
  VAR_6->data = VAR_10->data;
  FUNC_7(VAR_6);
 } else {
  FUNC_4(VAR_6, VAR_10->data, &VAR_12);
 }
 VAR_6->fsn_included = VAR_10->rec.data.fsn;
 VAR_9->size_on_reasm_queue -= VAR_10->send_size;
 FUNC_8(VAR_9->cnt_on_reasm_queue);
 FUNC_6(VAR_9, VAR_10->rec.data.tsn);
 VAR_10->data = ((void*)0);
 if (VAR_10->rec.data.rcv_flags & VAR_0) {
  VAR_6->first_frag_seen = 1;
  VAR_6->sinfo_tsn = VAR_10->rec.data.tsn;
  VAR_6->sinfo_ppid = VAR_10->rec.data.ppid;
 }
 if (VAR_10->rec.data.rcv_flags & VAR_1) {

  if ((VAR_6->on_strm_q) && (VAR_6->on_read_q)) {
   if (VAR_6->pdapi_started) {
    VAR_6->pdapi_started = 0;
    VAR_7->pd_api_started = 0;
   }
   if (VAR_6->on_strm_q == VAR_3) {

    FUNC_2(&VAR_7->uno_inqueue, VAR_6, VAR_5);
    VAR_6->on_strm_q = 0;
   } else if (VAR_6->on_strm_q == VAR_2) {

    FUNC_2(&VAR_7->inqueue, VAR_6, VAR_5);





    FUNC_8(VAR_9->cnt_on_all_streams);
    VAR_6->on_strm_q = 0;





   }
  }
  VAR_6->end_added = 1;
  VAR_6->last_frag_seen = 1;
 }
 if (VAR_13) {
  FUNC_1(VAR_8->sctp_ep);
 }
 FUNC_5(VAR_8, VAR_10, VAR_4);
 return (VAR_12);
}
