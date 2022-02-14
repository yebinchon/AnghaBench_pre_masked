
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ tx_idx; TYPE_2__* tx_skb; int timer; int Flags; } ;
struct w6692_hw {TYPE_1__ dch; } ;
struct TYPE_4__ {scalar_t__ len; } ;


 int VAR_0 ;
 int FUNC_0 (struct w6692_hw*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void
FUNC_5(struct w6692_hw *VAR_1) {
 if (FUNC_4(VAR_0, &VAR_1->dch.Flags))
  FUNC_1(&VAR_1->dch.timer);
 if (VAR_1->dch.tx_skb && VAR_1->dch.tx_idx < VAR_1->dch.tx_skb->len) {
  FUNC_0(VAR_1);
 } else {
  FUNC_2(VAR_1->dch.tx_skb);
  if (FUNC_3(&VAR_1->dch))
   FUNC_0(VAR_1);
 }
}
