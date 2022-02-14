
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ocrdma_tx_qp_err_stats {scalar_t__ rnr_retry_count_exceeded_errors; scalar_t__ retry_count_exceeded_errors; scalar_t__ local_qp_operation_errors; scalar_t__ local_protection_errors; scalar_t__ local_length_errors; } ;
struct ocrdma_rdma_stats_resp {struct ocrdma_tx_qp_err_stats tx_qp_err_stats; } ;
struct TYPE_2__ {char* debugfs_mem; scalar_t__ va; } ;
struct ocrdma_dev {TYPE_1__ stats_mem; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*,char*,char*,int ) ;

__attribute__((used)) static char *FUNC_2(struct ocrdma_dev *VAR_1)
{
 char *VAR_2 = VAR_1->stats_mem.debugfs_mem, *VAR_3;
 struct ocrdma_rdma_stats_resp *VAR_4 =
  (struct ocrdma_rdma_stats_resp *)VAR_1->stats_mem.va;
 struct ocrdma_tx_qp_err_stats *VAR_5 =
  &VAR_4->tx_qp_err_stats;

 FUNC_0(VAR_2, 0, (VAR_0));

 VAR_3 = VAR_2;
 VAR_3 += FUNC_1(VAR_2, VAR_3, "local_length_errors",
   (u64)VAR_5->local_length_errors);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "local_protection_errors",
   (u64)VAR_5->local_protection_errors);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "local_qp_operation_errors",
   (u64)VAR_5->local_qp_operation_errors);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "retry_count_exceeded_errors",
   (u64)VAR_5->retry_count_exceeded_errors);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "rnr_retry_count_exceeded_errors",
   (u64)VAR_5->rnr_retry_count_exceeded_errors);
 return VAR_2;
}
