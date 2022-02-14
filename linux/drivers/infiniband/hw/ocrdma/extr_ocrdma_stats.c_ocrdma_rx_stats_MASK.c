
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ocrdma_rx_stats {int roce_frames_hi; int roce_frames_lo; scalar_t__ srq_rnr_naks; scalar_t__ rq_rnr_naks; scalar_t__ rc_drop_count_lookup_errors; scalar_t__ nak_count_psn_sequence_errors; scalar_t__ roce_frame_rxmt_drops; scalar_t__ rnr_nak_receives; scalar_t__ rnr_nak_timeouts; scalar_t__ psn_error_resp_packets; scalar_t__ psn_error_request_packets; scalar_t__ qp1_drops; scalar_t__ ud_drops; scalar_t__ roce_frame_payload_len_drops; scalar_t__ roce_frame_icrc_drops; int roce_frame_bytes_hi; int roce_frame_bytes_lo; } ;
struct ocrdma_rdma_stats_resp {struct ocrdma_rx_stats rx_stats; } ;
struct TYPE_2__ {char* debugfs_mem; scalar_t__ va; } ;
struct ocrdma_dev {TYPE_1__ stats_mem; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (char*,char*,char*,int ) ;

__attribute__((used)) static char *FUNC_3(struct ocrdma_dev *VAR_1)
{
 char *VAR_2 = VAR_1->stats_mem.debugfs_mem, *VAR_3;
 struct ocrdma_rdma_stats_resp *VAR_4 =
  (struct ocrdma_rdma_stats_resp *)VAR_1->stats_mem.va;
 struct ocrdma_rx_stats *VAR_5 = &VAR_4->rx_stats;

 FUNC_1(VAR_2, 0, (VAR_0));

 VAR_3 = VAR_2;
 VAR_3 += FUNC_2
  (VAR_2, VAR_3, "roce_frame_bytes",
   FUNC_0(VAR_5->roce_frame_bytes_lo,
   VAR_5->roce_frame_bytes_hi));
 VAR_3 += FUNC_2(VAR_2, VAR_3, "roce_frame_icrc_drops",
    (u64)VAR_5->roce_frame_icrc_drops);
 VAR_3 += FUNC_2(VAR_2, VAR_3, "roce_frame_payload_len_drops",
    (u64)VAR_5->roce_frame_payload_len_drops);
 VAR_3 += FUNC_2(VAR_2, VAR_3, "ud_drops",
    (u64)VAR_5->ud_drops);
 VAR_3 += FUNC_2(VAR_2, VAR_3, "qp1_drops",
    (u64)VAR_5->qp1_drops);
 VAR_3 += FUNC_2(VAR_2, VAR_3, "psn_error_request_packets",
    (u64)VAR_5->psn_error_request_packets);
 VAR_3 += FUNC_2(VAR_2, VAR_3, "psn_error_resp_packets",
    (u64)VAR_5->psn_error_resp_packets);
 VAR_3 += FUNC_2(VAR_2, VAR_3, "rnr_nak_timeouts",
    (u64)VAR_5->rnr_nak_timeouts);
 VAR_3 += FUNC_2(VAR_2, VAR_3, "rnr_nak_receives",
    (u64)VAR_5->rnr_nak_receives);
 VAR_3 += FUNC_2(VAR_2, VAR_3, "roce_frame_rxmt_drops",
    (u64)VAR_5->roce_frame_rxmt_drops);
 VAR_3 += FUNC_2(VAR_2, VAR_3, "nak_count_psn_sequence_errors",
    (u64)VAR_5->nak_count_psn_sequence_errors);
 VAR_3 += FUNC_2(VAR_2, VAR_3, "rc_drop_count_lookup_errors",
    (u64)VAR_5->rc_drop_count_lookup_errors);
 VAR_3 += FUNC_2(VAR_2, VAR_3, "rq_rnr_naks",
    (u64)VAR_5->rq_rnr_naks);
 VAR_3 += FUNC_2(VAR_2, VAR_3, "srq_rnr_naks",
    (u64)VAR_5->srq_rnr_naks);
 VAR_3 += FUNC_2(VAR_2, VAR_3, "roce_frames",
    FUNC_0(VAR_5->roce_frames_lo,
       VAR_5->roce_frames_hi));

 return VAR_2;
}
