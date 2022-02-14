
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vstats ;
typedef int u64 ;
struct TYPE_9__ {int unicast; } ;
struct TYPE_10__ {int rx_bytes; int tx_bytes; int rx_packets; int tx_packets; int rx_errors; int tx_errors; } ;
struct opa_vnic_stats {TYPE_4__ tx_grp; TYPE_5__ netstats; } ;
struct TYPE_7__ {int vesw_id; } ;
struct TYPE_8__ {TYPE_2__ vesw; } ;
struct opa_vnic_adapter {int port_num; TYPE_3__ info; int vport_num; int stats_lock; int netdev; TYPE_1__* rn_ops; } ;
struct opa_veswport_summary_counters {void** reserved; void* tx_unicast; void* rx_bytes; void* tx_bytes; void* rx_packets; void* tx_packets; void* rx_errors; void* tx_errors; int veswport_num; void* vesw_id; void* vp_instance; } ;
typedef void* __be64 ;
struct TYPE_6__ {int (* ndo_get_stats64 ) (int ,TYPE_5__*) ;} ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct opa_vnic_stats*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,TYPE_5__*) ;

void FUNC_7(struct opa_vnic_adapter *VAR_0,
       struct opa_veswport_summary_counters *VAR_1)
{
 struct opa_vnic_stats VAR_2;
 __be64 *VAR_3;
 u64 *VAR_4;

 FUNC_3(&VAR_2, 0, sizeof(VAR_2));
 FUNC_4(&VAR_0->stats_lock);
 VAR_0->rn_ops->ndo_get_stats64(VAR_0->netdev, &VAR_2.netstats);
 FUNC_5(&VAR_0->stats_lock);

 VAR_1->vp_instance = FUNC_0(VAR_0->vport_num);
 VAR_1->vesw_id = FUNC_0(VAR_0->info.vesw.vesw_id);
 VAR_1->veswport_num = FUNC_1(VAR_0->port_num);

 VAR_1->tx_errors = FUNC_2(VAR_2.netstats.tx_errors);
 VAR_1->rx_errors = FUNC_2(VAR_2.netstats.rx_errors);
 VAR_1->tx_packets = FUNC_2(VAR_2.netstats.tx_packets);
 VAR_1->rx_packets = FUNC_2(VAR_2.netstats.rx_packets);
 VAR_1->tx_bytes = FUNC_2(VAR_2.netstats.tx_bytes);
 VAR_1->rx_bytes = FUNC_2(VAR_2.netstats.rx_bytes);





 for (VAR_3 = &VAR_1->tx_unicast, VAR_4 = &VAR_2.tx_grp.unicast;
      VAR_3 < &VAR_1->reserved[0]; VAR_3++, VAR_4++) {
  *VAR_3 = FUNC_2(*VAR_4);
 }
}
