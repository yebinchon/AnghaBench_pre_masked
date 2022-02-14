
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct rtnl_link_stats64 {scalar_t__ rx_dropped; scalar_t__ rx_errors; scalar_t__ rx_fifo_errors; scalar_t__ rx_bytes; scalar_t__ rx_packets; scalar_t__ tx_dropped; scalar_t__ tx_errors; scalar_t__ tx_carrier_errors; scalar_t__ tx_fifo_errors; scalar_t__ tx_bytes; scalar_t__ tx_packets; scalar_t__ rx_nohandler; } ;
struct TYPE_3__ {int mcastbcast; } ;
struct opa_vnic_stats {struct rtnl_link_stats64 netstats; scalar_t__ rx_runt; scalar_t__ rx_oversize; TYPE_1__ rx_grp; scalar_t__ rx_drop_state; scalar_t__ tx_dlid_zero; scalar_t__ tx_drop_state; } ;
struct TYPE_4__ {scalar_t__ rx_dropped; scalar_t__ rx_errors; scalar_t__ rx_length_errors; int multicast; scalar_t__ rx_fifo_errors; scalar_t__ rx_bytes; scalar_t__ rx_packets; scalar_t__ tx_dropped; scalar_t__ tx_errors; scalar_t__ tx_carrier_errors; scalar_t__ tx_fifo_errors; scalar_t__ tx_bytes; scalar_t__ tx_packets; } ;
struct net_device {TYPE_2__ stats; } ;
struct hfi1_vnic_vport_info {size_t num_tx_q; size_t num_rx_q; struct opa_vnic_stats* stats; struct net_device* netdev; } ;


 int FUNC_0 (struct opa_vnic_stats*,struct opa_vnic_stats*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct hfi1_vnic_vport_info *VAR_2,
       struct opa_vnic_stats *VAR_3)
{
 struct net_device *VAR_4 = VAR_2->netdev;
 u8 VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_2->num_tx_q; VAR_5++) {
  struct opa_vnic_stats *VAR_6 = &VAR_2->stats[VAR_5];
  struct rtnl_link_stats64 *VAR_7 = &VAR_2->stats[VAR_5].netstats;

  VAR_3->netstats.tx_fifo_errors += VAR_7->tx_fifo_errors;
  VAR_3->netstats.tx_carrier_errors += VAR_7->tx_carrier_errors;
  VAR_3->tx_drop_state += VAR_6->tx_drop_state;
  VAR_3->tx_dlid_zero += VAR_6->tx_dlid_zero;

  FUNC_0(VAR_3, VAR_6, VAR_1);
  VAR_3->netstats.tx_packets += VAR_7->tx_packets;
  VAR_3->netstats.tx_bytes += VAR_7->tx_bytes;
 }


 for (VAR_5 = 0; VAR_5 < VAR_2->num_rx_q; VAR_5++) {
  struct opa_vnic_stats *VAR_8 = &VAR_2->stats[VAR_5];
  struct rtnl_link_stats64 *VAR_9 = &VAR_2->stats[VAR_5].netstats;

  VAR_3->netstats.rx_fifo_errors += VAR_9->rx_fifo_errors;
  VAR_3->netstats.rx_nohandler += VAR_9->rx_nohandler;
  VAR_3->rx_drop_state += VAR_8->rx_drop_state;
  VAR_3->rx_oversize += VAR_8->rx_oversize;
  VAR_3->rx_runt += VAR_8->rx_runt;

  FUNC_0(VAR_3, VAR_8, VAR_0);
  VAR_3->netstats.rx_packets += VAR_9->rx_packets;
  VAR_3->netstats.rx_bytes += VAR_9->rx_bytes;
 }

 VAR_3->netstats.tx_errors = VAR_3->netstats.tx_fifo_errors +
        VAR_3->netstats.tx_carrier_errors +
        VAR_3->tx_drop_state + VAR_3->tx_dlid_zero;
 VAR_3->netstats.tx_dropped = VAR_3->netstats.tx_errors;

 VAR_3->netstats.rx_errors = VAR_3->netstats.rx_fifo_errors +
        VAR_3->netstats.rx_nohandler +
        VAR_3->rx_drop_state + VAR_3->rx_oversize +
        VAR_3->rx_runt;
 VAR_3->netstats.rx_dropped = VAR_3->netstats.rx_errors;

 VAR_4->stats.tx_packets = VAR_3->netstats.tx_packets;
 VAR_4->stats.tx_bytes = VAR_3->netstats.tx_bytes;
 VAR_4->stats.tx_fifo_errors = VAR_3->netstats.tx_fifo_errors;
 VAR_4->stats.tx_carrier_errors = VAR_3->netstats.tx_carrier_errors;
 VAR_4->stats.tx_errors = VAR_3->netstats.tx_errors;
 VAR_4->stats.tx_dropped = VAR_3->netstats.tx_dropped;

 VAR_4->stats.rx_packets = VAR_3->netstats.rx_packets;
 VAR_4->stats.rx_bytes = VAR_3->netstats.rx_bytes;
 VAR_4->stats.rx_fifo_errors = VAR_3->netstats.rx_fifo_errors;
 VAR_4->stats.multicast = VAR_3->rx_grp.mcastbcast;
 VAR_4->stats.rx_length_errors = VAR_3->rx_oversize + VAR_3->rx_runt;
 VAR_4->stats.rx_errors = VAR_3->netstats.rx_errors;
 VAR_4->stats.rx_dropped = VAR_3->netstats.rx_dropped;
}
