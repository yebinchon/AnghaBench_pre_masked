
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_mbox_fifo {int msg; } ;
struct omap_mbox {int parent; struct omap_mbox_fifo tx_fifo; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct omap_mbox *VAR_0, u32 VAR_1)
{
 struct omap_mbox_fifo *VAR_2 = &VAR_0->tx_fifo;

 FUNC_0(VAR_0->parent, VAR_1, VAR_2->msg);
}
