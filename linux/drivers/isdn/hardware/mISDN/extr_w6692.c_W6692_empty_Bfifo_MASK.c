
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct w6692_hw {char* name; int log; } ;
struct TYPE_2__ {scalar_t__ state; int dropcnt; int nr; scalar_t__ rx_skb; int Flags; struct w6692_hw* hw; } ;
struct w6692_ch {TYPE_1__ bch; scalar_t__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct w6692_ch*,int ,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int VAR_8 ;
 int FUNC_2 (scalar_t__,int *,int) ;
 int FUNC_3 (char*,char*,...) ;
 int FUNC_4 (char*,char*,int,int) ;
 int FUNC_5 (int ,int ,int *,int) ;
 int * FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (int ,int,char*,int,char*,int) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static void
FUNC_11(struct w6692_ch *VAR_9, int VAR_10)
{
 struct w6692_hw *VAR_11 = VAR_9->bch.hw;
 u8 *VAR_12;
 int VAR_13;

 FUNC_3("%s: empty_Bfifo %d\n", VAR_11->name, VAR_10);
 if (FUNC_10(VAR_9->bch.state == VAR_3)) {
  FUNC_3("%s: empty_Bfifo ISDN_P_NONE\n", VAR_11->name);
  FUNC_0(VAR_9, VAR_4, VAR_5 | VAR_6);
  if (VAR_9->bch.rx_skb)
   FUNC_7(VAR_9->bch.rx_skb, 0);
  return;
 }
 if (FUNC_9(VAR_2, &VAR_9->bch.Flags)) {
  VAR_9->bch.dropcnt += VAR_10;
  FUNC_0(VAR_9, VAR_4, VAR_5 | VAR_6);
  return;
 }
 VAR_13 = FUNC_1(&VAR_9->bch, VAR_10);
 if (VAR_13 < 0) {
  FUNC_0(VAR_9, VAR_4, VAR_5 | VAR_6);
  if (VAR_9->bch.rx_skb)
   FUNC_7(VAR_9->bch.rx_skb, 0);
  FUNC_4("%s.B%d: No bufferspace for %d bytes\n",
      VAR_11->name, VAR_9->bch.nr, VAR_10);
  return;
 }
 VAR_12 = FUNC_6(VAR_9->bch.rx_skb, VAR_10);
 FUNC_2(VAR_9->addr + VAR_7, VAR_12, VAR_10);
 FUNC_0(VAR_9, VAR_4, VAR_5 | VAR_6);
 if (VAR_8 & VAR_0) {
  FUNC_8(VAR_11->log, 63, "B%1d-recv %s %d ",
    VAR_9->bch.nr, VAR_11->name, VAR_10);
  FUNC_5(VAR_11->log, VAR_1, VAR_12, VAR_10);
 }
}
