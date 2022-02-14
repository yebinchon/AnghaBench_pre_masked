
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {scalar_t__ expires; } ;
struct dchannel {int tx_idx; TYPE_2__ timer; int Flags; TYPE_1__* tx_skb; } ;
struct w6692_hw {char* name; int log; scalar_t__ addr; struct dchannel dch; } ;
struct TYPE_4__ {int len; int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct w6692_hw*,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_10 ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (scalar_t__,int *,int) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,int ,int *,int) ;
 int FUNC_6 (int ,int,char*,char*,int) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static void
FUNC_8(struct w6692_hw *VAR_12)
{
 struct dchannel *VAR_13 = &VAR_12->dch;
 int VAR_14;
 u8 *VAR_15;
 u8 VAR_16 = VAR_7;

 FUNC_4("%s: fill_Dfifo\n", VAR_12->name);
 if (!VAR_13->tx_skb)
  return;
 VAR_14 = VAR_13->tx_skb->len - VAR_13->tx_idx;
 if (VAR_14 <= 0)
  return;
 if (VAR_14 > VAR_8)
  VAR_14 = VAR_8;
 else
  VAR_16 |= VAR_6;
 VAR_15 = VAR_13->tx_skb->data + VAR_13->tx_idx;
 VAR_13->tx_idx += VAR_14;
 FUNC_3(VAR_12->addr + VAR_9, VAR_15, VAR_14);
 FUNC_0(VAR_12, VAR_5, VAR_16);
 if (FUNC_7(VAR_3, &VAR_13->Flags)) {
  FUNC_4("%s: fill_Dfifo dbusytimer running\n", VAR_12->name);
  FUNC_2(&VAR_13->timer);
 }
 VAR_13->timer.expires = VAR_11 + ((VAR_0 * VAR_4) / 1000);
 FUNC_1(&VAR_13->timer);
 if (VAR_10 & VAR_1) {
  FUNC_6(VAR_12->log, 63, "D-send %s %d ",
    VAR_12->name, VAR_14);
  FUNC_5(VAR_12->log, VAR_2, VAR_15, VAR_14);
 }
}
