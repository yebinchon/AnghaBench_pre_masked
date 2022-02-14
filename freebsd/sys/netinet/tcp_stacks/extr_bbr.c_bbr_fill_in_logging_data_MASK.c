
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union tcp_log_stackspecific {int dummy; } tcp_log_stackspecific ;
typedef int uint32_t ;
struct tcp_log_bbr {int pkt_epoch; int pkts_out; int use_lt_bw; int ininput; int inhpts; int cwnd_gain; int pacing_gain; int lt_epoch; int epoch; int bbr_substate; int bbr_state; int lost; int timeStamp; int delivered; int applimited; int inflight; int bw_inuse; int rttProp; int delRate; int cur_del_rate; } ;
struct TYPE_4__ {int rc_pkt_epoch; int rc_flight_at_input; int rc_bbr_cwnd_gain; int rc_bbr_hptsi_gain; int rc_lt_epoch; int rc_rtt_epoch; int rc_lost; int rc_delivered; int r_app_limited_until; scalar_t__ rc_lost_bytes; scalar_t__ rc_sacked; int rc_rttprop; int rc_delrate; int rc_bbr_cur_del_rate; } ;
struct tcp_bbr {TYPE_2__ r_ctl; int rc_lt_use_bw; TYPE_1__* rc_inp; int rc_bbr_state; int rc_tp; } ;
struct TYPE_3__ {int inp_in_input; int inp_in_hpts; } ;


 int FUNC_0 (struct tcp_bbr*) ;
 int FUNC_1 (struct tcp_bbr*) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct tcp_log_bbr*,int ,int) ;

__attribute__((used)) static __inline void
FUNC_6(struct tcp_bbr *VAR_0, struct tcp_log_bbr *VAR_1, uint32_t VAR_2)
{
 FUNC_5(VAR_1, 0, sizeof(union tcp_log_stackspecific));
 VAR_1->cur_del_rate = VAR_0->r_ctl.rc_bbr_cur_del_rate;
 VAR_1->delRate = FUNC_3(&VAR_0->r_ctl.rc_delrate);
 VAR_1->rttProp = FUNC_4(&VAR_0->r_ctl.rc_rttprop);
 VAR_1->bw_inuse = FUNC_0(VAR_0);
 VAR_1->inflight = FUNC_2(VAR_0->rc_tp,
     (VAR_0->r_ctl.rc_sacked + VAR_0->r_ctl.rc_lost_bytes));
 VAR_1->applimited = VAR_0->r_ctl.r_app_limited_until;
 VAR_1->delivered = VAR_0->r_ctl.rc_delivered;
 VAR_1->timeStamp = VAR_2;
 VAR_1->lost = VAR_0->r_ctl.rc_lost;
 VAR_1->bbr_state = VAR_0->rc_bbr_state;
 VAR_1->bbr_substate = FUNC_1(VAR_0);
 VAR_1->epoch = VAR_0->r_ctl.rc_rtt_epoch;
 VAR_1->lt_epoch = VAR_0->r_ctl.rc_lt_epoch;
 VAR_1->pacing_gain = VAR_0->r_ctl.rc_bbr_hptsi_gain;
 VAR_1->cwnd_gain = VAR_0->r_ctl.rc_bbr_cwnd_gain;
 VAR_1->inhpts = VAR_0->rc_inp->inp_in_hpts;
 VAR_1->ininput = VAR_0->rc_inp->inp_in_input;
 VAR_1->use_lt_bw = VAR_0->rc_lt_use_bw;
 VAR_1->pkts_out = VAR_0->r_ctl.rc_flight_at_input;
 VAR_1->pkt_epoch = VAR_0->r_ctl.rc_pkt_epoch;
}
