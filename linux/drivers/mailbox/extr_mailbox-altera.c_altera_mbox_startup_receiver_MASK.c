
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbox_chan {int dummy; } ;
struct altera_mbox {int intr_mode; int rxpoll_timer; struct mbox_chan* chan; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct altera_mbox*,int) ;
 scalar_t__ VAR_4 ;
 struct altera_mbox* FUNC_1 (struct mbox_chan*) ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int ,struct mbox_chan*) ;
 int FUNC_5 (int *,int ,int ) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct mbox_chan *VAR_5)
{
 int VAR_6;
 struct altera_mbox *VAR_7 = FUNC_1(VAR_5);

 if (VAR_7->intr_mode) {
  VAR_6 = FUNC_4(VAR_7->irq, VAR_3, 0,
      VAR_0, VAR_5);
  if (FUNC_6(VAR_6)) {
   VAR_7->intr_mode = 0;
   goto polling;
  }

  FUNC_0(VAR_7, 1);
  return 0;
 }

polling:

 VAR_7->chan = VAR_5;
 FUNC_5(&VAR_7->rxpoll_timer, VAR_2, 0);
 FUNC_2(&VAR_7->rxpoll_timer,
    VAR_4 + FUNC_3(VAR_1));

 return 0;
}
