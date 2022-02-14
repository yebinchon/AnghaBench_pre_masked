
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int flex7; int pkts_out; int lt_epoch; int flex6; int flex5; void* flex4; int flex3; int flex2; int flex1; } ;
union tcp_log_stackspecific {TYPE_4__ u_bbr; } ;
typedef int uint32_t ;
struct TYPE_6__ {int rc_target_at_state; int rc_level_state_extra; int rc_lost_at_startup; int rc_bbr_last_startup_epoch; int rc_probertt_int; int rc_rtt_shrinks; } ;
struct tcp_bbr {int rc_tv; TYPE_3__* rc_inp; TYPE_5__* rc_tp; TYPE_1__ r_ctl; } ;
typedef int int32_t ;
struct TYPE_10__ {scalar_t__ t_logstate; } ;
struct TYPE_8__ {TYPE_2__* inp_socket; } ;
struct TYPE_7__ {int so_snd; int so_rcv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__*,int *,int *,int *,int ,int ,int ,union tcp_log_stackspecific*,int,int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct tcp_bbr*,TYPE_4__*,int ) ;
 void* FUNC_2 (struct tcp_bbr*,int ) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_3(struct tcp_bbr *VAR_5, uint32_t VAR_6, int32_t VAR_7)
{
 if (VAR_5->rc_tp->t_logstate != VAR_3) {
  union tcp_log_stackspecific VAR_8;

  FUNC_1(VAR_5, &VAR_8.u_bbr, VAR_6);
  VAR_8.u_bbr.flex1 = VAR_7;
  VAR_8.u_bbr.flex2 = VAR_5->r_ctl.rc_rtt_shrinks;
  VAR_8.u_bbr.flex3 = VAR_5->r_ctl.rc_probertt_int;
  if (VAR_4)
   VAR_8.u_bbr.flex4 = FUNC_2(VAR_5, VAR_1);
  else
   VAR_8.u_bbr.flex4 = FUNC_2(VAR_5, VAR_2);
  VAR_8.u_bbr.flex5 = VAR_5->r_ctl.rc_bbr_last_startup_epoch;
  VAR_8.u_bbr.flex6 = VAR_5->r_ctl.rc_lost_at_startup;
  VAR_8.u_bbr.flex7 = (VAR_5->r_ctl.rc_target_at_state/1000);
  VAR_8.u_bbr.lt_epoch = VAR_5->r_ctl.rc_level_state_extra;
  VAR_8.u_bbr.pkts_out = VAR_5->r_ctl.rc_target_at_state;
  FUNC_0(VAR_5->rc_tp, ((void*)0),
      &VAR_5->rc_inp->inp_socket->so_rcv,
      &VAR_5->rc_inp->inp_socket->so_snd,
      VAR_0, 0,
      0, &VAR_8, 0, &VAR_5->rc_tv);
 }
}
