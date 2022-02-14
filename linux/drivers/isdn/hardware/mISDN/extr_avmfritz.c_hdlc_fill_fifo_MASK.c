
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_5__ {int xml; int cmd; } ;
struct TYPE_6__ {TYPE_2__ sr; } ;
struct hdlc_hw {TYPE_3__ ctrl; } ;
struct fritzcard {scalar_t__ type; char* name; int log; scalar_t__ addr; struct hdlc_hw* hdlc; } ;
struct bchannel {int nr; int tx_idx; TYPE_1__* tx_skb; int Flags; int * fill; struct fritzcard* hw; } ;
struct TYPE_4__ {int len; int * data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct fritzcard*,struct hdlc_hw*,int) ;
 int FUNC_1 (struct fritzcard*,struct hdlc_hw*,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_12 ;
 scalar_t__ FUNC_3 (scalar_t__*) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (char*,char*,int,int,...) ;
 int FUNC_6 (int ,int ,int *,int) ;
 int FUNC_7 (int ,int ,char*,int,char*,int) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static void
FUNC_9(struct bchannel *VAR_13)
{
 struct fritzcard *VAR_14 = VAR_13->hw;
 struct hdlc_hw *VAR_15;
 int VAR_16, VAR_17, VAR_18 = 0, VAR_19;
 bool VAR_20 = 0;
 u8 *VAR_21;
 u32 *VAR_22, VAR_23, VAR_24;

 VAR_19 = (VAR_13->nr - 1) & 1;
 VAR_15 = &VAR_14->hdlc[VAR_19];
 VAR_17 = (VAR_14->type == VAR_0) ?
  VAR_10 : VAR_9;
 if (!VAR_13->tx_skb) {
  if (!FUNC_8(VAR_7, &VAR_13->Flags))
   return;
  VAR_16 = VAR_17;
  VAR_21 = VAR_13->fill;
  VAR_20 = 1;
 } else {
  VAR_16 = VAR_13->tx_skb->len - VAR_13->tx_idx;
  if (VAR_16 <= 0)
   return;
  VAR_21 = VAR_13->tx_skb->data + VAR_13->tx_idx;
 }
 VAR_15->ctrl.sr.cmd &= ~VAR_8;
 if (VAR_16 > VAR_17) {
  VAR_16 = VAR_17;
 } else {
  if (FUNC_8(VAR_6, &VAR_13->Flags))
   VAR_15->ctrl.sr.cmd |= VAR_8;
 }
 VAR_22 = (u32 *)VAR_21;
 if (!VAR_20) {
  FUNC_5("%s.B%d: %d/%d/%d", VAR_14->name, VAR_13->nr, VAR_16,
    VAR_13->tx_idx, VAR_13->tx_skb->len);
  VAR_13->tx_idx += VAR_16;
 } else {
  FUNC_5("%s.B%d: fillempty %d\n", VAR_14->name, VAR_13->nr, VAR_16);
 }
 VAR_15->ctrl.sr.xml = ((VAR_16 == VAR_17) ? 0 : VAR_16);
 if (VAR_14->type == VAR_0) {
  FUNC_1(VAR_14, VAR_15, VAR_13->nr);
  VAR_24 = VAR_14->addr + (VAR_13->nr == 2 ?
       VAR_2 : VAR_1);
 } else {
  FUNC_0(VAR_14, VAR_15, VAR_13->nr);
  VAR_24 = VAR_14->addr + VAR_3;
 }
 if (VAR_20) {
  while (VAR_18 < VAR_16) {

   FUNC_4(*VAR_22, VAR_24);
   VAR_18 += 4;
  }
 } else {
  while (VAR_18 < VAR_16) {
   VAR_23 = FUNC_3(VAR_22);
   FUNC_4(FUNC_2(VAR_23), VAR_24);
   VAR_22++;
   VAR_18 += 4;
  }
 }
 if ((VAR_12 & VAR_4) && !VAR_20) {
  FUNC_7(VAR_14->log, VAR_11, "B%1d-send %s %d ",
    VAR_13->nr, VAR_14->name, VAR_16);
  FUNC_6(VAR_14->log, VAR_5, VAR_21, VAR_16);
 }
}
