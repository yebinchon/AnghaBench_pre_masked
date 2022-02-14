
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct efa_com_basic_stats {void* rx_drops; void* rx_pkts; void* rx_bytes; void* tx_pkts; void* tx_bytes; } ;
union efa_com_get_stats_result {struct efa_com_basic_stats basic_stats; } ;
typedef int u8 ;
struct rdma_hw_stats {void** value; } ;
struct ib_device {int dummy; } ;
struct TYPE_5__ {int create_ah_err; int alloc_ucontext_err; int reg_mr_err; int create_qp_err; int alloc_pd_err; } ;
struct efa_stats {TYPE_2__ sw_stats; int keep_alive_rcvd; } ;
struct efa_com_stats_admin {int no_completion; int completed_cmd; int submitted_cmd; } ;
struct TYPE_4__ {struct efa_com_stats_admin stats; } ;
struct TYPE_6__ {TYPE_1__ aq; } ;
struct efa_dev {struct efa_stats stats; TYPE_3__ edev; } ;
struct efa_com_get_stats_params {int scope; int type; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*,struct efa_com_get_stats_params*,union efa_com_get_stats_result*) ;
 int VAR_16 ;
 struct efa_dev* FUNC_3 (struct ib_device*) ;

int FUNC_4(struct ib_device *VAR_17, struct rdma_hw_stats *VAR_18,
       u8 VAR_19, int VAR_20)
{
 struct efa_com_get_stats_params VAR_21 = {};
 union efa_com_get_stats_result VAR_22;
 struct efa_dev *VAR_23 = FUNC_3(VAR_17);
 struct efa_com_basic_stats *VAR_24;
 struct efa_com_stats_admin *VAR_25;
 struct efa_stats *VAR_26;
 int VAR_27;

 VAR_21.type = VAR_1;
 VAR_21.scope = VAR_0;

 VAR_27 = FUNC_2(&VAR_23->edev, &VAR_21, &VAR_22);
 if (VAR_27)
  return VAR_27;

 VAR_24 = &VAR_22.basic_stats;
 VAR_18->value[VAR_14] = VAR_24->tx_bytes;
 VAR_18->value[VAR_15] = VAR_24->tx_pkts;
 VAR_18->value[VAR_10] = VAR_24->rx_bytes;
 VAR_18->value[VAR_12] = VAR_24->rx_pkts;
 VAR_18->value[VAR_11] = VAR_24->rx_drops;

 VAR_25 = &VAR_23->edev.aq.stats;
 VAR_18->value[VAR_13] = FUNC_1(&VAR_25->submitted_cmd);
 VAR_18->value[VAR_4] = FUNC_1(&VAR_25->completed_cmd);
 VAR_18->value[VAR_8] = FUNC_1(&VAR_25->no_completion);

 VAR_26 = &VAR_23->stats;
 VAR_18->value[VAR_7] = FUNC_1(&VAR_26->keep_alive_rcvd);
 VAR_18->value[VAR_2] = FUNC_1(&VAR_26->sw_stats.alloc_pd_err);
 VAR_18->value[VAR_6] = FUNC_1(&VAR_26->sw_stats.create_qp_err);
 VAR_18->value[VAR_9] = FUNC_1(&VAR_26->sw_stats.reg_mr_err);
 VAR_18->value[VAR_3] = FUNC_1(&VAR_26->sw_stats.alloc_ucontext_err);
 VAR_18->value[VAR_5] = FUNC_1(&VAR_26->sw_stats.create_ah_err);

 return FUNC_0(VAR_16);
}
