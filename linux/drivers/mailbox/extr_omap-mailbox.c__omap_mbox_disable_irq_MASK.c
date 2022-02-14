
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_mbox_fifo {int intr_bit; int irqdisable; } ;
struct omap_mbox {int parent; int intr_type; struct omap_mbox_fifo rx_fifo; struct omap_mbox_fifo tx_fifo; } ;
typedef scalar_t__ omap_mbox_irq_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct omap_mbox *VAR_1, omap_mbox_irq_t VAR_2)
{
 struct omap_mbox_fifo *VAR_3 = (VAR_2 == VAR_0) ?
    &VAR_1->tx_fifo : &VAR_1->rx_fifo;
 u32 VAR_4 = VAR_3->intr_bit;
 u32 VAR_5 = VAR_3->irqdisable;





 if (!VAR_1->intr_type)
  VAR_4 = FUNC_0(VAR_1->parent, VAR_5) & ~VAR_4;

 FUNC_1(VAR_1->parent, VAR_4, VAR_5);
}
