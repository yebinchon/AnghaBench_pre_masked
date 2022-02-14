
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct resource {scalar_t__ start; scalar_t__ end; } ;
struct TYPE_12__ {struct ag71xx_platform_data* platform_data; } ;
struct platform_device {TYPE_6__ dev; } ;
struct net_device {unsigned long base_addr; int irq; int name; int dev_addr; int * ethtool_ops; int * netdev_ops; } ;
struct ag71xx_platform_data {int phy_if_mode; int mac_addr; int is_ar91xx; int is_ar724x; scalar_t__ desc_pktlen_mask; scalar_t__ max_frame_len; scalar_t__ phy_mask; int * mii_bus_dev; } ;
struct ag71xx_desc {int dummy; } ;
struct TYPE_9__ {void* order; int desc_split; } ;
struct TYPE_8__ {void* order; } ;
struct TYPE_10__ {unsigned long data; int function; } ;
struct ag71xx {scalar_t__ mac_base; scalar_t__ stop_desc_dma; TYPE_4__* stop_desc; int napi; TYPE_2__ tx_ring; scalar_t__ desc_pktlen_mask; scalar_t__ max_frame_len; TYPE_1__ rx_ring; TYPE_3__ oom_timer; int restart_work; int lock; int msg_enable; struct net_device* dev; struct platform_device* pdev; } ;
struct TYPE_11__ {scalar_t__ next; scalar_t__ ctrl; scalar_t__ data; } ;


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
 int FUNC_0 (int *,int ) ;
 int VAR_11 ;
 int FUNC_1 (struct net_device*,TYPE_6__*) ;
 int FUNC_2 (struct ag71xx*) ;
 int FUNC_3 (struct ag71xx*) ;
 int FUNC_4 (struct ag71xx*) ;
 int VAR_12 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ag71xx*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_7 (struct ag71xx*) ;
 int FUNC_8 (struct ag71xx*) ;
 int VAR_17 ;
 int VAR_18 ;
 void* FUNC_9 (int) ;
 struct net_device* FUNC_10 (int) ;
 int FUNC_11 (TYPE_6__*,char*,...) ;
 TYPE_4__* FUNC_12 (int *,int,scalar_t__*,int ) ;
 int FUNC_13 (int *,int,TYPE_4__*,scalar_t__) ;
 int FUNC_14 (int ,struct net_device*) ;
 int FUNC_15 (TYPE_3__*) ;
 scalar_t__ FUNC_16 (scalar_t__,scalar_t__) ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (struct net_device*) ;
 int FUNC_19 (int ,int ,int ) ;
 struct ag71xx* FUNC_20 (struct net_device*) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (struct net_device*,int *,int ,int ) ;
 int FUNC_23 (struct platform_device*,int ) ;
 struct resource* FUNC_24 (struct platform_device*,int ,char*) ;
 int FUNC_25 (struct platform_device*,struct net_device*) ;
 int FUNC_26 (char*,int ,unsigned long,int ,int ) ;
 int FUNC_27 (struct net_device*) ;
 int FUNC_28 (int ,int ,int,int ,struct net_device*) ;
 int FUNC_29 (int *) ;

