
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct w6692_hw {int lock; int name; } ;
struct timer_list {int dummy; } ;
struct dchannel {scalar_t__ tx_idx; int Flags; struct w6692_hw* hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct w6692_hw*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct w6692_hw*,int ,int ) ;
 struct dchannel* VAR_7 ;
 struct dchannel* FUNC_2 (int ,struct timer_list*,int ) ;
 int FUNC_3 (char*,int ,int,int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_10(struct timer_list *VAR_9)
{
 struct dchannel *VAR_10 = FUNC_2(VAR_10, VAR_9, VAR_8);
 struct w6692_hw *VAR_11 = VAR_10->hw;
 int VAR_12, VAR_13;
 u_long VAR_14;

 if (FUNC_9(VAR_0, &VAR_10->Flags)) {
  FUNC_5(&VAR_11->lock, VAR_14);
  VAR_12 = FUNC_0(VAR_11, VAR_4);
  VAR_13 = FUNC_0(VAR_11, VAR_5);
  FUNC_3("%s: D-Channel Busy RBCH %02x STAR %02x\n",
    VAR_11->name, VAR_12, VAR_13);
  if (VAR_13 & VAR_6)
   FUNC_8(VAR_1, &VAR_10->Flags);
  else {

   FUNC_7(VAR_0, &VAR_10->Flags);
   if (VAR_10->tx_idx)
    VAR_10->tx_idx = 0;
   else
    FUNC_4("%s: W6692 D-Channel Busy no tx_idx\n",
     VAR_11->name);

   FUNC_1(VAR_11, VAR_2, VAR_3);
  }
  FUNC_6(&VAR_11->lock, VAR_14);
 }
}
