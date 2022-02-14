
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct sctp_tmit_chunk {int dummy; } ;
struct sctp_association {scalar_t__ stream_reset_outstanding; scalar_t__ str_reset_seq_out; int stream_reset_out_is_outstanding; int strm_pending_add_size; int strm_realoutsize; int streamoutcnt; void* mapping_array_base_tsn; void* sending_seq; void* cumulative_tsn; void* last_acked_seq; int mapping_array_size; int nr_mapping_array; void* highest_tsn_inside_map; void* highest_tsn_inside_nr_map; int mapping_array; void* tsn_last_delivered; int streamincnt; TYPE_4__* strmout; } ;
struct sctp_tcb {struct sctp_association asoc; } ;
struct sctp_stream_reset_response_tsn {int receivers_next_tsn; int senders_next_tsn; } ;
struct TYPE_5__ {int param_length; } ;
struct sctp_stream_reset_response {TYPE_1__ ph; } ;
struct TYPE_7__ {int param_length; int param_type; } ;
struct sctp_stream_reset_request {TYPE_3__ ph; } ;
struct sctp_stream_reset_out_request {scalar_t__* list_of_streams; } ;
struct sctp_stream_reset_in_request {scalar_t__* list_of_streams; } ;
struct TYPE_6__ {int chunk_type; int chunk_length; } ;
struct sctp_forward_tsn_chunk {int new_cumulative_tsn; TYPE_2__ ch; } ;
struct TYPE_8__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
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
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sctp_tcb*) ;
 struct sctp_stream_reset_request* FUNC_7 (struct sctp_tcb*,scalar_t__,struct sctp_tmit_chunk**) ;
 int FUNC_8 (struct sctp_tcb*,struct sctp_forward_tsn_chunk*,int*,int *,int ) ;
 int FUNC_9 (int ,int,void*,int ) ;
 int VAR_21 ;
 int FUNC_10 (struct sctp_tcb*,int ,int,int ) ;
 int FUNC_11 (struct sctp_tcb*,void*,void*,int ) ;
 int FUNC_12 (struct sctp_tcb*,scalar_t__,scalar_t__*) ;
 int FUNC_13 (struct sctp_tcb*,int ,scalar_t__*) ;
 int FUNC_14 (struct sctp_tcb*,scalar_t__,scalar_t__*) ;
 int FUNC_15 (struct sctp_tcb*,int ) ;
 int FUNC_16 (int ,struct sctp_tcb*,scalar_t__,scalar_t__*,int ) ;

__attribute__((used)) static int
FUNC_17(struct sctp_tcb *VAR_22,
    uint32_t VAR_23, uint32_t VAR_24,
    struct sctp_stream_reset_response *VAR_25)
{
 uint16_t VAR_26;
 int VAR_27;
 struct sctp_association *VAR_28 = &VAR_22->asoc;
 struct sctp_tmit_chunk *VAR_29;
 struct sctp_stream_reset_request *VAR_30;
 struct sctp_stream_reset_out_request *VAR_31;
 struct sctp_stream_reset_in_request *VAR_32;
 uint32_t VAR_33;

