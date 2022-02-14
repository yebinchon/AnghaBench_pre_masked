
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nuport_mac_priv {int emac_clk; int link_irq; int tx_irq; int rx_irq; int napi; int lock; int * rx_skb; TYPE_1__* phydev; } ;
struct net_device {int name; int dev_addr; } ;
struct TYPE_2__ {int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct net_device*,char*) ;
 struct nuport_mac_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*,int ) ;
 int FUNC_8 (struct nuport_mac_priv*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct nuport_mac_priv*) ;
 int VAR_15 ;
 int FUNC_11 (struct nuport_mac_priv*) ;
 int FUNC_12 (struct nuport_mac_priv*) ;
 int VAR_16 ;
 int FUNC_13 (struct nuport_mac_priv*,int ) ;
 int VAR_17 ;
 int FUNC_14 (int,int ) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (int ,int *,int ,int ,struct net_device*) ;
 int FUNC_17 (int *,unsigned long) ;
 int FUNC_18 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_19(struct net_device *VAR_18)
{
 int VAR_19;
 struct nuport_mac_priv *VAR_20 = FUNC_5(VAR_18);
 unsigned long VAR_21;
 u32 VAR_22 = 0;

 VAR_19 = FUNC_1(VAR_20->emac_clk);
 if (VAR_19) {
  FUNC_4(VAR_18, "failed to enable EMAC clock\n");
  return VAR_19;
 }


 VAR_22 |= VAR_12 | VAR_14;
 VAR_22 |= VAR_1 | VAR_13 | VAR_2;
 VAR_22 |= VAR_3 | VAR_4;
 FUNC_14(VAR_22, VAR_0);


 FUNC_7(VAR_18, VAR_18->dev_addr);

 VAR_19 = FUNC_16(VAR_20->link_irq, &VAR_15,
    0, VAR_18->name, VAR_18);
 if (VAR_19) {
  FUNC_4(VAR_18, "unable to request link interrupt\n");
  goto out_emac_clk;
 }

 VAR_19 = FUNC_16(VAR_20->tx_irq, &VAR_17,
    0, VAR_18->name, VAR_18);
 if (VAR_19) {
  FUNC_4(VAR_18, "unable to request rx interrupt\n");
  goto out_link_irq;
 }


 VAR_22 = VAR_7 | (VAR_20->phydev->addr << VAR_9);

 VAR_22 |= (1 << VAR_10);

 VAR_22 |= (2 << VAR_5);

 FUNC_17(&VAR_20->lock, VAR_21);
 FUNC_14(VAR_22, VAR_6);
 FUNC_14(VAR_11, VAR_8);
 FUNC_18(&VAR_20->lock, VAR_21);

 FUNC_15(VAR_20->phydev);

 VAR_19 = FUNC_16(VAR_20->rx_irq, &VAR_16,
    0, VAR_18->name, VAR_18);
 if (VAR_19) {
  FUNC_4(VAR_18, "unable to request tx interrupt\n");
  goto out_tx_irq;
 }

 FUNC_6(VAR_18);

 FUNC_10(VAR_20);

 VAR_19 = FUNC_9(VAR_18);
 if (VAR_19) {
  FUNC_4(VAR_18, "rx ring init failed\n");
  goto out_rx_skb;
 }

 FUNC_12(VAR_20);
 FUNC_11(VAR_20);


 FUNC_17(&VAR_20->lock, VAR_21);
 VAR_19 = FUNC_13(VAR_20, VAR_20->rx_skb[0]);
 FUNC_18(&VAR_20->lock, VAR_21);

 FUNC_3(&VAR_20->napi);

 return VAR_19;

out_rx_skb:
 FUNC_8(VAR_20);
 FUNC_2(VAR_20->rx_irq, VAR_18);
out_tx_irq:
 FUNC_2(VAR_20->tx_irq, VAR_18);
out_link_irq:
 FUNC_2(VAR_20->link_irq, VAR_18);
out_emac_clk:
 FUNC_0(VAR_20->emac_clk);
 return VAR_19;
}
