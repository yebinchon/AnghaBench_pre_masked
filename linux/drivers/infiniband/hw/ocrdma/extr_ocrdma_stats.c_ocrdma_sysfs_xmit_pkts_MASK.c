
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ocrdma_tx_stats {int ack_pkts_hi; int ack_pkts_lo; int read_rsp_pkts_hi; int read_rsp_pkts_lo; int read_pkts_hi; int read_pkts_lo; int write_pkts_hi; int write_pkts_lo; int send_pkts_hi; int send_pkts_lo; } ;
struct ocrdma_rdma_stats_resp {struct ocrdma_tx_stats tx_stats; } ;
struct TYPE_2__ {scalar_t__ va; } ;
struct ocrdma_dev {TYPE_1__ stats_mem; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static u64 FUNC_1(struct ocrdma_dev *VAR_0)
{
 struct ocrdma_rdma_stats_resp *VAR_1 =
  (struct ocrdma_rdma_stats_resp *)VAR_0->stats_mem.va;
 struct ocrdma_tx_stats *VAR_2 = &VAR_1->tx_stats;

 return (FUNC_0(VAR_2->send_pkts_lo,
     VAR_2->send_pkts_hi) +
 FUNC_0(VAR_2->write_pkts_lo, VAR_2->write_pkts_hi) +
 FUNC_0(VAR_2->read_pkts_lo, VAR_2->read_pkts_hi) +
 FUNC_0(VAR_2->read_rsp_pkts_lo,
    VAR_2->read_rsp_pkts_hi) +
 FUNC_0(VAR_2->ack_pkts_lo, VAR_2->ack_pkts_hi));
}
