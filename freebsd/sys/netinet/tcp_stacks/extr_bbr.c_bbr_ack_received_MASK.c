
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct tcphdr {scalar_t__ th_ack; } ;
struct tcpcb {int t_flags; int gput_ts; int t_stats_gput_prev; scalar_t__ t_maxseg; scalar_t__ snd_cwnd; int t_stats; scalar_t__ gput_seq; int gput_ack; int t_inpcb; } ;
struct TYPE_2__ {int rc_rcvtime; scalar_t__ bbr_rttprobe_gain_val; int rc_recovery_start; scalar_t__ restrict_growth; scalar_t__ rc_lost_bytes; scalar_t__ rc_sacked; scalar_t__ rc_bbr_cwnd_gain; int rc_delrate; } ;
struct tcp_bbr {scalar_t__ rc_bbr_state; scalar_t__ rc_use_google; scalar_t__ rc_last_options; int bbr_prev_in_rec; int pkt_conservation; scalar_t__ rc_past_init_win; scalar_t__ rc_no_pacing; scalar_t__ rc_filled_pipe; TYPE_1__ r_ctl; int rc_tp; } ;
typedef int int64_t ;
typedef int int32_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (struct tcp_bbr*,int ) ;
 scalar_t__ FUNC_5 (struct tcp_bbr*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (struct tcp_bbr*,int ) ;
 int FUNC_7 (struct tcp_bbr*,scalar_t__,scalar_t__,scalar_t__,int,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_8 (struct tcpcb*,scalar_t__) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (struct tcp_bbr*) ;
 void* FUNC_11 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;
 int FUNC_13 (int ,int ,int) ;
 int FUNC_14 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_15(struct tcpcb *VAR_6, struct tcp_bbr *VAR_7, struct tcphdr *VAR_8, uint32_t VAR_9,
   uint32_t VAR_10, uint32_t VAR_11, int32_t VAR_12, uint32_t VAR_13)
{
 FUNC_0(VAR_6->t_inpcb);
 uint64_t VAR_14;
 uint32_t VAR_15, VAR_16, VAR_17, VAR_18;
 int32_t VAR_19;
 if ((VAR_7->rc_bbr_state == VAR_1) &&
     ((VAR_7->r_ctl.bbr_rttprobe_gain_val == 0) || VAR_7->rc_use_google)) {

  return;
 }
 VAR_18 = VAR_6->t_maxseg - VAR_7->rc_last_options;
 VAR_17 = VAR_9;
 VAR_9 += VAR_10;
 if (VAR_9 > VAR_11) {
  VAR_9 -= VAR_11;




  if ((VAR_9 < VAR_18) && VAR_7->rc_use_google)
   VAR_9 = VAR_18;
 } else {

  VAR_9 = 0;
 }
 VAR_15 = VAR_6->snd_cwnd;
 VAR_14 = FUNC_9(&VAR_7->r_ctl.rc_delrate);
 if (VAR_14)
  VAR_16 = FUNC_5(VAR_7,
        VAR_14,
        (uint32_t)VAR_7->r_ctl.rc_bbr_cwnd_gain);
 else
  VAR_16 = FUNC_6(VAR_7, VAR_7->rc_tp);
 if (FUNC_1(VAR_6->t_flags) &&
     (VAR_7->bbr_prev_in_rec == 0)) {




  VAR_7->pkt_conservation = 1;
  VAR_7->r_ctl.rc_recovery_start = VAR_7->r_ctl.rc_rcvtime;
  VAR_15 = FUNC_8(VAR_6,
           (VAR_7->r_ctl.rc_sacked + VAR_7->r_ctl.rc_lost_bytes)) +
   VAR_9;
 }
 if (FUNC_1(VAR_6->t_flags)) {
  uint32_t VAR_20;

  VAR_7->bbr_prev_in_rec = 1;
  if (VAR_15 > VAR_13) {
   VAR_15 -= VAR_13;
   if (VAR_15 < VAR_18)
    VAR_15 = VAR_18;
  } else
   VAR_15 = VAR_18;
  VAR_20 = FUNC_8(VAR_6,
      (VAR_7->r_ctl.rc_sacked + VAR_7->r_ctl.rc_lost_bytes));
  FUNC_7(VAR_7, VAR_20, 0,
         VAR_13, 10, 0, 0, VAR_12);
  if (VAR_7->pkt_conservation) {
   uint32_t VAR_21;

   if (FUNC_3(VAR_7->r_ctl.rc_rcvtime, VAR_7->r_ctl.rc_recovery_start))
    VAR_21 = VAR_7->r_ctl.rc_rcvtime - VAR_7->r_ctl.rc_recovery_start;
   else
    VAR_21 = 0;

   if (VAR_21 >= FUNC_4(VAR_7, VAR_0)) {

    VAR_7->pkt_conservation = 0;
   } else {
    if ((VAR_20 + VAR_9) > VAR_15)
     VAR_15 = VAR_20 + VAR_9;
    if (VAR_15 < FUNC_10(VAR_7))
     VAR_15 = FUNC_10(VAR_7);
    VAR_6->snd_cwnd = VAR_15;
    FUNC_7(VAR_7, VAR_17, VAR_10,
           VAR_11, 1, VAR_16, VAR_8->th_ack, VAR_12);
    return;
   }
  }
 } else
  VAR_7->bbr_prev_in_rec = 0;
 if ((VAR_7->rc_use_google == 0) && VAR_7->r_ctl.restrict_growth) {
  VAR_7->r_ctl.restrict_growth--;
  if (VAR_9 > VAR_18)
   VAR_9 = VAR_18;
 }
 if (VAR_7->rc_filled_pipe) {





  uint32_t VAR_22;

  VAR_19 = 2;
  VAR_22 = FUNC_12((VAR_15 + VAR_9), VAR_16);
  if (VAR_22 > VAR_15)
   VAR_15 = VAR_22;
  else if (VAR_5 || VAR_7->rc_use_google || VAR_7->rc_no_pacing)
   VAR_15 = VAR_22;
 } else {




  if ((VAR_15 < VAR_16) ||
      (VAR_7->rc_past_init_win == 0)) {
   VAR_19 = 3;
   VAR_15 += VAR_9;
  } else {




   VAR_19 = 4;
  }
 }
 VAR_6->snd_cwnd = FUNC_11(VAR_15, FUNC_10(VAR_7));
 FUNC_7(VAR_7, VAR_17, VAR_10, VAR_11, VAR_19, VAR_16, VAR_8->th_ack, VAR_12);
}
