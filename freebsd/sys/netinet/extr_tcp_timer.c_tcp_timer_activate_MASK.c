
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
typedef int timeout_t ;
struct tcpcb {int t_flags; TYPE_2__* t_fb; TYPE_1__* t_timers; struct inpcb* t_inpcb; } ;
struct inpcb {int dummy; } ;
struct callout {int dummy; } ;
struct TYPE_4__ {int (* tfb_tcp_timer_activate ) (struct tcpcb*,int,int ) ;} ;
struct TYPE_3__ {int tt_flags; struct callout tt_2msl; struct callout tt_keep; struct callout tt_persist; struct callout tt_rexmt; struct callout tt_delack; } ;


 int VAR_0 ;





 int VAR_1 ;
 int FUNC_0 (struct callout*,int ,int *,struct tcpcb*,int) ;
 int FUNC_1 (struct callout*) ;
 int FUNC_2 (struct inpcb*) ;
 int FUNC_3 (char*,struct tcpcb*,int) ;
 int FUNC_4 (struct tcpcb*,int,int ) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;

void
FUNC_5(struct tcpcb *VAR_7, uint32_t VAR_8, u_int VAR_9)
{
 struct callout *VAR_10;
 timeout_t *VAR_11;
 struct inpcb *VAR_12 = VAR_7->t_inpcb;
 int VAR_13 = FUNC_2(VAR_12);






 if (VAR_7->t_timers->tt_flags & VAR_1)
  return;

 switch (VAR_8) {
  case 131:
   VAR_10 = &VAR_7->t_timers->tt_delack;
   VAR_11 = VAR_3;
   break;
  case 128:
   VAR_10 = &VAR_7->t_timers->tt_rexmt;
   VAR_11 = VAR_6;
   break;
  case 129:
   VAR_10 = &VAR_7->t_timers->tt_persist;
   VAR_11 = VAR_5;
   break;
  case 130:
   VAR_10 = &VAR_7->t_timers->tt_keep;
   VAR_11 = VAR_4;
   break;
  case 132:
   VAR_10 = &VAR_7->t_timers->tt_2msl;
   VAR_11 = VAR_2;
   break;
  default:
   if (VAR_7->t_fb->tfb_tcp_timer_activate) {
    VAR_7->t_fb->tfb_tcp_timer_activate(VAR_7, VAR_8, VAR_9);
    return;
   }
   FUNC_3("tp %p bad timer_type %#x", VAR_7, VAR_8);
  }
 if (VAR_9 == 0) {
  FUNC_1(VAR_10);
 } else {
  FUNC_0(VAR_10, VAR_9, VAR_11, VAR_7, VAR_13);
 }
}
