
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t uint16_t ;
struct sctp_tmit_chunk {int dummy; } ;
struct sctp_association {int str_reset_seq_in; int local_strreset_support; scalar_t__ stream_reset_out_is_outstanding; size_t streamoutcnt; void** last_reset_action; TYPE_2__* strmout; } ;
struct sctp_tcb {struct sctp_association asoc; } ;
struct TYPE_3__ {size_t param_length; } ;
struct sctp_stream_reset_in_request {size_t* list_of_streams; TYPE_1__ ph; int request_seq; } ;
struct TYPE_4__ {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (size_t) ;
 int FUNC_2 (struct sctp_tmit_chunk*,int,void*) ;
 int FUNC_3 (struct sctp_tcb*,int ) ;

__attribute__((used)) static void
FUNC_4(struct sctp_tcb *VAR_8,
    struct sctp_tmit_chunk *VAR_9,
    struct sctp_stream_reset_in_request *VAR_10, int VAR_11)
{
 uint32_t VAR_12;
 int VAR_13, VAR_14;
 int VAR_15;
 uint16_t VAR_16;





 struct sctp_association *VAR_17 = &VAR_8->asoc;

 VAR_12 = FUNC_0(VAR_10->request_seq);
 if (VAR_17->str_reset_seq_in == VAR_12) {
  VAR_17->last_reset_action[1] = VAR_17->last_reset_action[0];
  if (!(VAR_17->local_strreset_support & VAR_0)) {
   VAR_17->last_reset_action[0] = VAR_4;
  } else if (VAR_11) {

   VAR_17->last_reset_action[0] = VAR_4;
  } else if (VAR_8->asoc.stream_reset_out_is_outstanding == 0) {
   VAR_13 = FUNC_1(VAR_10->ph.param_length);
   VAR_15 = ((VAR_13 - sizeof(struct sctp_stream_reset_in_request)) / sizeof(uint16_t));
   if (VAR_15) {
    for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
     VAR_16 = FUNC_1(VAR_10->list_of_streams[VAR_14]);
     if (VAR_16 >= VAR_8->asoc.streamoutcnt) {
      VAR_17->last_reset_action[0] = VAR_4;
      goto bad_boy;
     }
     VAR_10->list_of_streams[VAR_14] = VAR_16;
    }
    for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
     if (VAR_8->asoc.strmout[VAR_10->list_of_streams[VAR_14]].state == VAR_2) {
      VAR_8->asoc.strmout[VAR_10->list_of_streams[VAR_14]].state = VAR_3;
     }
    }
   } else {

    for (VAR_14 = 0; VAR_14 < VAR_8->asoc.streamoutcnt; VAR_14++) {
     if (VAR_8->asoc.strmout[VAR_14].state == VAR_2)
      VAR_8->asoc.strmout[VAR_14].state = VAR_3;
    }
   }
   VAR_17->last_reset_action[0] = VAR_7;
  } else {

   VAR_17->last_reset_action[0] = VAR_6;
  }
bad_boy:
  FUNC_2(VAR_9, VAR_12, VAR_17->last_reset_action[0]);
  VAR_17->str_reset_seq_in++;
 } else if (VAR_17->str_reset_seq_in - 1 == VAR_12) {
  FUNC_2(VAR_9, VAR_12, VAR_17->last_reset_action[0]);
 } else if (VAR_17->str_reset_seq_in - 2 == VAR_12) {
  FUNC_2(VAR_9, VAR_12, VAR_17->last_reset_action[1]);
 } else {
  FUNC_2(VAR_9, VAR_12, VAR_5);
 }
 FUNC_3(VAR_8, VAR_1);
}
