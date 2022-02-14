
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_mbox_fifo {int msg; } ;
struct omap_mbox {int parent; struct omap_mbox_fifo rx_fifo; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static u32 FUNC_1(struct omap_mbox *VAR_0)
{
 struct omap_mbox_fifo *VAR_1 = &VAR_0->rx_fifo;

 return FUNC_0(VAR_0->parent, VAR_1->msg);
}
