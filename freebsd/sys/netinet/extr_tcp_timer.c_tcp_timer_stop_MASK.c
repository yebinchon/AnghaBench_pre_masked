
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct tcpcb {TYPE_2__* t_timers; TYPE_1__* t_fb; } ;
struct callout {int dummy; } ;
struct TYPE_4__ {int tt_draincnt; struct callout tt_2msl; struct callout tt_keep; struct callout tt_persist; struct callout tt_rexmt; struct callout tt_delack; int tt_flags; } ;
struct TYPE_3__ {int (* tfb_tcp_timer_stop ) (struct tcpcb*,int) ;} ;







 int VAR_0 ;
 scalar_t__ FUNC_0 (struct callout*,int ) ;
 int FUNC_1 (char*,struct tcpcb*,int) ;
 int FUNC_2 (struct tcpcb*,int) ;
 int VAR_1 ;

void
FUNC_3(struct tcpcb *VAR_2, uint32_t VAR_3)
{
 struct callout *VAR_4;

 VAR_2->t_timers->tt_flags |= VAR_0;
 switch (VAR_3) {
  case 131:
   VAR_4 = &VAR_2->t_timers->tt_delack;
   break;
  case 128:
   VAR_4 = &VAR_2->t_timers->tt_rexmt;
   break;
  case 129:
   VAR_4 = &VAR_2->t_timers->tt_persist;
   break;
  case 130:
   VAR_4 = &VAR_2->t_timers->tt_keep;
   break;
  case 132:
   VAR_4 = &VAR_2->t_timers->tt_2msl;
   break;
  default:
   if (VAR_2->t_fb->tfb_tcp_timer_stop) {




    VAR_2->t_fb->tfb_tcp_timer_stop(VAR_2, VAR_3);
    return;
   }
   FUNC_1("tp %p bad timer_type %#x", VAR_2, VAR_3);
  }

 if (FUNC_0(VAR_4, VAR_1) == 0) {





  VAR_2->t_timers->tt_draincnt++;
 }
}
