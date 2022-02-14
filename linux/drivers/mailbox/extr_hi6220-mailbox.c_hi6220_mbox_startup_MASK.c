
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbox_chan {struct hi6220_mbox_chan* con_priv; } ;
struct hi6220_mbox_chan {int ack_irq; scalar_t__ dir; struct hi6220_mbox* parent; } ;
struct hi6220_mbox {int ipc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct mbox_chan *VAR_0)
{
 struct hi6220_mbox_chan *VAR_1 = VAR_0->con_priv;
 struct hi6220_mbox *VAR_2 = VAR_1->parent;

 VAR_1->dir = 0;


 FUNC_2(FUNC_1(VAR_1->ack_irq), FUNC_0(VAR_2->ipc));
 return 0;
}
