
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct tcpcb {TYPE_1__* t_fb; TYPE_2__* t_timers; } ;
struct callout {int dummy; } ;
struct TYPE_4__ {struct callout tt_2msl; struct callout tt_keep; struct callout tt_persist; struct callout tt_rexmt; struct callout tt_delack; } ;
struct TYPE_3__ {int (* tfb_tcp_timer_active ) (struct tcpcb*,int) ;} ;







 int FUNC_0 (struct callout*) ;
 int FUNC_1 (char*,struct tcpcb*,int) ;
 int FUNC_2 (struct tcpcb*,int) ;

int
FUNC_3(struct tcpcb *VAR_0, uint32_t VAR_1)
{
 struct callout *VAR_2;

 switch (VAR_1) {
  case 131:
   VAR_2 = &VAR_0->t_timers->tt_delack;
   break;
  case 128:
   VAR_2 = &VAR_0->t_timers->tt_rexmt;
   break;
  case 129:
   VAR_2 = &VAR_0->t_timers->tt_persist;
   break;
  case 130:
   VAR_2 = &VAR_0->t_timers->tt_keep;
   break;
  case 132:
   VAR_2 = &VAR_0->t_timers->tt_2msl;
   break;
  default:
   if (VAR_0->t_fb->tfb_tcp_timer_active) {
    return(VAR_0->t_fb->tfb_tcp_timer_active(VAR_0, VAR_1));
   }
   FUNC_1("tp %p bad timer_type %#x", VAR_0, VAR_1);
  }
 return FUNC_0(VAR_2);
}
