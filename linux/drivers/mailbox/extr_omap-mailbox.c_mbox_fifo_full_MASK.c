
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_mbox_fifo {int fifo_stat; } ;
struct omap_mbox {int parent; struct omap_mbox_fifo tx_fifo; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct omap_mbox *VAR_0)
{
 struct omap_mbox_fifo *VAR_1 = &VAR_0->tx_fifo;

 return FUNC_0(VAR_0->parent, VAR_1->fifo_stat);
}
