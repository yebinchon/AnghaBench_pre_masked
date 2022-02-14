
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mthca_mailbox {int dma; int buf; } ;
struct TYPE_2__ {int pool; } ;
struct mthca_dev {TYPE_1__ cmd; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct mthca_mailbox*) ;

void FUNC_2(struct mthca_dev *VAR_0, struct mthca_mailbox *VAR_1)
{
 if (!VAR_1)
  return;

 FUNC_0(VAR_0->cmd.pool, VAR_1->buf, VAR_1->dma);
 FUNC_1(VAR_1);
}
