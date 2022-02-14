
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int inflight; int timeStamp; int pkts_out; int flex8; int rttProp; int flex6; int flex5; int flex4; void* flex3; void* flex2; int flex1; int ininput; int inhpts; } ;
union tcp_log_stackspecific {TYPE_5__ u_bbr; } ;
typedef void* uint32_t ;
struct timeval {int dummy; } ;
struct tcpcb {scalar_t__ t_logstate; } ;
struct TYPE_6__ {int rs_rtt_tot; int rs_rtt_cnt; int rs_rtt_highest; int rs_rtt_lowest; } ;
struct TYPE_7__ {int rc_sacked; int rc_prr_sndcnt; int rc_rate_sample_method; TYPE_1__ rack_rs; } ;
struct tcp_rack {TYPE_4__* rc_inp; TYPE_2__ r_ctl; int rc_tp; } ;
typedef int int32_t ;
struct TYPE_9__ {TYPE_3__* inp_socket; int inp_in_input; int inp_in_hpts; } ;
struct TYPE_8__ {int so_snd; int so_rcv; } ;


 int VAR_0 ;
 int FUNC_0 (struct tcpcb*,int *,int *,int *,int ,int ,int ,union tcp_log_stackspecific*,int,struct timeval*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_5__*,int ,int) ;
 int FUNC_3 (struct timeval*) ;

__attribute__((used)) static void
FUNC_4(struct tcpcb *VAR_2, struct tcp_rack *VAR_3, int32_t VAR_4,
    uint32_t VAR_5, uint32_t VAR_6)
{
 if (VAR_2->t_logstate != VAR_1) {
  union tcp_log_stackspecific VAR_7;
  struct timeval VAR_8;

  FUNC_2(&VAR_7.u_bbr, 0, sizeof(VAR_7.u_bbr));
  VAR_7.u_bbr.inhpts = VAR_3->rc_inp->inp_in_hpts;
  VAR_7.u_bbr.ininput = VAR_3->rc_inp->inp_in_input;
  VAR_7.u_bbr.flex1 = VAR_4;
  VAR_7.u_bbr.flex2 = VAR_5;
  VAR_7.u_bbr.flex3 = VAR_6;
  VAR_7.u_bbr.flex4 = VAR_3->r_ctl.rack_rs.rs_rtt_lowest;
  VAR_7.u_bbr.flex5 = VAR_3->r_ctl.rack_rs.rs_rtt_highest;
  VAR_7.u_bbr.flex6 = VAR_3->r_ctl.rack_rs.rs_rtt_cnt;
  VAR_7.u_bbr.rttProp = VAR_3->r_ctl.rack_rs.rs_rtt_tot;
  VAR_7.u_bbr.flex8 = VAR_3->r_ctl.rc_rate_sample_method;
  VAR_7.u_bbr.pkts_out = VAR_3->r_ctl.rc_prr_sndcnt;
  VAR_7.u_bbr.timeStamp = FUNC_3(&VAR_8);
  VAR_7.u_bbr.inflight = FUNC_1(VAR_3->rc_tp, VAR_3->r_ctl.rc_sacked);
  FUNC_0(VAR_2, ((void*)0),
      &VAR_3->rc_inp->inp_socket->so_rcv,
      &VAR_3->rc_inp->inp_socket->so_snd,
      VAR_0, 0,
      0, &VAR_7, 0, &VAR_8);
 }
}
