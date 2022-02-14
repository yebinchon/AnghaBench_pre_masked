
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int flex4; int use_lt_bw; int inflight; int cur_del_rate; int lost; int pkts_out; int lt_epoch; int epoch; int timeStamp; int delivered; int applimited; int flex6; int flex5; int flex3; int flex2; int flex1; } ;
union tcp_log_stackspecific {TYPE_3__ u_bbr; } ;
struct timeval {int dummy; } ;
struct tcpcb {TYPE_2__* t_inpcb; } ;
struct tcp_hpts_entry {int p_runningtick; int p_hpts_sleep_time; int p_delayed_by; int saved_prev_slot; int saved_curslot; int saved_curtick; int overidden_sleep; int p_on_queue_cnt; int p_curtick; int p_prev_slot; int p_cur_slot; int p_nxt_slot; } ;
struct TYPE_5__ {TYPE_1__* inp_socket; } ;
struct TYPE_4__ {int so_snd; int so_rcv; } ;


 int VAR_0 ;
 int FUNC_0 (struct tcpcb*,int *,int *,int *,int ,int ,int ,union tcp_log_stackspecific*,int,struct timeval*) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int FUNC_2 (struct timeval*) ;

__attribute__((used)) static void
FUNC_3(struct tcp_hpts_entry *VAR_1, struct tcpcb *VAR_2, struct timeval *VAR_3,
      int VAR_4, int VAR_5)
{
 union tcp_log_stackspecific VAR_6;

 FUNC_1(&VAR_6.u_bbr, 0, sizeof(VAR_6.u_bbr));
 VAR_6.u_bbr.flex1 = VAR_1->p_nxt_slot;
 VAR_6.u_bbr.flex2 = VAR_1->p_cur_slot;
 VAR_6.u_bbr.flex3 = VAR_1->p_prev_slot;
 VAR_6.u_bbr.flex4 = VAR_5;
 VAR_6.u_bbr.flex5 = VAR_1->p_curtick;
 VAR_6.u_bbr.flex6 = VAR_1->p_on_queue_cnt;
 VAR_6.u_bbr.use_lt_bw = 1;
 VAR_6.u_bbr.inflight = VAR_4;
 VAR_6.u_bbr.applimited = VAR_1->overidden_sleep;
 VAR_6.u_bbr.delivered = VAR_1->saved_curtick;
 VAR_6.u_bbr.timeStamp = FUNC_2(VAR_3);
 VAR_6.u_bbr.epoch = VAR_1->saved_curslot;
 VAR_6.u_bbr.lt_epoch = VAR_1->saved_prev_slot;
 VAR_6.u_bbr.pkts_out = VAR_1->p_delayed_by;
 VAR_6.u_bbr.lost = VAR_1->p_hpts_sleep_time;
 VAR_6.u_bbr.cur_del_rate = VAR_1->p_runningtick;
 FUNC_0(VAR_2, ((void*)0),
         &VAR_2->t_inpcb->inp_socket->so_rcv,
         &VAR_2->t_inpcb->inp_socket->so_snd,
         VAR_0, 0,
         0, &VAR_6, 0, VAR_3);
}
