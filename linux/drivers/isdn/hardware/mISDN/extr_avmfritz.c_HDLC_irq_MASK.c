
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int cmd; scalar_t__ xml; } ;
struct TYPE_6__ {TYPE_2__ sr; } ;
struct hdlc_hw {TYPE_3__ ctrl; } ;
struct fritzcard {scalar_t__ type; int name; struct hdlc_hw* hdlc; } ;
struct bchannel {int nr; int Flags; scalar_t__ tx_idx; TYPE_1__* tx_skb; scalar_t__ rx_skb; struct fritzcard* hw; } ;
struct TYPE_4__ {scalar_t__ len; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
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
 int FUNC_0 (struct bchannel*) ;
 int FUNC_1 (struct bchannel*,int) ;
 int FUNC_2 (char*,int ,int,int) ;
 int FUNC_3 (char*,int ,...) ;
 int FUNC_4 (struct bchannel*,int ,int) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 int FUNC_8 (struct bchannel*,int) ;

__attribute__((used)) static void
FUNC_9(struct bchannel *VAR_17, u32 VAR_18)
{
 struct fritzcard *VAR_19 = VAR_17->hw;
 int VAR_20, VAR_21;
 u32 VAR_22;
 struct hdlc_hw *VAR_23;

 VAR_23 = &VAR_19->hdlc[(VAR_17->nr - 1) & 1];
 FUNC_2("%s: ch%d stat %#x\n", VAR_19->name, VAR_17->nr, VAR_18);
 if (VAR_19->type == VAR_0) {
  VAR_22 = VAR_16;
  VAR_21 = VAR_7;
 } else {
  VAR_22 = VAR_15;
  VAR_21 = VAR_6;
 }
 if (VAR_18 & VAR_8) {
  if (VAR_18 & VAR_13) {
   FUNC_3("%s: ch%d stat %x RDO\n",
       VAR_19->name, VAR_17->nr, VAR_18);
   VAR_23->ctrl.sr.xml = 0;
   VAR_23->ctrl.sr.cmd |= VAR_4;
   FUNC_8(VAR_17, 1);
   VAR_23->ctrl.sr.cmd &= ~VAR_4;
   FUNC_8(VAR_17, 1);
   if (VAR_17->rx_skb)
    FUNC_5(VAR_17->rx_skb, 0);
  } else {
   VAR_20 = (VAR_18 & VAR_22) >> 8;
   if (!VAR_20)
    VAR_20 = VAR_21;
   FUNC_1(VAR_17, VAR_20);
   if (!VAR_17->rx_skb)
    goto handle_tx;
   if (FUNC_7(VAR_2, &VAR_17->Flags)) {
    FUNC_4(VAR_17, 0, 0);
   } else if (VAR_18 & VAR_14) {
    if ((VAR_18 & VAR_12) ==
        VAR_11) {
     FUNC_4(VAR_17, 0, 0);
    } else {
     FUNC_3("%s: got invalid frame\n",
         VAR_19->name);
     FUNC_5(VAR_17->rx_skb, 0);
    }
   }
  }
 }
handle_tx:
 if (VAR_18 & VAR_9) {




  FUNC_3("%s: ch%d stat %x XDU %s\n", VAR_19->name, VAR_17->nr,
      VAR_18, VAR_17->tx_skb ? "tx_skb" : "no tx_skb");
  if (VAR_17->tx_skb && VAR_17->tx_skb->len) {
   if (!FUNC_7(VAR_2, &VAR_17->Flags))
    VAR_17->tx_idx = 0;
  } else if (FUNC_7(VAR_1, &VAR_17->Flags)) {
   FUNC_6(VAR_3, &VAR_17->Flags);
  }
  VAR_23->ctrl.sr.xml = 0;
  VAR_23->ctrl.sr.cmd |= VAR_5;
  FUNC_8(VAR_17, 1);
  VAR_23->ctrl.sr.cmd &= ~VAR_5;
  FUNC_0(VAR_17);
  return;
 } else if (VAR_18 & VAR_10)
  FUNC_0(VAR_17);
}
