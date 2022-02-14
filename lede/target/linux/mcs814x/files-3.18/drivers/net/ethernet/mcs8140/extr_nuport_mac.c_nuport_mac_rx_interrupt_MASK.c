
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nuport_mac_priv {int rx_full; size_t dma_rx; int* irq_rxskb; int lock; int napi; int * rx_skb; scalar_t__* pkt_len; } ;
struct net_device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*,char*) ;
 int FUNC_3 (struct net_device*,char*) ;
 struct nuport_mac_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct nuport_mac_priv*) ;
 int FUNC_6 (struct nuport_mac_priv*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct nuport_mac_priv*,int ) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_3, void *VAR_4)
{
 struct net_device *VAR_5 = (struct net_device *)VAR_4;
 struct nuport_mac_priv *VAR_6 = FUNC_4(VAR_5);
 unsigned long VAR_7;
 int VAR_8;

 FUNC_9(&VAR_6->lock, VAR_7);
 if (!VAR_6->rx_full) {
  VAR_6->pkt_len[VAR_6->dma_rx] = FUNC_7(VAR_1) - 4;
  VAR_6->irq_rxskb[VAR_6->dma_rx] = 0;
  VAR_6->dma_rx++;

  if (VAR_6->dma_rx >= VAR_2)
   VAR_6->dma_rx = 0;
 } else
  VAR_6->rx_full = 0;

 if (VAR_6->irq_rxskb[VAR_6->dma_rx] == 1) {
  VAR_8 = FUNC_8(VAR_6, VAR_6->rx_skb[VAR_6->dma_rx]);
  if (VAR_8)
   FUNC_3(VAR_5, "failed to start rx dma\n");
 } else {
  VAR_6->rx_full = 1;
  FUNC_2(VAR_5, "RX ring full\n");
 }

 if (FUNC_0(FUNC_6(VAR_6))) {

  FUNC_5(VAR_6);
  FUNC_1(&VAR_6->napi);
 }
 FUNC_10(&VAR_6->lock, VAR_7);

 return VAR_0;
}
