
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ tx_idx; int Flags; TYPE_2__* tx_skb; } ;
struct tiger_ch {TYPE_1__ bch; } ;
struct TYPE_4__ {scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct tiger_ch*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static int
FUNC_6(struct tiger_ch *VAR_2)
{
 int VAR_3 = 1;

 if (VAR_2->bch.tx_skb && VAR_2->bch.tx_idx < VAR_2->bch.tx_skb->len) {
  FUNC_1(VAR_2);
 } else {
  FUNC_0(VAR_2->bch.tx_skb);
  if (FUNC_2(&VAR_2->bch)) {
   FUNC_1(VAR_2);
   FUNC_3(VAR_1, &VAR_2->bch.Flags);
  } else if (FUNC_5(VAR_1, &VAR_2->bch.Flags)) {
   FUNC_1(VAR_2);
  } else if (FUNC_5(VAR_0, &VAR_2->bch.Flags)) {
   FUNC_4(VAR_1, &VAR_2->bch.Flags);
   VAR_3 = 0;
  } else {
   VAR_3 = 0;
  }
 }
 return VAR_3;
}
