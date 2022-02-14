
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sw {TYPE_1__* regs; int napi; int stat_irq; int rx_irq; } ;
struct port {size_t id; int phydev; scalar_t__ speed; struct sw* sw; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int * mac_cfg; int dma_auto_poll_cfg; int intr_mask; } ;


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
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (struct sw*) ;
 int VAR_10 ;
 int VAR_11 ;
 struct net_device* VAR_12 ;
 int FUNC_3 (int *) ;
 struct port* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ) ;
 int VAR_13 ;
 int FUNC_8 (int ,int ,int ,char*,struct net_device*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_14)
{
 struct port *VAR_15 = FUNC_4(VAR_14);
 struct sw *VAR_16 = VAR_15->sw;
 u32 VAR_17;

 VAR_15->speed = 0;
 FUNC_7(VAR_15->phydev);

 FUNC_6(VAR_14);

 if (!VAR_13) {
  FUNC_8(VAR_16->rx_irq, VAR_10, VAR_1, "gig_switch", VAR_12);
  FUNC_8(VAR_16->stat_irq, VAR_11, VAR_1, "gig_stat", VAR_12);
  FUNC_3(&VAR_16->napi);
  FUNC_6(VAR_12);

   FUNC_1(~(VAR_3 | VAR_5 | VAR_7 |
           VAR_2 | VAR_4 | VAR_6), &VAR_16->regs->intr_mask);

  VAR_17 = FUNC_0(&VAR_16->regs->mac_cfg[2]);
  VAR_17 &= ~(VAR_8);
  FUNC_1(VAR_17, &VAR_16->regs->mac_cfg[2]);

  VAR_17 = FUNC_0(&VAR_16->regs->dma_auto_poll_cfg);
  VAR_17 &= ~(VAR_9 | VAR_0);
  FUNC_1(VAR_17, &VAR_16->regs->dma_auto_poll_cfg);

  FUNC_2(VAR_16);
 }
 VAR_17 = FUNC_0(&VAR_16->regs->mac_cfg[VAR_15->id]);
 VAR_17 &= ~(VAR_8);
 FUNC_1(VAR_17, &VAR_16->regs->mac_cfg[VAR_15->id]);

 VAR_13++;
 FUNC_5(VAR_14);

 return 0;
}
