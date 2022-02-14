
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bchannel {scalar_t__ rcount; int rqueue; int init_maxlen; int next_maxlen; int maxlen; int init_minlen; int next_minlen; int minlen; scalar_t__ dropcnt; int Flags; int * next_skb; int * rx_skb; scalar_t__ tx_idx; int * tx_skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;

void
FUNC_3(struct bchannel *VAR_6)
{
 if (VAR_6->tx_skb) {
  FUNC_0(VAR_6->tx_skb);
  VAR_6->tx_skb = ((void*)0);
 }
 VAR_6->tx_idx = 0;
 if (VAR_6->rx_skb) {
  FUNC_0(VAR_6->rx_skb);
  VAR_6->rx_skb = ((void*)0);
 }
 if (VAR_6->next_skb) {
  FUNC_0(VAR_6->next_skb);
  VAR_6->next_skb = ((void*)0);
 }
 FUNC_2(VAR_3, &VAR_6->Flags);
 FUNC_2(VAR_5, &VAR_6->Flags);
 FUNC_2(VAR_0, &VAR_6->Flags);
 FUNC_2(VAR_1, &VAR_6->Flags);
 FUNC_2(VAR_4, &VAR_6->Flags);
 FUNC_2(VAR_2, &VAR_6->Flags);
 VAR_6->dropcnt = 0;
 VAR_6->minlen = VAR_6->init_minlen;
 VAR_6->next_minlen = VAR_6->init_minlen;
 VAR_6->maxlen = VAR_6->init_maxlen;
 VAR_6->next_maxlen = VAR_6->init_maxlen;
 FUNC_1(&VAR_6->rqueue);
 VAR_6->rcount = 0;
}
