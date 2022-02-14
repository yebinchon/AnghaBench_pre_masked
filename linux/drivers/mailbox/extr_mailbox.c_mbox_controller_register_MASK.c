
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int function; } ;
struct mbox_controller {int num_chans; int node; scalar_t__ of_xlate; struct mbox_chan* chans; TYPE_2__ poll_hrt; int dev; TYPE_1__* ops; scalar_t__ txdone_poll; scalar_t__ txdone_irq; } ;
struct mbox_chan {int txdone_method; int lock; struct mbox_controller* mbox; int * cl; } ;
struct TYPE_3__ {int last_tx_done; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_7 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (int *) ;
 int VAR_9 ;

int FUNC_6(struct mbox_controller *VAR_10)
{
 int VAR_11, VAR_12;


 if (!VAR_10 || !VAR_10->dev || !VAR_10->ops || !VAR_10->num_chans)
  return -VAR_1;

 if (VAR_10->txdone_irq)
  VAR_12 = VAR_4;
 else if (VAR_10->txdone_poll)
  VAR_12 = VAR_5;
 else
  VAR_12 = VAR_3;

 if (VAR_12 == VAR_5) {

  if (!VAR_10->ops->last_tx_done) {
   FUNC_0(VAR_10->dev, "last_tx_done method is absent\n");
   return -VAR_1;
  }

  FUNC_1(&VAR_10->poll_hrt, VAR_0,
        VAR_2);
  VAR_10->poll_hrt.function = VAR_9;
 }

 for (VAR_11 = 0; VAR_11 < VAR_10->num_chans; VAR_11++) {
  struct mbox_chan *VAR_13 = &VAR_10->chans[VAR_11];

  VAR_13->cl = ((void*)0);
  VAR_13->mbox = VAR_10;
  VAR_13->txdone_method = VAR_12;
  FUNC_5(&VAR_13->lock);
 }

 if (!VAR_10->of_xlate)
  VAR_10->of_xlate = VAR_8;

 FUNC_3(&VAR_6);
 FUNC_2(&VAR_10->node, &VAR_7);
 FUNC_4(&VAR_6);

 return 0;
}
