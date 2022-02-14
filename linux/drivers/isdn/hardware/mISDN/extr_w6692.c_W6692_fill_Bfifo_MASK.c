
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct w6692_hw {char* name; int log; } ;
struct TYPE_4__ {int* fill; int tx_idx; int nr; int Flags; TYPE_1__* tx_skb; struct w6692_hw* hw; } ;
struct w6692_ch {TYPE_2__ bch; scalar_t__ addr; } ;
struct TYPE_3__ {int len; int* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct w6692_ch*,int ,int) ;
 int VAR_11 ;
 int FUNC_1 (scalar_t__,int*,int) ;
 int FUNC_2 (char*,char*,...) ;
 int FUNC_3 (int ,int ,int*,int) ;
 int FUNC_4 (int ,int,char*,int,char*,int) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void
FUNC_6(struct w6692_ch *VAR_12)
{
 struct w6692_hw *VAR_13 = VAR_12->bch.hw;
 int VAR_14, VAR_15 = 0;
 u8 *VAR_16, VAR_17 = VAR_6 | VAR_8;

 FUNC_2("%s: fill Bfifo\n", VAR_13->name);
 if (!VAR_12->bch.tx_skb) {
  if (!FUNC_5(VAR_3, &VAR_12->bch.Flags))
   return;
  VAR_16 = VAR_12->bch.fill;
  VAR_14 = VAR_9;
  VAR_15 = 1;
 } else {
  VAR_14 = VAR_12->bch.tx_skb->len - VAR_12->bch.tx_idx;
  if (VAR_14 <= 0)
   return;
  VAR_16 = VAR_12->bch.tx_skb->data + VAR_12->bch.tx_idx;
 }
 if (VAR_14 > VAR_9)
  VAR_14 = VAR_9;
 else if (FUNC_5(VAR_2, &VAR_12->bch.Flags))
  VAR_17 |= VAR_7;

 FUNC_2("%s: fill Bfifo%d/%d\n", VAR_13->name,
   VAR_14, VAR_12->bch.tx_idx);
 VAR_12->bch.tx_idx += VAR_14;
 if (VAR_15) {
  while (VAR_14 > 0) {
   FUNC_1(VAR_12->addr + VAR_10, VAR_16, VAR_4);
   VAR_14 -= VAR_4;
  }
 } else {
  FUNC_1(VAR_12->addr + VAR_10, VAR_16, VAR_14);
 }
 FUNC_0(VAR_12, VAR_5, VAR_17);
 if ((VAR_11 & VAR_0) && !VAR_15) {
  FUNC_4(VAR_13->log, 63, "B%1d-send %s %d ",
    VAR_12->bch.nr, VAR_13->name, VAR_14);
  FUNC_3(VAR_13->log, VAR_1, VAR_16, VAR_14);
 }
}
