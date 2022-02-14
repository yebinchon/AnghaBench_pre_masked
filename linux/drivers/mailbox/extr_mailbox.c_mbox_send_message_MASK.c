
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mbox_chan {int tx_complete; TYPE_2__* cl; TYPE_1__* mbox; } ;
struct TYPE_4__ {int tx_tout; scalar_t__ tx_block; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mbox_chan*,void*) ;
 int FUNC_1 (int ,char*) ;
 unsigned long FUNC_2 (int) ;
 int FUNC_3 (struct mbox_chan*) ;
 int FUNC_4 (struct mbox_chan*,int) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(struct mbox_chan *VAR_2, void *VAR_3)
{
 int VAR_4;

 if (!VAR_2 || !VAR_2->cl)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (VAR_4 < 0) {
  FUNC_1(VAR_2->mbox->dev, "Try increasing MBOX_TX_QUEUE_LEN\n");
  return VAR_4;
 }

 FUNC_3(VAR_2);

 if (VAR_2->cl->tx_block) {
  unsigned long VAR_5;
  int VAR_6;

  if (!VAR_2->cl->tx_tout)
   VAR_5 = FUNC_2(3600000);
  else
   VAR_5 = FUNC_2(VAR_2->cl->tx_tout);

  VAR_6 = FUNC_5(&VAR_2->tx_complete, VAR_5);
  if (VAR_6 == 0) {
   VAR_4 = -VAR_1;
   FUNC_4(VAR_2, VAR_4);
  }
 }

 return VAR_4;
}
