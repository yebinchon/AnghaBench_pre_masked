
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int pkts_out; int flex8; int flex6; int flex5; int flex4; int flex3; int flex2; int flex1; } ;
union tcp_log_stackspecific {TYPE_4__ u_bbr; } ;
typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_6__ {int rc_target_at_state; int rc_hpts_flags; } ;
struct tcp_bbr {int rc_tv; TYPE_3__* rc_inp; TYPE_5__* rc_tp; int rc_pacer_started; TYPE_1__ r_ctl; int rc_in_persist; int bbr_timer_src; } ;
typedef int int32_t ;
struct TYPE_10__ {scalar_t__ t_logstate; int t_rxtcur; } ;
struct TYPE_8__ {TYPE_2__* inp_socket; } ;
struct TYPE_7__ {int so_snd; int so_rcv; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,int *,int *,int *,int ,int ,int ,union tcp_log_stackspecific*,int,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct tcp_bbr*,TYPE_4__*,int ) ;

__attribute__((used)) static void
FUNC_3(struct tcp_bbr *VAR_2, int32_t VAR_3, uint32_t VAR_4, uint8_t VAR_5)
{
 if (VAR_2->rc_tp->t_logstate != VAR_1) {
  union tcp_log_stackspecific VAR_6;

  FUNC_2(VAR_2, &VAR_6.u_bbr, VAR_4);
  VAR_6.u_bbr.flex1 = VAR_3;
  VAR_6.u_bbr.flex2 = VAR_2->bbr_timer_src;
  VAR_6.u_bbr.flex3 = VAR_2->r_ctl.rc_hpts_flags;
  VAR_6.u_bbr.flex4 = VAR_2->rc_in_persist;
  VAR_6.u_bbr.flex5 = VAR_2->r_ctl.rc_target_at_state;
  VAR_6.u_bbr.flex6 = FUNC_1(VAR_2->rc_tp->t_rxtcur);
  VAR_6.u_bbr.flex8 = VAR_5;
  VAR_6.u_bbr.pkts_out = VAR_2->rc_pacer_started;
  FUNC_0(VAR_2->rc_tp, ((void*)0),
      &VAR_2->rc_inp->inp_socket->so_rcv,
      &VAR_2->rc_inp->inp_socket->so_snd,
      VAR_0, 0,
      0, &VAR_6, 0, &VAR_2->rc_tv);
 }
}
