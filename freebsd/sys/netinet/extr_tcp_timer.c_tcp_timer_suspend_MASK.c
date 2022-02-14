
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct tcpcb {TYPE_1__* t_timers; } ;
struct callout {int dummy; } ;
struct TYPE_2__ {int tt_flags; struct callout tt_2msl; struct callout tt_keep; struct callout tt_persist; struct callout tt_rexmt; struct callout tt_delack; } ;



 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;

 int VAR_3 ;

 int VAR_4 ;
 int FUNC_0 (struct callout*) ;
 int FUNC_1 (char*,struct tcpcb*,int) ;

int
FUNC_2(struct tcpcb *VAR_5, uint32_t VAR_6)
{
 struct callout *VAR_7;
 uint32_t VAR_8;

 switch (VAR_6) {
  case 131:
   VAR_8 = VAR_1;
   VAR_7 = &VAR_5->t_timers->tt_delack;
   break;
  case 128:
   VAR_8 = VAR_4;
   VAR_7 = &VAR_5->t_timers->tt_rexmt;
   break;
  case 129:
   VAR_8 = VAR_3;
   VAR_7 = &VAR_5->t_timers->tt_persist;
   break;
  case 130:
   VAR_8 = VAR_2;
   VAR_7 = &VAR_5->t_timers->tt_keep;
   break;
  case 132:
   VAR_8 = VAR_0;
   VAR_7 = &VAR_5->t_timers->tt_2msl;
   break;
  default:
   FUNC_1("tp:%p bad timer_type 0x%x", VAR_5, VAR_6);
 }
 VAR_5->t_timers->tt_flags |= VAR_8;
 return (FUNC_0(VAR_7));
}
