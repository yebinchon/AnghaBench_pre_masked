
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct dchannel {int maxlen; TYPE_1__* rx_skb; } ;
struct w6692_hw {char* name; int log; scalar_t__ addr; struct dchannel dch; } ;
struct TYPE_3__ {int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct w6692_hw*,int ,int ) ;
 int VAR_6 ;
 int FUNC_1 (scalar_t__,int *,int) ;
 TYPE_1__* FUNC_2 (int,int ) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,int ,int *,int) ;
 int * FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (int ,int,char*,char*,int) ;

__attribute__((used)) static void
FUNC_8(struct w6692_hw *VAR_7, int VAR_8)
{
 struct dchannel *VAR_9 = &VAR_7->dch;
 u8 *VAR_10;

 FUNC_3("%s: empty_Dfifo %d\n", VAR_7->name, VAR_8);
 if (!VAR_9->rx_skb) {
  VAR_9->rx_skb = FUNC_2(VAR_7->dch.maxlen, VAR_2);
  if (!VAR_9->rx_skb) {
   FUNC_4("%s: D receive out of memory\n", VAR_7->name);
   FUNC_0(VAR_7, VAR_3, VAR_4);
   return;
  }
 }
 if ((VAR_9->rx_skb->len + VAR_8) >= VAR_9->maxlen) {
  FUNC_3("%s: empty_Dfifo overrun %d\n", VAR_7->name,
    VAR_9->rx_skb->len + VAR_8);
  FUNC_0(VAR_7, VAR_3, VAR_4);
  return;
 }
 VAR_10 = FUNC_6(VAR_9->rx_skb, VAR_8);
 FUNC_1(VAR_7->addr + VAR_5, VAR_10, VAR_8);
 FUNC_0(VAR_7, VAR_3, VAR_4);
 if (VAR_6 & VAR_0) {
  FUNC_7(VAR_7->log, 63, "D-recv %s %d ",
    VAR_7->name, VAR_8);
  FUNC_5(VAR_7->log, VAR_1, VAR_10, VAR_8);
 }
}
