
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int flex8; scalar_t__ flex7; void* flex6; int pkts_out; int flex5; int flex4; int flex3; int flex2; void* flex1; } ;
union tcp_log_stackspecific {TYPE_4__ u_bbr; } ;
typedef void* uint32_t ;
struct TYPE_6__ {int rc_target_at_state; int rc_ack_hdwr_delay; int rc_bbr_state_time; int rc_rcvtime; } ;
struct tcp_bbr {int rc_tv; TYPE_3__* rc_inp; TYPE_5__* rc_tp; int rc_ack_was_delayed; TYPE_1__ r_ctl; } ;
struct TYPE_10__ {scalar_t__ t_logstate; int ts_offset; } ;
struct TYPE_8__ {TYPE_2__* inp_socket; } ;
struct TYPE_7__ {int so_snd; int so_rcv; } ;


 int FUNC_0 (TYPE_5__*,int *,int *,int *,int ,int ,int ,union tcp_log_stackspecific*,int,int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct tcp_bbr*,TYPE_4__*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct tcp_bbr *VAR_2, uint32_t VAR_3, uint32_t VAR_4)
{




 if (VAR_2->rc_tp->t_logstate != VAR_1) {
  union tcp_log_stackspecific VAR_5;

  FUNC_1(VAR_2, &VAR_5.u_bbr, VAR_2->r_ctl.rc_rcvtime);
  VAR_5.u_bbr.flex1 = VAR_3;
  VAR_5.u_bbr.flex2 = VAR_2->r_ctl.rc_bbr_state_time;
  VAR_5.u_bbr.flex3 = VAR_2->r_ctl.rc_ack_hdwr_delay;
  VAR_5.u_bbr.flex4 = VAR_2->rc_tp->ts_offset;
  VAR_5.u_bbr.flex5 = VAR_2->r_ctl.rc_target_at_state;
  VAR_5.u_bbr.pkts_out = FUNC_2(&VAR_2->rc_tv);
  VAR_5.u_bbr.flex6 = VAR_4;
  VAR_5.u_bbr.flex7 = 0;
  VAR_5.u_bbr.flex8 = VAR_2->rc_ack_was_delayed;
  FUNC_0(VAR_2->rc_tp, ((void*)0),
      &VAR_2->rc_inp->inp_socket->so_rcv,
      &VAR_2->rc_inp->inp_socket->so_snd,
      VAR_0, 0,
      0, &VAR_5, 0, &VAR_2->rc_tv);
 }
}
