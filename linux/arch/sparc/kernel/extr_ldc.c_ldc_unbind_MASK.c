
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_irq; int rx_irq; } ;
struct ldc_channel {int flags; int rx_base; int rx_num_entries; int tx_base; int tx_num_entries; int id; TYPE_1__ cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct ldc_channel*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ldc_channel*,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;

void FUNC_5(struct ldc_channel *VAR_4)
{
 if (VAR_4->flags & VAR_1) {
  FUNC_0(VAR_4->cfg.rx_irq, VAR_4);
  FUNC_0(VAR_4->cfg.tx_irq, VAR_4);
  VAR_4->flags &= ~VAR_1;
 }

 if (VAR_4->flags & VAR_2) {
  FUNC_4(VAR_4->id, 0, 0);
  FUNC_3(VAR_4->id, 0, 0);
  VAR_4->flags &= ~VAR_2;
 }
 if (VAR_4->flags & VAR_0) {
  FUNC_1(VAR_4->tx_num_entries, VAR_4->tx_base);
  FUNC_1(VAR_4->rx_num_entries, VAR_4->rx_base);
  VAR_4->flags &= ~VAR_0;
 }

 FUNC_2(VAR_4, VAR_3);
}
