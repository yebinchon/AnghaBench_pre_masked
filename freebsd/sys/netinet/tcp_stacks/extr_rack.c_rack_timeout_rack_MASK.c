
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct tcpcb {scalar_t__ t_state; int t_flags; TYPE_1__* t_timers; } ;
struct TYPE_4__ {scalar_t__ rc_prr_sndcnt; int rc_hpts_flags; int rc_tmap; int rc_resend; int rc_timer_exp; } ;
struct tcp_rack {scalar_t__ r_state; int rc_rack_rtt; TYPE_2__ r_ctl; scalar_t__ use_rack_cheat; } ;
struct rack_sendmap {scalar_t__ r_end; scalar_t__ r_start; } ;
typedef scalar_t__ int32_t ;
struct TYPE_3__ {int tt_flags; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int,int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (struct tcpcb*) ;
 struct rack_sendmap* FUNC_5 (struct tcpcb*,int) ;
 int FUNC_6 (struct tcp_rack*,int ,scalar_t__) ;
 int FUNC_7 (struct tcp_rack*,int) ;
 int FUNC_8 (struct tcpcb*,struct tcp_rack*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (struct tcpcb*,char*,int ,int) ;

__attribute__((used)) static int
FUNC_10(struct tcpcb *VAR_6, struct tcp_rack *VAR_7, uint32_t VAR_8)
{







 struct rack_sendmap *VAR_9;
 int32_t VAR_10, VAR_11;

 if (VAR_6->t_timers->tt_flags & VAR_3) {
  return (1);
 }
 if (FUNC_2(VAR_8, VAR_7->r_ctl.rc_timer_exp)) {

  return (0);
 }
 VAR_10 = FUNC_0(VAR_6->t_flags);
 FUNC_3(VAR_5, 1);
 if (VAR_7->r_state && (VAR_7->r_state != VAR_6->t_state))
  FUNC_8(VAR_6, VAR_7);
 VAR_9 = FUNC_5(VAR_6, VAR_8);
 if (VAR_9)
  VAR_11 = VAR_9->r_end - VAR_9->r_start;
 else
  VAR_11 = 0;
 FUNC_6(VAR_7, VAR_2, VAR_11);
 if (VAR_9) {
  uint32_t VAR_12;

  VAR_12 = VAR_7->rc_rack_rtt;
  if (VAR_12 == 0)
   VAR_12 = 1;
  if ((VAR_10 == 0) &&
      (VAR_7->r_ctl.rc_prr_sndcnt < FUNC_4(VAR_6))) {






   VAR_7->r_ctl.rc_prr_sndcnt = FUNC_4(VAR_6);
   FUNC_7(VAR_7, 3);
  } else if ((VAR_7->r_ctl.rc_prr_sndcnt < (VAR_9->r_end - VAR_9->r_start)) &&
      VAR_7->use_rack_cheat) {




   VAR_7->r_ctl.rc_prr_sndcnt = FUNC_4(VAR_6);
   FUNC_7(VAR_7, 4);
  }
 } else {

  FUNC_3(VAR_4, 1);



  VAR_7->r_ctl.rc_resend = FUNC_1(&VAR_7->r_ctl.rc_tmap);
 }
 VAR_7->r_ctl.rc_hpts_flags &= ~VAR_1;
 return (0);
}
