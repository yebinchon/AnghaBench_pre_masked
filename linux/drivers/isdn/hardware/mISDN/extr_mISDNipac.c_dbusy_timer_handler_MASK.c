
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct timer_list {int dummy; } ;
struct TYPE_3__ {scalar_t__ tx_idx; int Flags; } ;
struct isac_hw {int hwlock; int name; TYPE_1__ dch; } ;
struct TYPE_4__ {int timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct isac_hw*,int ) ;
 int FUNC_1 (struct isac_hw*,int ,int) ;
 TYPE_2__ VAR_6 ;
 struct isac_hw* FUNC_2 (int ,struct timer_list*,int ) ;
 struct isac_hw* VAR_7 ;
 int FUNC_3 (char*,int ,int,int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static void
FUNC_10(struct timer_list *VAR_8)
{
 struct isac_hw *VAR_9 = FUNC_2(VAR_9, VAR_8, VAR_6.timer);
 int VAR_10, VAR_11;
 u_long VAR_12;

 if (FUNC_9(VAR_0, &VAR_9->dch.Flags)) {
  FUNC_5(VAR_9->hwlock, VAR_12);
  VAR_10 = FUNC_0(VAR_9, VAR_3);
  VAR_11 = FUNC_0(VAR_9, VAR_5);
  FUNC_3("%s: D-Channel Busy RBCH %02x STAR %02x\n",
    VAR_9->name, VAR_10, VAR_11);
  if (VAR_10 & VAR_4)
   FUNC_8(VAR_1, &VAR_9->dch.Flags);
  else {

   FUNC_7(VAR_0, &VAR_9->dch.Flags);
   if (VAR_9->dch.tx_idx)
    VAR_9->dch.tx_idx = 0;
   else
    FUNC_4("%s: ISAC D-Channel Busy no tx_idx\n",
     VAR_9->name);

   FUNC_1(VAR_9, VAR_2, 0x01);
  }
  FUNC_6(VAR_9->hwlock, VAR_12);
 }
}
