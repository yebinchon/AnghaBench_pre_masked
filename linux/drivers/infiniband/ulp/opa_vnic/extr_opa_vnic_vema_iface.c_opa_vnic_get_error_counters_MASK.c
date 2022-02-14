
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vstats ;
struct TYPE_8__ {scalar_t__ rx_fifo_errors; scalar_t__ rx_nohandler; scalar_t__ tx_carrier_errors; scalar_t__ tx_fifo_errors; scalar_t__ rx_errors; scalar_t__ tx_errors; } ;
struct opa_vnic_stats {TYPE_4__ netstats; scalar_t__ rx_drop_state; scalar_t__ rx_oversize; scalar_t__ rx_runt; scalar_t__ tx_drop_state; scalar_t__ tx_dlid_zero; } ;
struct TYPE_6__ {int vesw_id; } ;
struct TYPE_7__ {TYPE_2__ vesw; } ;
struct opa_vnic_adapter {int port_num; TYPE_3__ info; int vport_num; int stats_lock; int netdev; TYPE_1__* rn_ops; } ;
struct opa_veswport_error_counters {void* rx_logic; void* rx_drop_state; void* rx_oversize; void* rx_runt; void* rx_bad_veswid; void* tx_logic; void* tx_drop_state; void* tx_dlid_zero; void* rx_errors; void* tx_errors; int veswport_num; void* vesw_id; void* vp_instance; } ;
struct TYPE_5__ {int (* ndo_get_stats64 ) (int ,TYPE_4__*) ;} ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct opa_vnic_stats*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,TYPE_4__*) ;

void FUNC_7(struct opa_vnic_adapter *VAR_0,
     struct opa_veswport_error_counters *VAR_1)
{
 struct opa_vnic_stats VAR_2;

 FUNC_3(&VAR_2, 0, sizeof(VAR_2));
 FUNC_4(&VAR_0->stats_lock);
 VAR_0->rn_ops->ndo_get_stats64(VAR_0->netdev, &VAR_2.netstats);
 FUNC_5(&VAR_0->stats_lock);

 VAR_1->vp_instance = FUNC_0(VAR_0->vport_num);
 VAR_1->vesw_id = FUNC_0(VAR_0->info.vesw.vesw_id);
 VAR_1->veswport_num = FUNC_1(VAR_0->port_num);

 VAR_1->tx_errors = FUNC_2(VAR_2.netstats.tx_errors);
 VAR_1->rx_errors = FUNC_2(VAR_2.netstats.rx_errors);
 VAR_1->tx_dlid_zero = FUNC_2(VAR_2.tx_dlid_zero);
 VAR_1->tx_drop_state = FUNC_2(VAR_2.tx_drop_state);
 VAR_1->tx_logic = FUNC_2(VAR_2.netstats.tx_fifo_errors +
          VAR_2.netstats.tx_carrier_errors);

 VAR_1->rx_bad_veswid = FUNC_2(VAR_2.netstats.rx_nohandler);
 VAR_1->rx_runt = FUNC_2(VAR_2.rx_runt);
 VAR_1->rx_oversize = FUNC_2(VAR_2.rx_oversize);
 VAR_1->rx_drop_state = FUNC_2(VAR_2.rx_drop_state);
 VAR_1->rx_logic = FUNC_2(VAR_2.netstats.rx_fifo_errors);
}
