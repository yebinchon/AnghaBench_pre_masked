
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_queue_inst {int rx_buff; int irq; int is_tx; } ;
struct mbox_chan {struct ti_queue_inst* con_priv; } ;


 int FUNC_0 (int ,struct mbox_chan*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct mbox_chan *VAR_0)
{
 struct ti_queue_inst *VAR_1 = VAR_0->con_priv;

 if (!VAR_1->is_tx) {
  FUNC_0(VAR_1->irq, VAR_0);
  FUNC_1(VAR_1->rx_buff);
 }
}
