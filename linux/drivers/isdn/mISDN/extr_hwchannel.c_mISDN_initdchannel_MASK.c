
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bchannels; } ;
struct dchannel {int maxlen; int workq; TYPE_1__ dev; int rqueue; int squeue; void* phfunc; scalar_t__ tx_idx; int * tx_skb; int * rx_skb; int * hw; int Flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;

int
FUNC_4(struct dchannel *VAR_2, int VAR_3, void *VAR_4)
{
 FUNC_3(VAR_0, &VAR_2->Flags);
 VAR_2->maxlen = VAR_3;
 VAR_2->hw = ((void*)0);
 VAR_2->rx_skb = ((void*)0);
 VAR_2->tx_skb = ((void*)0);
 VAR_2->tx_idx = 0;
 VAR_2->phfunc = VAR_4;
 FUNC_2(&VAR_2->squeue);
 FUNC_2(&VAR_2->rqueue);
 FUNC_0(&VAR_2->dev.bchannels);
 FUNC_1(&VAR_2->workq, VAR_1);
 return 0;
}
