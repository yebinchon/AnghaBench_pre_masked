
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct tcpcb {int t_srtt; int t_rttvar; int t_rttbest; scalar_t__ t_softerror; int t_rxtcur; int t_stats; int t_rttupdated; } ;
struct TYPE_4__ {scalar_t__ cur_rtt; scalar_t__ ts_in; scalar_t__ rc_lowest_rtt; scalar_t__ rc_min_rto_ms; scalar_t__ bbr_smallest_srtt_this_state; int cur_rtt_send_time; int bbr_ts_check_our_cts; int last_inbound_ts; int bbr_ts_check_tstmp; scalar_t__ rc_ack_hdwr_delay; int rc_rttprop; } ;
struct tcp_bbr {scalar_t__ rtt_valid; scalar_t__ rc_ts_clock_set; int rc_ts_data_set; TYPE_2__ r_ctl; TYPE_1__* rc_tp; scalar_t__ rc_max_rto_sec; scalar_t__ rc_ack_is_cumack; scalar_t__ rc_ts_valid; scalar_t__ r_init_rtt; scalar_t__ rc_ack_was_delayed; scalar_t__ rc_prtt_set_ts; } ;
typedef int int32_t ;
struct TYPE_3__ {int t_srtt; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct tcpcb*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (int) ;
 int VAR_4 ;
 int FUNC_6 (int *,scalar_t__,scalar_t__) ;
 int FUNC_7 (struct tcp_bbr*,scalar_t__,scalar_t__) ;
 int FUNC_8 (struct tcp_bbr*) ;
 int FUNC_9 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int ,int ,int ) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_14(struct tcp_bbr *VAR_6, struct tcpcb *VAR_7, uint32_t VAR_8)
{
 int32_t VAR_9;
 uint32_t VAR_10, VAR_11;
 int32_t VAR_12;


 if (VAR_6->rtt_valid == 0)

  return;

 VAR_10 = VAR_6->r_ctl.cur_rtt;
 VAR_11 = VAR_6->r_ctl.ts_in;
 if (VAR_6->rc_prtt_set_ts) {
  uint32_t VAR_13;

  VAR_6->rc_prtt_set_ts = 0;
  VAR_13 = FUNC_10(&VAR_6->r_ctl.rc_rttprop);
  if (VAR_10 > VAR_13)
   FUNC_9(&VAR_6->r_ctl.rc_rttprop, (VAR_10 - VAR_13), VAR_8);
  else
   FUNC_6(&VAR_6->r_ctl.rc_rttprop, VAR_10, VAR_8);
 }
 if (VAR_6->rc_ack_was_delayed)
  VAR_10 += VAR_6->r_ctl.rc_ack_hdwr_delay;

 if (VAR_10 < VAR_6->r_ctl.rc_lowest_rtt)
  VAR_6->r_ctl.rc_lowest_rtt = VAR_10;
 FUNC_7(VAR_6, VAR_10, VAR_11);
 if (VAR_6->r_init_rtt) {




  VAR_6->r_init_rtt = 0;
  VAR_7->t_srtt = 0;
 }
 if ((VAR_6->rc_ts_clock_set == 0) && VAR_6->rc_ts_valid) {







  if (VAR_6->rc_ack_is_cumack) {
   if (VAR_6->rc_ts_data_set) {

    FUNC_8(VAR_6);
   } else {
    VAR_6->rc_ts_data_set = 1;
    VAR_6->r_ctl.bbr_ts_check_tstmp = VAR_6->r_ctl.last_inbound_ts;
    VAR_6->r_ctl.bbr_ts_check_our_cts = VAR_6->r_ctl.cur_rtt_send_time;
   }
  } else {




   VAR_6->rc_ts_data_set = 0;
  }
 }

 VAR_12 = FUNC_5((VAR_10 + (VAR_3 - 1)));
 if (VAR_12 == 0)
  VAR_12 = 1;
 if (VAR_7->t_srtt != 0) {
  VAR_9 = ((VAR_12 - 1) << VAR_0)
      - (VAR_7->t_srtt >> (VAR_2 - VAR_0));

  VAR_7->t_srtt += VAR_9;
  if (VAR_7->t_srtt <= 0)
   VAR_7->t_srtt = 1;
  if (VAR_9 < 0)
   VAR_9 = -VAR_9;
  VAR_9 -= VAR_7->t_rttvar >> (VAR_1 - VAR_0);
  VAR_7->t_rttvar += VAR_9;
  if (VAR_7->t_rttvar <= 0)
   VAR_7->t_rttvar = 1;
  if (VAR_7->t_rttbest > VAR_7->t_srtt + VAR_7->t_rttvar)
   VAR_7->t_rttbest = VAR_7->t_srtt + VAR_7->t_rttvar;
 } else {





  VAR_7->t_srtt = VAR_12 << VAR_2;
  VAR_7->t_rttvar = VAR_12 << (VAR_1 - 1);
  VAR_7->t_rttbest = VAR_7->t_srtt + VAR_7->t_rttvar;
 }
 FUNC_1(VAR_5);
 VAR_7->t_rttupdated++;
 FUNC_2(VAR_7->t_rxtcur, FUNC_3(VAR_7),
     FUNC_12(FUNC_0(VAR_6->r_ctl.rc_min_rto_ms), VAR_12 + 2),
     FUNC_0(((uint32_t)VAR_6->rc_max_rto_sec) * 1000));
 VAR_7->t_softerror = 0;
 VAR_10 = (FUNC_4(VAR_6->rc_tp->t_srtt) >> VAR_2);
 if (VAR_6->r_ctl.bbr_smallest_srtt_this_state > VAR_10)
  VAR_6->r_ctl.bbr_smallest_srtt_this_state = VAR_10;
}
