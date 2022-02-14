
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct tcpcb {scalar_t__ t_state; } ;
struct TYPE_2__ {scalar_t__ rc_lost; int rc_hpts_flags; int * rc_resend; int rc_timer_exp; } ;
struct tcp_bbr {scalar_t__ r_state; TYPE_1__ r_ctl; scalar_t__ rc_all_timers_stopped; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int * FUNC_2 (struct tcpcb*,struct tcp_bbr*,scalar_t__) ;
 int FUNC_3 (struct tcp_bbr*,scalar_t__,int ) ;
 int FUNC_4 (struct tcp_bbr*,scalar_t__,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (struct tcpcb*,struct tcp_bbr*,int ) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_6(struct tcpcb *VAR_4, struct tcp_bbr *VAR_5, uint32_t VAR_6)
{







 uint32_t VAR_7;

 if (VAR_5->rc_all_timers_stopped) {
  return (1);
 }
 if (FUNC_1(VAR_6, VAR_5->r_ctl.rc_timer_exp)) {

  return (0);
 }
 FUNC_0(VAR_3);
 VAR_7 = VAR_5->r_ctl.rc_lost;
 if (VAR_5->r_state && (VAR_5->r_state != VAR_4->t_state))
  FUNC_5(VAR_4, VAR_5, 0);
 FUNC_3(VAR_5, VAR_6, VAR_0);
 if (VAR_5->r_ctl.rc_resend == ((void*)0)) {

  VAR_5->r_ctl.rc_resend = FUNC_2(VAR_4, VAR_5, VAR_6);
 }
 if (VAR_2)
  FUNC_4(VAR_5, VAR_6, (VAR_5->r_ctl.rc_lost > VAR_7));
 VAR_5->r_ctl.rc_hpts_flags &= ~VAR_1;
 return (0);
}
