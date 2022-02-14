
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocrdma_tx_dbg_stats {int* data; } ;
struct ocrdma_rdma_stats_resp {struct ocrdma_tx_dbg_stats tx_dbg_stats; } ;
struct TYPE_2__ {char* debugfs_mem; scalar_t__ va; } ;
struct ocrdma_dev {TYPE_1__ stats_mem; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*,int,char*,int,int) ;

__attribute__((used)) static char *FUNC_2(struct ocrdma_dev *VAR_1)
{
 int VAR_2;
 char *VAR_3 = VAR_1->stats_mem.debugfs_mem;
 struct ocrdma_rdma_stats_resp *VAR_4 =
  (struct ocrdma_rdma_stats_resp *)VAR_1->stats_mem.va;
 struct ocrdma_tx_dbg_stats *VAR_5 =
  &VAR_4->tx_dbg_stats;

 FUNC_0(VAR_3, 0, (VAR_0));

 for (VAR_2 = 0; VAR_2 < 100; VAR_2++)
  VAR_3 += FUNC_1(VAR_3, 80, "DW[%d] = 0x%x\n", VAR_2,
     VAR_5->data[VAR_2]);

 return VAR_1->stats_mem.debugfs_mem;
}
