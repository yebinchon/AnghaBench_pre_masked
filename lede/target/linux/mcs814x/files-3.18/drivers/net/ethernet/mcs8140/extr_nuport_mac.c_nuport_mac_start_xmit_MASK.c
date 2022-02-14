
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct nuport_mac_priv {size_t cur_tx; int* valid_txskb; int tx_full; int lock; struct sk_buff** tx_skb; scalar_t__ first_pkt; } ;
struct TYPE_2__ {int tx_packets; int tx_bytes; } ;
struct net_device {int trans_start; TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*,char*) ;
 struct nuport_mac_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,char*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct nuport_mac_priv*,struct sk_buff*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_4, struct net_device *VAR_5)
{
 unsigned long VAR_6;
 struct nuport_mac_priv *VAR_7 = FUNC_1(VAR_5);
 int VAR_8;

 if (FUNC_3(VAR_5)) {
  FUNC_2(VAR_5, "netif queue was stopped, restarting\n");
  FUNC_4(VAR_5);
 }

 FUNC_7(&VAR_7->lock, VAR_6);
 if (VAR_7->first_pkt) {
  VAR_8 = FUNC_6(VAR_7, VAR_4);
  if (VAR_8) {
   FUNC_5(VAR_5);
   FUNC_8(&VAR_7->lock, VAR_6);
   FUNC_0(VAR_5, "transmit path busy\n");
   return VAR_0;
  }
  VAR_7->first_pkt = 0;
 }

 VAR_7->tx_skb[VAR_7->cur_tx] = VAR_4;
 VAR_5->stats.tx_bytes += VAR_4->len;
 VAR_5->stats.tx_packets++;
 VAR_7->valid_txskb[VAR_7->cur_tx] = 1;
 VAR_7->cur_tx++;
 VAR_5->trans_start = VAR_3;

 if (VAR_7->cur_tx >= VAR_2)
  VAR_7->cur_tx = 0;

 FUNC_8(&VAR_7->lock, VAR_6);

 if (VAR_7->valid_txskb[VAR_7->cur_tx]) {
  VAR_7->tx_full = 1;
  FUNC_0(VAR_5, "stopping queue\n");
  FUNC_5(VAR_5);
 }

 return VAR_1;
}
