
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mode; int rx_irq; int tx_irq; } ;
struct ldc_channel {scalar_t__ state; int lock; TYPE_1__ cfg; int flags; int id; int hs_state; int tx_head; int tx_acked; int chan_state; int tx_tail; int rx_num_entries; int rx_ra; int tx_num_entries; int tx_ra; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct ldc_channel*) ;
 int FUNC_2 (struct ldc_channel*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 unsigned long FUNC_5 (int ,int ,int ) ;
 unsigned long FUNC_6 (int ,int *,int *,int *) ;
 unsigned long FUNC_7 (int ,int ,int ) ;

int FUNC_8(struct ldc_channel *VAR_10)
{
 unsigned long VAR_11, VAR_12;
 int VAR_13 = -VAR_1;

 if (VAR_10->state != VAR_9)
  return -VAR_1;

 FUNC_3(&VAR_10->lock, VAR_12);

 FUNC_0(VAR_10->cfg.rx_irq);
 FUNC_0(VAR_10->cfg.tx_irq);

 VAR_10->flags |= VAR_3;

 VAR_13 = -VAR_2;
 VAR_11 = FUNC_7(VAR_10->id, 0, 0);
 if (VAR_11)
  goto out_free_irqs;

 VAR_11 = FUNC_7(VAR_10->id, VAR_10->tx_ra, VAR_10->tx_num_entries);
 if (VAR_11)
  goto out_free_irqs;

 VAR_11 = FUNC_5(VAR_10->id, 0, 0);
 if (VAR_11)
  goto out_unmap_tx;

 VAR_11 = FUNC_5(VAR_10->id, VAR_10->rx_ra, VAR_10->rx_num_entries);
 if (VAR_11)
  goto out_unmap_tx;

 VAR_10->flags |= VAR_4;

 VAR_11 = FUNC_6(VAR_10->id,
     &VAR_10->tx_head,
     &VAR_10->tx_tail,
     &VAR_10->chan_state);
 VAR_13 = -VAR_0;
 if (VAR_11)
  goto out_unmap_rx;

 VAR_10->tx_acked = VAR_10->tx_head;

 VAR_10->hs_state = VAR_6;
 FUNC_2(VAR_10, VAR_8);

 if (VAR_10->cfg.mode == VAR_7) {




  VAR_10->hs_state = VAR_5;
 }

 FUNC_4(&VAR_10->lock, VAR_12);

 return 0;

out_unmap_rx:
 VAR_10->flags &= ~VAR_4;
 FUNC_5(VAR_10->id, 0, 0);

out_unmap_tx:
 FUNC_7(VAR_10->id, 0, 0);

out_free_irqs:
 VAR_10->flags &= ~VAR_3;
 FUNC_1(VAR_10->cfg.tx_irq, VAR_10);
 FUNC_1(VAR_10->cfg.rx_irq, VAR_10);

 FUNC_4(&VAR_10->lock, VAR_12);

 return VAR_13;
}
