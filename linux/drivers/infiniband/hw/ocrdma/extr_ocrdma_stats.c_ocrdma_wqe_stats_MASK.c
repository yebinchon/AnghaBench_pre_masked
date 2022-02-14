
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ocrdma_wqe_stats {scalar_t__ dpp_wqe_drops; int invalidate_wqes_hi; int invalidate_wqes_lo; int mw_bind_wqes_hi; int mw_bind_wqes_lo; int frmr_wqes_hi; int frmr_wqes_lo; int read_wqes_hi; int read_wqes_lo; int large_write_rc_wqes_hi; int large_write_rc_wqes_lo; int large_send_rc_wqes_hi; int large_send_rc_wqes_lo; } ;
struct ocrdma_rdma_stats_resp {struct ocrdma_wqe_stats wqe_stats; } ;
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
 struct ocrdma_wqe_stats *VAR_5 = &VAR_4->wqe_stats;

 FUNC_1(VAR_2, 0, (VAR_0));

 VAR_3 = VAR_2;
 VAR_3 += FUNC_2(VAR_2, VAR_3, "large_send_rc_wqes",
  FUNC_0(VAR_5->large_send_rc_wqes_lo,
     VAR_5->large_send_rc_wqes_hi));
 VAR_3 += FUNC_2(VAR_2, VAR_3, "large_write_rc_wqes",
  FUNC_0(VAR_5->large_write_rc_wqes_lo,
     VAR_5->large_write_rc_wqes_hi));
 VAR_3 += FUNC_2(VAR_2, VAR_3, "read_wqes",
    FUNC_0(VAR_5->read_wqes_lo,
       VAR_5->read_wqes_hi));
 VAR_3 += FUNC_2(VAR_2, VAR_3, "frmr_wqes",
    FUNC_0(VAR_5->frmr_wqes_lo,
       VAR_5->frmr_wqes_hi));
 VAR_3 += FUNC_2(VAR_2, VAR_3, "mw_bind_wqes",
    FUNC_0(VAR_5->mw_bind_wqes_lo,
       VAR_5->mw_bind_wqes_hi));
 VAR_3 += FUNC_2(VAR_2, VAR_3, "invalidate_wqes",
  FUNC_0(VAR_5->invalidate_wqes_lo,
     VAR_5->invalidate_wqes_hi));
 VAR_3 += FUNC_2(VAR_2, VAR_3, "dpp_wqe_drops",
    (u64)VAR_5->dpp_wqe_drops);
 return VAR_2;
}
