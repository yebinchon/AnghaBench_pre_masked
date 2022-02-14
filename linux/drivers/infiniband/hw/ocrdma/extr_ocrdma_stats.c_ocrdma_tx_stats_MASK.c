
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ocrdma_tx_stats {scalar_t__ ack_timeouts; int read_rsp_bytes_hi; int read_rsp_bytes_lo; int read_req_bytes_hi; int read_req_bytes_lo; int write_bytes_hi; int write_bytes_lo; int send_bytes_hi; int send_bytes_lo; int ack_pkts_hi; int ack_pkts_lo; int read_rsp_pkts_hi; int read_rsp_pkts_lo; int read_pkts_hi; int read_pkts_lo; int write_pkts_hi; int write_pkts_lo; int send_pkts_hi; int send_pkts_lo; } ;
struct ocrdma_rdma_stats_resp {struct ocrdma_tx_stats tx_stats; } ;
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
 struct ocrdma_tx_stats *VAR_5 = &VAR_4->tx_stats;

 FUNC_1(VAR_2, 0, (VAR_0));

 VAR_3 = VAR_2;
 VAR_3 += FUNC_2(VAR_2, VAR_3, "send_pkts",
    FUNC_0(VAR_5->send_pkts_lo,
       VAR_5->send_pkts_hi));
 VAR_3 += FUNC_2(VAR_2, VAR_3, "write_pkts",
    FUNC_0(VAR_5->write_pkts_lo,
       VAR_5->write_pkts_hi));
 VAR_3 += FUNC_2(VAR_2, VAR_3, "read_pkts",
    FUNC_0(VAR_5->read_pkts_lo,
       VAR_5->read_pkts_hi));
 VAR_3 += FUNC_2(VAR_2, VAR_3, "read_rsp_pkts",
    FUNC_0(VAR_5->read_rsp_pkts_lo,
       VAR_5->read_rsp_pkts_hi));
 VAR_3 += FUNC_2(VAR_2, VAR_3, "ack_pkts",
    FUNC_0(VAR_5->ack_pkts_lo,
       VAR_5->ack_pkts_hi));
 VAR_3 += FUNC_2(VAR_2, VAR_3, "send_bytes",
    FUNC_0(VAR_5->send_bytes_lo,
       VAR_5->send_bytes_hi));
 VAR_3 += FUNC_2(VAR_2, VAR_3, "write_bytes",
    FUNC_0(VAR_5->write_bytes_lo,
       VAR_5->write_bytes_hi));
 VAR_3 += FUNC_2(VAR_2, VAR_3, "read_req_bytes",
    FUNC_0(VAR_5->read_req_bytes_lo,
       VAR_5->read_req_bytes_hi));
 VAR_3 += FUNC_2(VAR_2, VAR_3, "read_rsp_bytes",
    FUNC_0(VAR_5->read_rsp_bytes_lo,
       VAR_5->read_rsp_bytes_hi));
 VAR_3 += FUNC_2(VAR_2, VAR_3, "ack_timeouts",
    (u64)VAR_5->ack_timeouts);

 return VAR_2;
}
