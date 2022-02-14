
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct w6692_hw {int name; struct w6692_ch* bc; } ;
struct TYPE_2__ {int state; int Flags; scalar_t__ tx_idx; scalar_t__ tx_skb; int err_xdu; int nr; int err_rdo; scalar_t__ rx_skb; int err_inv; int err_crc; } ;
struct w6692_ch {TYPE_1__ bch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct w6692_ch*,int ) ;
 int FUNC_1 (struct w6692_ch*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_2 (struct w6692_ch*,int ,int) ;
 int FUNC_3 (char*,int ,int ,...) ;
 int FUNC_4 (char*,int ,int ,int) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (struct w6692_ch*) ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static void
FUNC_10(struct w6692_hw *VAR_23, int VAR_24)
{
 struct w6692_ch *VAR_25 = &VAR_23->bc[VAR_24];
 int VAR_26;
 u8 VAR_27, VAR_28 = 0;

 VAR_27 = FUNC_0(VAR_25, VAR_10);
 FUNC_3("%s: B%d EXIR %02x\n", VAR_23->name, VAR_25->bch.nr, VAR_27);
 if (VAR_27 & VAR_12) {
  VAR_28 = FUNC_0(VAR_25, VAR_18);
  if (VAR_28 & (VAR_20 | VAR_19 | VAR_21)) {
   if ((VAR_28 & VAR_20) &&
       FUNC_9(VAR_0, &VAR_25->bch.Flags)) {
    FUNC_3("%s: B%d RDOV proto=%x\n", VAR_23->name,
      VAR_25->bch.nr, VAR_25->bch.state);



   }
   if (FUNC_9(VAR_2, &VAR_25->bch.Flags)) {
    if (VAR_28 & VAR_19) {
     FUNC_3("%s: B%d CRC error\n",
       VAR_23->name, VAR_25->bch.nr);



    }
    if (VAR_28 & VAR_21) {
     FUNC_3("%s: B%d message abort\n",
       VAR_23->name, VAR_25->bch.nr);



    }
   }
   FUNC_2(VAR_25, VAR_5, VAR_6 |
        VAR_8 | VAR_7);
   if (VAR_25->bch.rx_skb)
    FUNC_7(VAR_25->bch.rx_skb, 0);
  } else {
   VAR_26 = FUNC_0(VAR_25, VAR_17) &
    (VAR_16 - 1);
   if (VAR_26 == 0)
    VAR_26 = VAR_16;
   FUNC_1(VAR_25, VAR_26);
   FUNC_5(&VAR_25->bch, 0, 0);
  }
 }
 if (VAR_27 & VAR_13) {
  if (!(VAR_27 & VAR_12))
   VAR_28 = FUNC_0(VAR_25, VAR_18);
  if (VAR_28 & VAR_20) {
   FUNC_3("%s: B%d RDOV proto=%x\n", VAR_23->name,
     VAR_25->bch.nr, VAR_25->bch.state);



   FUNC_2(VAR_25, VAR_5, VAR_6 |
        VAR_8 | VAR_7);
  } else {
   FUNC_1(VAR_25, VAR_16);
   if (FUNC_9(VAR_3, &VAR_25->bch.Flags))
    FUNC_5(&VAR_25->bch, 0, 0);
  }
 }
 if (VAR_27 & VAR_11) {

  if (!(VAR_28 & VAR_20)) {
   FUNC_3("%s: B%d RDOV IRQ proto=%x\n", VAR_23->name,
     VAR_25->bch.nr, VAR_25->bch.state);



   FUNC_2(VAR_25, VAR_5, VAR_6 |
        VAR_8 | VAR_7);
  }
 }
 if (VAR_27 & VAR_15) {
  if (!(VAR_27 & (VAR_12 | VAR_13))) {
   VAR_28 = FUNC_0(VAR_25, VAR_18);
   FUNC_3("%s: B%d star %02x\n", VAR_23->name,
     VAR_25->bch.nr, VAR_28);
  }
  if (VAR_28 & VAR_22) {
   FUNC_4("%s: B%d XDOW proto=%x\n", VAR_23->name,
       VAR_25->bch.nr, VAR_25->bch.state);



   FUNC_2(VAR_25, VAR_5, VAR_9 |
        VAR_7);

   if (VAR_25->bch.tx_skb) {
    if (!FUNC_9(VAR_3, &VAR_25->bch.Flags))
     VAR_25->bch.tx_idx = 0;
   }
  }
  FUNC_6(VAR_25);
  if (VAR_28 & VAR_22)
   return;
 }
 if (VAR_27 & VAR_14) {
  FUNC_4("%s: B%d XDUN proto=%x\n", VAR_23->name,
      VAR_25->bch.nr, VAR_25->bch.state);




  if (VAR_25->bch.tx_skb) {
   if (!FUNC_9(VAR_3, &VAR_25->bch.Flags))
    VAR_25->bch.tx_idx = 0;
  } else if (FUNC_9(VAR_1, &VAR_25->bch.Flags)) {
   FUNC_8(VAR_4, &VAR_25->bch.Flags);
  }
  FUNC_6(VAR_25);
 }
}
