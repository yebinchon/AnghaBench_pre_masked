
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int cur_del_rate; int delRate; int rttProp; int bw_inuse; int inflight; int delivered; int applimited; int pkts_out; int lt_epoch; int epoch; int flex8; int flex7; int flex6; int flex5; int flex4; int flex3; int flex2; int flex1; } ;
union tcp_log_stackspecific {TYPE_3__ u_bbr; } ;
typedef int uint32_t ;
struct tcp_bbr {int rc_tv; TYPE_2__* rc_inp; TYPE_4__* rc_tp; } ;
struct hpts_diag {int p_curtick; int p_lasttick; int maxticks; int wheel_cts; int wheel_tick; int p_runningtick; int p_prev_slot; int hpts_sleep_time; int co_ret; int yet_to_sleep; int have_slept; int p_on_min_sleep; int p_hpts_active; int need_new_to; int slot_remaining; int inp_hptsslot; int slot_req; int p_cur_slot; int p_nxt_slot; } ;
struct TYPE_8__ {scalar_t__ t_logstate; } ;
struct TYPE_6__ {TYPE_1__* inp_socket; } ;
struct TYPE_5__ {int so_snd; int so_rcv; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int *,int *,int *,int ,int ,int ,union tcp_log_stackspecific*,int,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct tcp_bbr*,TYPE_3__*,int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_2(struct tcp_bbr *VAR_3, uint32_t VAR_4, struct hpts_diag *VAR_5)
{
 if (VAR_2 && (VAR_3->rc_tp->t_logstate != VAR_1)) {
  union tcp_log_stackspecific VAR_6;

  FUNC_1(VAR_3, &VAR_6.u_bbr, VAR_4);
  VAR_6.u_bbr.flex1 = VAR_5->p_nxt_slot;
  VAR_6.u_bbr.flex2 = VAR_5->p_cur_slot;
  VAR_6.u_bbr.flex3 = VAR_5->slot_req;
  VAR_6.u_bbr.flex4 = VAR_5->inp_hptsslot;
  VAR_6.u_bbr.flex5 = VAR_5->slot_remaining;
  VAR_6.u_bbr.flex6 = VAR_5->need_new_to;
  VAR_6.u_bbr.flex7 = VAR_5->p_hpts_active;
  VAR_6.u_bbr.flex8 = VAR_5->p_on_min_sleep;

  VAR_6.u_bbr.epoch = VAR_5->have_slept;
  VAR_6.u_bbr.lt_epoch = VAR_5->yet_to_sleep;
  VAR_6.u_bbr.pkts_out = VAR_5->co_ret;
  VAR_6.u_bbr.applimited = VAR_5->hpts_sleep_time;
  VAR_6.u_bbr.delivered = VAR_5->p_prev_slot;
  VAR_6.u_bbr.inflight = VAR_5->p_runningtick;
  VAR_6.u_bbr.bw_inuse = VAR_5->wheel_tick;
  VAR_6.u_bbr.rttProp = VAR_5->wheel_cts;
  VAR_6.u_bbr.delRate = VAR_5->maxticks;
  VAR_6.u_bbr.cur_del_rate = VAR_5->p_curtick;
  VAR_6.u_bbr.cur_del_rate <<= 32;
  VAR_6.u_bbr.cur_del_rate |= VAR_5->p_lasttick;
  FUNC_0(VAR_3->rc_tp, ((void*)0),
      &VAR_3->rc_inp->inp_socket->so_rcv,
      &VAR_3->rc_inp->inp_socket->so_snd,
      VAR_0, 0,
      0, &VAR_6, 0, &VAR_3->rc_tv);
 }
}
