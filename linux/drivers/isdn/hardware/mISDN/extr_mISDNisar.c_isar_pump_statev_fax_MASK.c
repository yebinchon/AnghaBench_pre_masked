
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int Flags; } ;
struct TYPE_7__ {int expires; } ;
struct isar_ch {void* state; int cmd; int mod; int newcmd; int newmod; int try_mod; TYPE_2__* is; TYPE_1__ bch; TYPE_3__ ftimer; int dpath; } ;
struct TYPE_6__ {int name; int Flags; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;




 int VAR_17 ;
 int FUNC_0 (int ) ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_24 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (struct isar_ch*,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int VAR_25 ;
 int FUNC_5 (char*,int ,...) ;
 int FUNC_6 (TYPE_2__*,int,int,int,int*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static void
FUNC_10(struct isar_ch *VAR_26, u8 VAR_27) {
 u8 VAR_28 = FUNC_0(VAR_26->dpath);
 u8 VAR_29;

 switch (VAR_27) {
 case 139:
  FUNC_5("%s: pump stev TIMER\n", VAR_26->is->name);
  break;
 case 130:
  FUNC_5("%s: pump stev RSP_READY\n", VAR_26->is->name);
  VAR_26->state = VAR_22;
  FUNC_3(VAR_26, VAR_10);






  break;
 case 134:
  if (VAR_26->state == VAR_21) {
   FUNC_5("%s: pump stev LINE_TX_H\n", VAR_26->is->name);
   VAR_26->state = VAR_19;
   FUNC_6(VAR_26->is, VAR_28 | VAR_13,
      VAR_15, 0, ((void*)0));
  } else {
   FUNC_5("%s: pump stev LINE_TX_H wrong st %x\n",
     VAR_26->is->name, VAR_26->state);
  }
  break;
 case 136:
  if (VAR_26->state == VAR_21) {
   FUNC_5("%s: pump stev LINE_RX_H\n", VAR_26->is->name);
   VAR_26->state = VAR_19;
   FUNC_6(VAR_26->is, VAR_28 | VAR_13,
      VAR_15, 0, ((void*)0));
  } else {
   FUNC_5("%s: pump stev LINE_RX_H wrong st %x\n",
     VAR_26->is->name, VAR_26->state);
  }
  break;
 case 135:
  if (VAR_26->state == VAR_21) {
   FUNC_5("%s: pump stev LINE_TX_B\n", VAR_26->is->name);
   VAR_26->state = VAR_19;
   FUNC_6(VAR_26->is, VAR_28 | VAR_13,
      VAR_15, 0, ((void*)0));
  } else {
   FUNC_5("%s: pump stev LINE_TX_B wrong st %x\n",
     VAR_26->is->name, VAR_26->state);
  }
  break;
 case 137:
  if (VAR_26->state == VAR_21) {
   FUNC_5("%s: pump stev LINE_RX_B\n", VAR_26->is->name);
   VAR_26->state = VAR_19;
   FUNC_6(VAR_26->is, VAR_28 | VAR_13,
      VAR_15, 0, ((void*)0));
  } else {
   FUNC_5("%s: pump stev LINE_RX_B wrong st %x\n",
     VAR_26->is->name, VAR_26->state);
  }
  break;
 case 133:
  if (VAR_26->state == VAR_19) {
   FUNC_5("%s: pump stev RSP_CONN\n", VAR_26->is->name);
   VAR_26->state = VAR_18;
   FUNC_8(VAR_14, &VAR_26->is->Flags);
   FUNC_6(VAR_26->is, VAR_28 | VAR_12, 0, 0, ((void*)0));
   if (VAR_26->cmd == 141) {
    int VAR_30 = (VAR_26->mod == 3) ? 1000 : 200;

    if (FUNC_8(VAR_1,
           &VAR_26->bch.Flags))
     FUNC_2(&VAR_26->ftimer);
    VAR_26->ftimer.expires =
     VAR_25 + ((VAR_30 * VAR_11) / 1000);
    FUNC_8(VAR_2,
       &VAR_26->bch.Flags);
    FUNC_1(&VAR_26->ftimer);
   } else {
    FUNC_3(VAR_26, VAR_4);
   }
  } else {
   FUNC_5("%s: pump stev RSP_CONN wrong st %x\n",
     VAR_26->is->name, VAR_26->state);
  }
  break;
 case 138:
  FUNC_5("%s: pump stev FLAGS_DET\n", VAR_26->is->name);
  break;
 case 132:
  FUNC_5("%s: pump stev RSP_DISC state(%d)\n",
    VAR_26->is->name, VAR_26->state);
  if (VAR_26->state == VAR_20) {
   VAR_29 = 5;
   switch (VAR_26->newcmd) {
   case 0:
    VAR_26->state = VAR_22;
    break;
   case 140:
    VAR_29 = 2;

   case 141:
    FUNC_6(VAR_26->is, VAR_28 | VAR_13,
       VAR_17, 1, &VAR_29);
    VAR_26->state = VAR_23;
    break;
   case 143:
   case 142:
    VAR_26->mod = VAR_26->newmod;
    VAR_29 = VAR_26->newmod;
    VAR_26->newmod = 0;
    VAR_26->cmd = VAR_26->newcmd;
    VAR_26->newcmd = 0;
    FUNC_6(VAR_26->is, VAR_28 | VAR_13,
       VAR_26->cmd, 1, &VAR_29);
    VAR_26->state = VAR_21;
    VAR_26->try_mod = 3;
    break;
   default:
    FUNC_5("%s: RSP_DISC unknown newcmd %x\n",
      VAR_26->is->name, VAR_26->newcmd);
    break;
   }
  } else if (VAR_26->state == VAR_18) {
   if (FUNC_7(VAR_3, &VAR_26->bch.Flags))
    FUNC_3(VAR_26, VAR_9);
   else if (VAR_26->cmd == 142)
    FUNC_3(VAR_26, VAR_8);
   else
    FUNC_3(VAR_26, VAR_5);
   VAR_26->state = VAR_22;
  } else if (VAR_26->state != VAR_23) {

   VAR_26->state = VAR_22;
   FUNC_3(VAR_26, VAR_5);
  }
  break;
 case 129:
  FUNC_5("%s: pump stev RSP_SILDET\n", VAR_26->is->name);
  if (VAR_26->state == VAR_23) {
   VAR_26->mod = VAR_26->newmod;
   VAR_29 = VAR_26->newmod;
   VAR_26->newmod = 0;
   VAR_26->cmd = VAR_26->newcmd;
   VAR_26->newcmd = 0;
   FUNC_6(VAR_26->is, VAR_28 | VAR_13,
      VAR_26->cmd, 1, &VAR_29);
   VAR_26->state = VAR_21;
   VAR_26->try_mod = 3;
  }
  break;
 case 128:
  FUNC_5("%s: pump stev RSP_SILOFF\n", VAR_26->is->name);
  break;
 case 131:
  if (VAR_26->state == VAR_21) {
   FUNC_5("%s: pump stev RSP_FCERR try %d\n",
     VAR_26->is->name, VAR_26->try_mod);
   if (VAR_26->try_mod--) {
    FUNC_6(VAR_26->is, VAR_28 | VAR_13,
       VAR_26->cmd, 1, &VAR_26->mod);
    break;
   }
  }
  FUNC_5("%s: pump stev RSP_FCERR\n", VAR_26->is->name);
  VAR_26->state = VAR_20;
  FUNC_6(VAR_26->is, VAR_28 | VAR_13, VAR_16,
     0, ((void*)0));
  FUNC_3(VAR_26, VAR_5);
  break;
 default:
  break;
 }
}