 if (VAR_28->stream_reset_outstanding == 0) {

  return (0);
 }
 if (VAR_23 == VAR_22->asoc.str_reset_seq_out) {
  VAR_30 = FUNC_7(VAR_22, VAR_23, &VAR_29);
  if (VAR_30 != ((void*)0)) {
   VAR_22->asoc.str_reset_seq_out++;
   VAR_26 = FUNC_5(VAR_30->ph.param_type);
   VAR_27 = FUNC_5(VAR_30->ph.param_length);
   if (VAR_26 == VAR_19) {
    int VAR_34 = 0;

    VAR_31 = (struct sctp_stream_reset_out_request *)VAR_30;
    VAR_33 = (VAR_27 - sizeof(struct sctp_stream_reset_out_request)) / sizeof(uint16_t);
    VAR_28->stream_reset_out_is_outstanding = 0;
    if (VAR_28->stream_reset_outstanding)
     VAR_28->stream_reset_outstanding--;
    if (VAR_24 == VAR_15) {

     FUNC_14(VAR_22, VAR_33, VAR_31->list_of_streams);
    } else if (VAR_24 == VAR_13) {
     FUNC_16(VAR_6, VAR_22, VAR_33, VAR_31->list_of_streams, VAR_9);
    } else if (VAR_24 == VAR_14) {




     VAR_28->stream_reset_outstanding++;
     VAR_22->asoc.str_reset_seq_out--;
     VAR_28->stream_reset_out_is_outstanding = 1;
     VAR_34 = 1;
    } else {
     FUNC_16(VAR_8, VAR_22, VAR_33, VAR_31->list_of_streams, VAR_9);
    }
    if (VAR_34 == 0) {
     FUNC_12(VAR_22, VAR_33, VAR_31->list_of_streams);
    }
   } else if (VAR_26 == VAR_18) {
    VAR_32 = (struct sctp_stream_reset_in_request *)VAR_30;
    VAR_33 = (VAR_27 - sizeof(struct sctp_stream_reset_in_request)) / sizeof(uint16_t);
    if (VAR_28->stream_reset_outstanding)
     VAR_28->stream_reset_outstanding--;
    if (VAR_24 == VAR_13) {
     FUNC_16(VAR_5, VAR_22,
         VAR_33, VAR_32->list_of_streams, VAR_9);
    } else if (VAR_24 != VAR_15) {
     FUNC_16(VAR_7, VAR_22,
         VAR_33, VAR_32->list_of_streams, VAR_9);
    }
   } else if (VAR_26 == VAR_17) {

    int VAR_35;

    VAR_35 = VAR_22->asoc.strm_pending_add_size;
    if (VAR_35 > (VAR_22->asoc.strm_realoutsize - VAR_22->asoc.streamoutcnt)) {

     VAR_35 = VAR_22->asoc.strm_realoutsize - VAR_22->asoc.streamoutcnt;
    }
    VAR_22->asoc.strm_pending_add_size = 0;
    if (VAR_28->stream_reset_outstanding)
     VAR_28->stream_reset_outstanding--;
    if (VAR_24 == VAR_15) {

     int VAR_36;

     for (VAR_36 = VAR_28->streamoutcnt; VAR_36 < (VAR_28->streamoutcnt + VAR_35); VAR_36++) {
      VAR_28->strmout[VAR_36].state = VAR_12;
     }
     VAR_28->streamoutcnt += VAR_35;
     FUNC_10(VAR_22, VAR_22->asoc.streamincnt, VAR_22->asoc.streamoutcnt, 0);
    } else if (VAR_24 == VAR_13) {
     FUNC_10(VAR_22, VAR_22->asoc.streamincnt, VAR_22->asoc.streamoutcnt,
         VAR_10);
    } else {
     FUNC_10(VAR_22, VAR_22->asoc.streamincnt, VAR_22->asoc.streamoutcnt,
         VAR_11);
    }
   } else if (VAR_26 == VAR_16) {
    if (VAR_28->stream_reset_outstanding)
     VAR_28->stream_reset_outstanding--;
    if (VAR_24 == VAR_13) {
     FUNC_10(VAR_22, VAR_22->asoc.streamincnt, VAR_22->asoc.streamoutcnt,
         VAR_10);
    } else if (VAR_24 != VAR_15) {
     FUNC_10(VAR_22, VAR_22->asoc.streamincnt, VAR_22->asoc.streamoutcnt,
         VAR_11);
    }
   } else if (VAR_26 == VAR_20) {





    struct sctp_stream_reset_response_tsn *VAR_37;
    struct sctp_forward_tsn_chunk VAR_38;
    int VAR_39 = 0;

    if (VAR_25 == ((void*)0)) {

     return (0);
    }
    if (FUNC_5(VAR_25->ph.param_length) < sizeof(struct sctp_stream_reset_response_tsn)) {
     return (0);
    }
    if (VAR_24 == VAR_15) {
     VAR_37 = (struct sctp_stream_reset_response_tsn *)VAR_25;
     VAR_28->stream_reset_outstanding--;
     VAR_38.ch.chunk_length = FUNC_2(sizeof(struct sctp_forward_tsn_chunk));
     VAR_38.ch.chunk_type = VAR_2;
     VAR_38.new_cumulative_tsn = FUNC_1(FUNC_4(VAR_37->senders_next_tsn) - 1);
     FUNC_8(VAR_22, &VAR_38, &VAR_39, ((void*)0), 0);
     if (VAR_39) {
      return (1);
     }
     VAR_22->asoc.highest_tsn_inside_map = (FUNC_4(VAR_37->senders_next_tsn) - 1);
     if (FUNC_0(VAR_21) & VAR_3) {
      FUNC_9(0, 7, VAR_28->highest_tsn_inside_map, VAR_4);
     }

     VAR_22->asoc.tsn_last_delivered = VAR_22->asoc.cumulative_tsn = VAR_22->asoc.highest_tsn_inside_map;
     VAR_22->asoc.mapping_array_base_tsn = FUNC_4(VAR_37->senders_next_tsn);
     FUNC_3(VAR_22->asoc.mapping_array, 0, VAR_22->asoc.mapping_array_size);

     VAR_22->asoc.highest_tsn_inside_nr_map = VAR_22->asoc.highest_tsn_inside_map;
     FUNC_3(VAR_22->asoc.nr_mapping_array, 0, VAR_22->asoc.mapping_array_size);

     VAR_22->asoc.sending_seq = FUNC_4(VAR_37->receivers_next_tsn);
     VAR_22->asoc.last_acked_seq = VAR_22->asoc.cumulative_tsn;

     FUNC_14(VAR_22, 0, (uint16_t *)((void*)0));
     FUNC_13(VAR_22, 0, (uint16_t *)((void*)0));
     FUNC_11(VAR_22, VAR_22->asoc.sending_seq, (VAR_22->asoc.mapping_array_base_tsn + 1), 0);
    } else if (VAR_24 == VAR_13) {
     FUNC_11(VAR_22, VAR_22->asoc.sending_seq, (VAR_22->asoc.mapping_array_base_tsn + 1),
         VAR_0);
    } else {
     FUNC_11(VAR_22, VAR_22->asoc.sending_seq, (VAR_22->asoc.mapping_array_base_tsn + 1),
         VAR_1);
    }
   }

   if (VAR_28->stream_reset_outstanding == 0) {
    FUNC_6(VAR_22);
   }
  }
 }
 if (VAR_28->stream_reset_outstanding == 0) {
  FUNC_15(VAR_22, VAR_9);
 }
 return (0);
}
