
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct sctp_tmit_chunk {int dummy; } ;
struct sctp_association {int str_reset_seq_in; int local_strreset_support; scalar_t__* last_base_tsnsent; int * last_sending_seq; int * last_reset_action; scalar_t__ mapping_array_base_tsn; int sending_seq; int mapping_array_size; int nr_mapping_array; scalar_t__ highest_tsn_inside_map; scalar_t__ highest_tsn_inside_nr_map; int mapping_array; scalar_t__ cumulative_tsn; scalar_t__ tsn_last_delivered; } ;
struct sctp_tcb {struct sctp_association asoc; } ;
struct sctp_stream_reset_tsn_request {int request_seq; } ;
struct TYPE_2__ {scalar_t__ chunk_flags; int chunk_type; int chunk_length; } ;
struct sctp_forward_tsn_chunk {int new_cumulative_tsn; TYPE_1__ ch; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sctp_tmit_chunk*,int,int ) ;
 int FUNC_7 (struct sctp_tmit_chunk*,int,int ,int ,scalar_t__) ;
 int FUNC_8 (struct sctp_tcb*,struct sctp_forward_tsn_chunk*,int*,int *,int ) ;
 int FUNC_9 (int ,int,scalar_t__,int ) ;
 int VAR_8 ;
 int FUNC_10 (struct sctp_tcb*,int ,scalar_t__,int ) ;
 int FUNC_11 (struct sctp_tcb*,int ,int *) ;
 int FUNC_12 (struct sctp_tcb*,int ,int *) ;

__attribute__((used)) static int
FUNC_13(struct sctp_tcb *VAR_9,
    struct sctp_tmit_chunk *VAR_10,
    struct sctp_stream_reset_tsn_request *VAR_11)
{






 struct sctp_forward_tsn_chunk VAR_12;
 struct sctp_association *VAR_13 = &VAR_9->asoc;
 int VAR_14 = 0;
 uint32_t VAR_15;

 VAR_15 = FUNC_5(VAR_11->request_seq);
 if (VAR_13->str_reset_seq_in == VAR_15) {
  VAR_13->last_reset_action[1] = VAR_9->asoc.last_reset_action[0];
  if (!(VAR_13->local_strreset_support & VAR_0)) {
   VAR_13->last_reset_action[0] = VAR_4;
  } else {
   VAR_12.ch.chunk_length = FUNC_3(sizeof(struct sctp_forward_tsn_chunk));
   VAR_12.ch.chunk_type = VAR_1;
   VAR_12.ch.chunk_flags = 0;
   VAR_12.new_cumulative_tsn = FUNC_2(VAR_9->asoc.highest_tsn_inside_map + 1);
   FUNC_8(VAR_9, &VAR_12, &VAR_14, ((void*)0), 0);
   if (VAR_14) {
    return (1);
   }
   VAR_13->highest_tsn_inside_map += VAR_7;
   if (FUNC_0(VAR_8) & VAR_2) {
    FUNC_9(0, 10, VAR_13->highest_tsn_inside_map, VAR_3);
   }
   VAR_13->tsn_last_delivered = VAR_13->cumulative_tsn = VAR_13->highest_tsn_inside_map;
   VAR_13->mapping_array_base_tsn = VAR_13->highest_tsn_inside_map + 1;
   FUNC_4(VAR_13->mapping_array, 0, VAR_13->mapping_array_size);
   VAR_13->highest_tsn_inside_nr_map = VAR_13->highest_tsn_inside_map;
   FUNC_4(VAR_13->nr_mapping_array, 0, VAR_13->mapping_array_size);
   FUNC_1(&VAR_13->sending_seq, 1);

   VAR_13->last_sending_seq[1] = VAR_13->last_sending_seq[0];
   VAR_13->last_sending_seq[0] = VAR_13->sending_seq;
   VAR_13->last_base_tsnsent[1] = VAR_13->last_base_tsnsent[0];
   VAR_13->last_base_tsnsent[0] = VAR_13->mapping_array_base_tsn;
   FUNC_12(VAR_9, 0, (uint16_t *)((void*)0));
   FUNC_11(VAR_9, 0, (uint16_t *)((void*)0));
   VAR_13->last_reset_action[0] = VAR_6;
   FUNC_10(VAR_9, VAR_13->sending_seq, (VAR_13->mapping_array_base_tsn + 1), 0);
  }
  FUNC_7(VAR_10, VAR_15, VAR_13->last_reset_action[0],
      VAR_13->last_sending_seq[0], VAR_13->last_base_tsnsent[0]);
  VAR_13->str_reset_seq_in++;
 } else if (VAR_13->str_reset_seq_in - 1 == VAR_15) {
  FUNC_7(VAR_10, VAR_15, VAR_13->last_reset_action[0],
      VAR_13->last_sending_seq[0], VAR_13->last_base_tsnsent[0]);
 } else if (VAR_13->str_reset_seq_in - 2 == VAR_15) {
  FUNC_7(VAR_10, VAR_15, VAR_13->last_reset_action[1],
      VAR_13->last_sending_seq[1], VAR_13->last_base_tsnsent[1]);
 } else {
  FUNC_6(VAR_10, VAR_15, VAR_5);
 }
 return (0);
}
