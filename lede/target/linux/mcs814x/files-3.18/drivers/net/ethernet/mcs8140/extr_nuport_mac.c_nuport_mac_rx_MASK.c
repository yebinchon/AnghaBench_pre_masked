
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int ip_summed; int pkt_type; int protocol; int len; scalar_t__ data; } ;
struct nuport_mac_priv {int* irq_rxskb; size_t cur_rx; int* pkt_len; int buffer_shifting_len; struct sk_buff** rx_skb; int rx_addr; TYPE_1__* pdev; } ;
struct TYPE_4__ {int rx_bytes; int rx_dropped; int rx_packets; int rx_errors; int rx_missed_errors; } ;
struct net_device {int last_rx; TYPE_2__ stats; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (struct sk_buff*,struct net_device*) ;
 int FUNC_3 (int *) ;
 int VAR_11 ;
 struct sk_buff* FUNC_4 (struct net_device*,int ) ;
 struct nuport_mac_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_12, int VAR_13)
{
 struct nuport_mac_priv *VAR_14 = FUNC_5(VAR_12);
 struct sk_buff *VAR_15;
 int VAR_16, VAR_17;
 int VAR_18 = 0;

 while (VAR_18 < VAR_13 && !VAR_14->irq_rxskb[VAR_14->cur_rx]) {
  VAR_15 = VAR_14->rx_skb[VAR_14->cur_rx];
  VAR_16 = VAR_14->pkt_len[VAR_14->cur_rx];


  VAR_16 = VAR_16 - VAR_14->buffer_shifting_len;
  VAR_15->data = VAR_15->data + VAR_14->buffer_shifting_len;


  VAR_17 = FUNC_3((u32 *) (VAR_15->data + VAR_16));

  FUNC_1(&VAR_14->pdev->dev, VAR_14->rx_addr, VAR_15->len,
    VAR_1);


  if (!(VAR_17 & (1 << 30))) {
   FUNC_0(VAR_15);
   goto exit;
  }


  if (VAR_17 & (1 << 31)) {
   VAR_12->stats.rx_missed_errors++;
   FUNC_0(VAR_15);
   goto exit;
  }


  if ((!(VAR_17 & (1 << 18))) || (VAR_17 & VAR_2))
   VAR_12->stats.rx_errors++;

  if (VAR_16 > VAR_3) {
   FUNC_0(VAR_15);
   goto exit;
  } else
   FUNC_7(VAR_15, VAR_16);

  VAR_15->protocol = FUNC_2(VAR_15, VAR_12);
  VAR_12->stats.rx_packets++;

  if (VAR_17 & (1 << 29))
   VAR_15->pkt_type = VAR_7;
  if (VAR_17 & (1 << 27))
   VAR_15->pkt_type = VAR_6;
  if (VAR_17 & (1 << 28))
   VAR_15->pkt_type = VAR_5;

  VAR_15->ip_summed = VAR_0;


  VAR_17 = FUNC_6(VAR_15);
  if (VAR_17 != VAR_4)
   VAR_12->stats.rx_bytes += VAR_16 - 4;
  else
   VAR_12->stats.rx_dropped++;

  VAR_12->last_rx = VAR_11;

exit:
  VAR_15 = FUNC_4(VAR_12, VAR_8);
  if (!VAR_15)
   goto out;

  FUNC_8(VAR_15, VAR_10);
  VAR_14->rx_skb[VAR_14->cur_rx] = VAR_15;
  VAR_14->irq_rxskb[VAR_14->cur_rx] = 1;
  VAR_14->cur_rx++;

  if (VAR_14->cur_rx >= VAR_9)
   VAR_14->cur_rx = 0;
  VAR_18++;
 }
out:
 return VAR_18;
}
