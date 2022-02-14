
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct tcpcb {int t_flags; TYPE_4__* t_inpcb; int t_state; TYPE_1__* t_timers; int t_rxtshift; int snd_wnd; int t_rxtcur; int snd_una; int snd_max; } ;
struct TYPE_8__ {TYPE_3__* inp_socket; } ;
struct TYPE_6__ {int sb_state; } ;
struct TYPE_7__ {TYPE_2__ so_rcv; } ;
struct TYPE_5__ {int tt_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct tcpcb*) ;
 int FUNC_3 (struct tcpcb*) ;
 int FUNC_4 (struct tcpcb*) ;

 int VAR_3 ;

 int VAR_4 ;

 int VAR_5 ;

 int VAR_6 ;

 int VAR_7 ;
 int FUNC_5 (char*,struct tcpcb*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (struct tcpcb*) ;
 int FUNC_7 (struct tcpcb*,int const,int ) ;
 int FUNC_8 (struct tcpcb*,int) ;

void
FUNC_9(struct tcpcb *VAR_11, uint32_t VAR_12)
{
 switch (VAR_12) {
  case 131:
   if (VAR_11->t_timers->tt_flags & VAR_4) {
    VAR_11->t_timers->tt_flags &= ~VAR_4;
    if (VAR_11->t_flags & VAR_2) {

     VAR_11->t_flags &= ~VAR_2;
     FUNC_7(VAR_11, 131,
         VAR_8);
    }
   }
   break;
  case 128:
   if (VAR_11->t_timers->tt_flags & VAR_7) {
    VAR_11->t_timers->tt_flags &= ~VAR_7;
    if (FUNC_0(VAR_11->snd_max, VAR_11->snd_una) &&
        (FUNC_8((VAR_11), 129) == 0) &&
        VAR_11->snd_wnd) {

     FUNC_7(VAR_11, 128,
                                            VAR_11->t_rxtcur);
    }
   }
   break;
  case 129:
   if (VAR_11->t_timers->tt_flags & VAR_6) {
    VAR_11->t_timers->tt_flags &= ~VAR_6;
    if (VAR_11->snd_wnd == 0) {

     VAR_11->t_rxtshift = 0;
     FUNC_6(VAR_11);
    }
   }
   break;
  case 130:
   if (VAR_11->t_timers->tt_flags & VAR_5) {
    VAR_11->t_timers->tt_flags &= ~VAR_5;
    FUNC_7(VAR_11, 130,
         FUNC_1(VAR_11->t_state) ?
         FUNC_2(VAR_11) : FUNC_3(VAR_11));
   }
   break;
  case 132:
   if (VAR_11->t_timers->tt_flags &= VAR_3) {
    VAR_11->t_timers->tt_flags &= ~VAR_3;
    if ((VAR_11->t_state == VAR_1) &&
        ((VAR_11->t_inpcb->inp_socket == ((void*)0)) ||
         (VAR_11->t_inpcb->inp_socket->so_rcv.sb_state & VAR_0))) {

     FUNC_7(VAR_11, 132,
         (VAR_9) ?
         VAR_10 : FUNC_4(VAR_11));
    }
   }
   break;
  default:
   FUNC_5("tp:%p bad timer_type 0x%x", VAR_11, VAR_12);
 }
}