__attribute__((used)) static int FUNC_30(struct platform_device *VAR_19)
{
 struct net_device *VAR_20;
 struct resource *VAR_21;
 struct ag71xx *VAR_22;
 struct ag71xx_platform_data *VAR_23;
 int VAR_24, VAR_25;

 VAR_23 = VAR_19->dev.platform_data;
 if (!VAR_23) {
  FUNC_11(&VAR_19->dev, "no platform data specified\n");
  VAR_25 = -VAR_8;
  goto err_out;
 }

 if (VAR_23->mii_bus_dev == ((void*)0) && VAR_23->phy_mask) {
  FUNC_11(&VAR_19->dev, "no MII bus device specified\n");
  VAR_25 = -VAR_6;
  goto err_out;
 }

 VAR_20 = FUNC_10(sizeof(*VAR_22));
 if (!VAR_20) {
  FUNC_11(&VAR_19->dev, "alloc_etherdev failed\n");
  VAR_25 = -VAR_7;
  goto err_out;
 }

 if (!VAR_23->max_frame_len || !VAR_23->desc_pktlen_mask)
  return -VAR_6;

 FUNC_1(VAR_20, &VAR_19->dev);

 VAR_22 = FUNC_20(VAR_20);
 VAR_22->pdev = VAR_19;
 VAR_22->dev = VAR_20;
 VAR_22->msg_enable = FUNC_21(VAR_14,
     VAR_0);
 FUNC_29(&VAR_22->lock);

 VAR_21 = FUNC_24(VAR_19, VAR_11, "mac_base");
 if (!VAR_21) {
  FUNC_11(&VAR_19->dev, "no mac_base resource found\n");
  VAR_25 = -VAR_8;
  goto err_out;
 }

 VAR_22->mac_base = FUNC_16(VAR_21->start, VAR_21->end - VAR_21->start + 1);
 if (!VAR_22->mac_base) {
  FUNC_11(&VAR_19->dev, "unable to ioremap mac_base\n");
  VAR_25 = -VAR_7;
  goto err_free_dev;
 }

 VAR_20->irq = FUNC_23(VAR_19, 0);
 VAR_25 = FUNC_28(VAR_20->irq, VAR_13,
     0x0,
     VAR_20->name, VAR_20);
 if (VAR_25) {
  FUNC_11(&VAR_19->dev, "unable to request IRQ %d\n", VAR_20->irq);
  goto err_unmap_base;
 }

 VAR_20->base_addr = (unsigned long)VAR_22->mac_base;
 VAR_20->netdev_ops = &VAR_15;
 VAR_20->ethtool_ops = &VAR_12;

 FUNC_0(&VAR_22->restart_work, VAR_18);

 FUNC_15(&VAR_22->oom_timer);
 VAR_22->oom_timer.data = (unsigned long) VAR_20;
 VAR_22->oom_timer.function = VAR_16;

 VAR_24 = VAR_4;
 VAR_22->rx_ring.order = FUNC_9(VAR_2);

 VAR_22->max_frame_len = VAR_23->max_frame_len;
 VAR_22->desc_pktlen_mask = VAR_23->desc_pktlen_mask;

 if (!VAR_23->is_ar724x && !VAR_23->is_ar91xx) {
  VAR_22->tx_ring.desc_split = VAR_5;
  VAR_24 *= VAR_3;
 }
 VAR_22->tx_ring.order = FUNC_9(VAR_24);

 VAR_22->stop_desc = FUNC_12(((void*)0),
  sizeof(struct ag71xx_desc), &VAR_22->stop_desc_dma, VAR_10);

 if (!VAR_22->stop_desc)
  goto err_free_irq;

 VAR_22->stop_desc->data = 0;
 VAR_22->stop_desc->ctrl = 0;
 VAR_22->stop_desc->next = (u32) VAR_22->stop_desc_dma;

 FUNC_19(VAR_20->dev_addr, VAR_23->mac_addr, VAR_9);

 FUNC_22(VAR_20, &VAR_22->napi, VAR_17, VAR_1);

 FUNC_4(VAR_22);

 FUNC_6(VAR_22);

 FUNC_4(VAR_22);

 VAR_25 = FUNC_7(VAR_22);
 if (VAR_25)
  goto err_free_desc;

 VAR_25 = FUNC_3(VAR_22);
 if (VAR_25)
  goto err_phy_disconnect;

 FUNC_25(VAR_19, VAR_20);

 VAR_25 = FUNC_27(VAR_20);
 if (VAR_25) {
  FUNC_11(&VAR_19->dev, "unable to register net device\n");
  goto err_debugfs_exit;
 }

 FUNC_26("%s: Atheros AG71xx at 0x%08lx, irq %d, mode:%s\n",
  VAR_20->name, VAR_20->base_addr, VAR_20->irq,
  FUNC_5(VAR_23->phy_if_mode));

 return 0;

err_debugfs_exit:
 FUNC_2(VAR_22);
err_phy_disconnect:
 FUNC_8(VAR_22);
err_free_desc:
 FUNC_13(((void*)0), sizeof(struct ag71xx_desc), VAR_22->stop_desc,
     VAR_22->stop_desc_dma);
err_free_irq:
 FUNC_14(VAR_20->irq, VAR_20);
err_unmap_base:
 FUNC_17(VAR_22->mac_base);
err_free_dev:
 FUNC_18(VAR_20);
err_out:
 FUNC_25(VAR_19, ((void*)0));
 return VAR_25;
}
