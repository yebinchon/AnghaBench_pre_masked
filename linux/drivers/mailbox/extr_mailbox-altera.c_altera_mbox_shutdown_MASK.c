
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbox_chan {int dummy; } ;
struct altera_mbox {int rxpoll_timer; int is_sender; int irq; scalar_t__ mbox_base; scalar_t__ intr_mode; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct mbox_chan*) ;
 struct altera_mbox* FUNC_2 (struct mbox_chan*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct mbox_chan *VAR_1)
{
 struct altera_mbox *VAR_2 = FUNC_2(VAR_1);

 if (VAR_2->intr_mode) {

  FUNC_3(~0, VAR_2->mbox_base + VAR_0);
  FUNC_1(VAR_2->irq, VAR_1);
 } else if (!VAR_2->is_sender) {
  FUNC_0(&VAR_2->rxpoll_timer);
 }
}
