
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mISDNhead {int id; int prim; } ;
struct dchannel {TYPE_1__* rx_skb; int rqueue; } ;
struct TYPE_4__ {int len; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 struct mISDNhead* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct dchannel*,int ) ;
 int FUNC_4 (int *,TYPE_1__*) ;

void
FUNC_5(struct dchannel *VAR_2)
{
 struct mISDNhead *VAR_3;

 if (VAR_2->rx_skb->len < 2) {
  FUNC_0(VAR_2->rx_skb);
  VAR_2->rx_skb = ((void*)0);
  return;
 }
 VAR_3 = FUNC_2(VAR_2->rx_skb);
 VAR_3->prim = VAR_1;
 VAR_3->id = FUNC_1(VAR_2->rx_skb->data);
 FUNC_4(&VAR_2->rqueue, VAR_2->rx_skb);
 VAR_2->rx_skb = ((void*)0);
 FUNC_3(VAR_2, VAR_0);
}
