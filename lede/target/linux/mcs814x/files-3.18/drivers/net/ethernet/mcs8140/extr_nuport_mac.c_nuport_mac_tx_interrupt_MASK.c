
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int len; } ;
struct nuport_mac_priv {size_t dma_tx; int first_pkt; int lock; scalar_t__ tx_full; struct sk_buff** tx_skb; scalar_t__* valid_txskb; int rx_addr; TYPE_2__* pdev; } ;
struct TYPE_3__ {int tx_errors; } ;
struct net_device {TYPE_1__ stats; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (struct net_device*,char*,...) ;
 int FUNC_3 (struct net_device*,char*) ;
 struct nuport_mac_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct nuport_mac_priv*,struct sk_buff*) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_6, void *VAR_7)
{
 struct net_device *VAR_8 = (struct net_device *)VAR_7;
 struct nuport_mac_priv *VAR_9 = FUNC_4(VAR_8);
 struct sk_buff *VAR_10;
 unsigned long VAR_11;
 int VAR_12;
 u32 VAR_13;

 FUNC_9(&VAR_9->lock, VAR_11);

 VAR_13 = FUNC_6(VAR_5);
 if (VAR_13 & VAR_3) {
  FUNC_8(VAR_13, VAR_5);
  VAR_13 = FUNC_6(VAR_2);

  if (VAR_13 & 1)
   VAR_8->stats.tx_errors++;
 } else
  FUNC_2(VAR_8, "no status word: %08x\n", VAR_13);

 VAR_10 = VAR_9->tx_skb[VAR_9->dma_tx];
 VAR_9->tx_skb[VAR_9->dma_tx] = ((void*)0);
 VAR_9->valid_txskb[VAR_9->dma_tx] = 0;
 FUNC_1(&VAR_9->pdev->dev, VAR_9->rx_addr, VAR_10->len,
    VAR_0);
 FUNC_0(VAR_10);

 VAR_9->dma_tx++;
 if (VAR_9->dma_tx >= VAR_4)
  VAR_9->dma_tx = 0;

 if (!VAR_9->valid_txskb[VAR_9->dma_tx])
  VAR_9->first_pkt = 1;
 else {
  VAR_12 = FUNC_7(VAR_9, VAR_9->tx_skb[VAR_9->dma_tx]);
  if (VAR_12)
   FUNC_3(VAR_8, "failed to restart TX dma\n");
 }

 if (VAR_9->tx_full) {
  FUNC_2(VAR_8, "restarting transmit queue\n");
  FUNC_5(VAR_8);
  VAR_9->tx_full = 0;
 }

 FUNC_10(&VAR_9->lock, VAR_11);

 return VAR_1;
}
