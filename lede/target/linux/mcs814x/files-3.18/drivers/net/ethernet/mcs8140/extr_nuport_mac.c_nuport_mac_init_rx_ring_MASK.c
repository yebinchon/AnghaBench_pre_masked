
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nuport_mac_priv {int* irq_rxskb; struct sk_buff** rx_skb; scalar_t__ rx_full; scalar_t__ dma_rx; scalar_t__ cur_rx; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_0 (struct net_device*,int ) ;
 struct nuport_mac_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4)
{
 struct nuport_mac_priv *VAR_5 = FUNC_1(VAR_4);
 struct sk_buff *VAR_6;
 int VAR_7;

 VAR_5->cur_rx = VAR_5->dma_rx = VAR_5->rx_full = 0;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_6 = FUNC_0(VAR_4, VAR_1);
  if (!VAR_6)
   return -VAR_0;
  FUNC_2(VAR_6, VAR_3);
  VAR_5->rx_skb[VAR_7] = VAR_6;
  VAR_5->irq_rxskb[VAR_7] = 1;
 }

 return 0;
}
