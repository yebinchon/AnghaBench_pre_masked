
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sw {TYPE_1__* regs; int napi; int stat_irq; int rx_irq; } ;
struct port {size_t id; int phydev; struct sw* sw; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int dma_auto_poll_cfg; int * mac_cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct net_device*) ;
 struct net_device* VAR_3 ;
 int FUNC_4 (int *) ;
 struct port* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_5)
{
 struct port *VAR_6 = FUNC_5(VAR_5);
 struct sw *VAR_7 = VAR_6->sw;
 u32 VAR_8;

 VAR_4--;

 VAR_8 = FUNC_0(&VAR_7->regs->mac_cfg[VAR_6->id]);
 VAR_8 |= (VAR_1);
 FUNC_1(VAR_8, &VAR_7->regs->mac_cfg[VAR_6->id]);

 FUNC_7(VAR_5);

 FUNC_8(VAR_6->phydev);

 if (!VAR_4) {
  FUNC_2(VAR_7->rx_irq);
  FUNC_3(VAR_7->rx_irq, VAR_3);
  FUNC_2(VAR_7->stat_irq);
  FUNC_3(VAR_7->stat_irq, VAR_3);
  FUNC_4(&VAR_7->napi);
  FUNC_7(VAR_3);
  VAR_8 = FUNC_0(&VAR_7->regs->mac_cfg[2]);
  VAR_8 |= (VAR_1);
  FUNC_1(VAR_8, &VAR_7->regs->mac_cfg[2]);

  FUNC_1(VAR_2 | VAR_0,
        &VAR_7->regs->dma_auto_poll_cfg);
 }

 FUNC_6(VAR_5);
 return 0;
}
