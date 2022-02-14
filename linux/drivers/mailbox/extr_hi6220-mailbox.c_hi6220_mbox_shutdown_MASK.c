
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbox_chan {struct hi6220_mbox_chan* con_priv; } ;
struct hi6220_mbox_chan {size_t ack_irq; struct hi6220_mbox* parent; } ;
struct hi6220_mbox {int ** irq_map_chan; int ipc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct mbox_chan *VAR_0)
{
 struct hi6220_mbox_chan *VAR_1 = VAR_0->con_priv;
 struct hi6220_mbox *VAR_2 = VAR_1->parent;


 FUNC_2(FUNC_1(VAR_1->ack_irq), FUNC_0(VAR_2->ipc));
 VAR_2->irq_map_chan[VAR_1->ack_irq] = ((void*)0);
}
