
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct sctp_tmit_chunk {int dummy; } ;
struct sctp_association {int str_reset_seq_in; int local_strreset_support; int streamoutcnt; void** last_reset_action; scalar_t__ stream_reset_outstanding; } ;
struct sctp_tcb {struct sctp_association asoc; } ;
struct sctp_stream_reset_add_strm {int number_of_streams; int request_seq; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct sctp_tmit_chunk*,int,void*) ;
 scalar_t__ FUNC_3 (struct sctp_tcb*,int ,int *,int ,int ,int,scalar_t__,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct sctp_tcb *VAR_5, struct sctp_tmit_chunk *VAR_6,
    struct sctp_stream_reset_add_strm *VAR_7)
{




 uint16_t VAR_8;
 uint32_t VAR_9;
 struct sctp_association *VAR_10 = &VAR_5->asoc;


 VAR_9 = FUNC_0(VAR_7->request_seq);
 VAR_8 = FUNC_1(VAR_7->number_of_streams);

 if (VAR_10->str_reset_seq_in == VAR_9) {
  VAR_5->asoc.last_reset_action[1] = VAR_5->asoc.last_reset_action[0];
  if (!(VAR_10->local_strreset_support & VAR_0)) {
   VAR_10->last_reset_action[0] = VAR_1;
  } else if (VAR_5->asoc.stream_reset_outstanding) {

   VAR_5->asoc.last_reset_action[0] = VAR_3;
  } else {

   int VAR_11;

   VAR_11 = VAR_5->asoc.streamoutcnt;
   VAR_11 += VAR_8;
   if (VAR_11 < 0x10000) {
    VAR_5->asoc.last_reset_action[0] = VAR_4;
    if (FUNC_3(VAR_5, 0, ((void*)0), 0, 0, 1, VAR_8, 0, 1)) {
     VAR_5->asoc.last_reset_action[0] = VAR_1;
    }
   } else {
    VAR_5->asoc.last_reset_action[0] = VAR_1;
   }
  }
  FUNC_2(VAR_6, VAR_9, VAR_5->asoc.last_reset_action[0]);
  VAR_10->str_reset_seq_in++;
 } else if ((VAR_10->str_reset_seq_in - 1) == VAR_9) {




  FUNC_2(VAR_6, VAR_9, VAR_10->last_reset_action[0]);
 } else if ((VAR_10->str_reset_seq_in - 2) == VAR_9) {




  FUNC_2(VAR_6, VAR_9, VAR_10->last_reset_action[1]);
 } else {
  FUNC_2(VAR_6, VAR_9, VAR_2);
 }
}
