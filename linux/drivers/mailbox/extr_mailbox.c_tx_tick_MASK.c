
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbox_chan {int tx_complete; TYPE_1__* cl; int lock; int * active_req; } ;
struct TYPE_2__ {scalar_t__ tx_block; int (* tx_done ) (TYPE_1__*,void*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mbox_chan*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (TYPE_1__*,void*,int) ;

__attribute__((used)) static void FUNC_5(struct mbox_chan *VAR_1, int VAR_2)
{
 unsigned long VAR_3;
 void *VAR_4;

 FUNC_2(&VAR_1->lock, VAR_3);
 VAR_4 = VAR_1->active_req;
 VAR_1->active_req = ((void*)0);
 FUNC_3(&VAR_1->lock, VAR_3);


 FUNC_1(VAR_1);

 if (!VAR_4)
  return;


 if (VAR_1->cl->tx_done)
  VAR_1->cl->tx_done(VAR_1->cl, VAR_4, VAR_2);

 if (VAR_2 != -VAR_0 && VAR_1->cl->tx_block)
  FUNC_0(&VAR_1->tx_complete);
}
