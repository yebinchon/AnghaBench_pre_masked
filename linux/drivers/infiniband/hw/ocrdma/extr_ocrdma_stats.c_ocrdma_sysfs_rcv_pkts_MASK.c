
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ocrdma_rx_stats {scalar_t__ roce_frame_payload_len_drops; scalar_t__ roce_frame_icrc_drops; int roce_frames_hi; int roce_frames_lo; } ;
struct ocrdma_rdma_stats_resp {struct ocrdma_rx_stats rx_stats; } ;
struct TYPE_2__ {scalar_t__ va; } ;
struct ocrdma_dev {TYPE_1__ stats_mem; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static u64 FUNC_1(struct ocrdma_dev *VAR_0)
{
 struct ocrdma_rdma_stats_resp *VAR_1 =
  (struct ocrdma_rdma_stats_resp *)VAR_0->stats_mem.va;
 struct ocrdma_rx_stats *VAR_2 = &VAR_1->rx_stats;

 return FUNC_0(VAR_2->roce_frames_lo,
  VAR_2->roce_frames_hi) + (u64)VAR_2->roce_frame_icrc_drops
  + (u64)VAR_2->roce_frame_payload_len_drops;
}
