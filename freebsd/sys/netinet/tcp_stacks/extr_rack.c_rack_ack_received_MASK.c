
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct tcphdr {scalar_t__ th_ack; } ;
struct tcpcb {scalar_t__ snd_cwnd; scalar_t__ snd_wnd; int t_flags; int t_stats_gput_prev; scalar_t__ snd_ssthresh; scalar_t__ t_bytes_acked; scalar_t__ t_peakrate_thr; int t_stats; TYPE_2__* ccv; scalar_t__ t_maxpeakrate; scalar_t__ gput_ts; scalar_t__ gput_seq; int gput_ack; int t_inpcb; } ;
struct TYPE_4__ {scalar_t__ rc_early_recovery_segs; int* rc_gp_history; size_t rc_gp_hist_idx; int rc_gp_hist_filled; scalar_t__ rc_rack_largest_cwnd; } ;
struct tcp_rack {TYPE_1__ r_ctl; } ;
typedef int int64_t ;
typedef int int32_t ;
struct TYPE_6__ {int (* ack_received ) (TYPE_2__*,scalar_t__) ;} ;
struct TYPE_5__ {scalar_t__ curack; int flags; scalar_t__ bytes_this_ack; scalar_t__ nsegs; } ;


 scalar_t__ FUNC_0 (struct tcpcb*,struct tcphdr*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* FUNC_1 (struct tcpcb*) ;
 int FUNC_2 (int ) ;
 size_t VAR_3 ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_4 (struct tcpcb*) ;
 int FUNC_5 (int,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,int ,scalar_t__) ;
 int FUNC_10 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (struct tcpcb*) ;

__attribute__((used)) static void
FUNC_13(struct tcpcb *VAR_10, struct tcp_rack *VAR_11, struct tcphdr *VAR_12, uint16_t VAR_13,
    uint16_t VAR_14, int32_t VAR_15)
{




 FUNC_2(VAR_10->t_inpcb);
 VAR_10->ccv->nsegs = VAR_13;
 VAR_10->ccv->bytes_this_ack = FUNC_0(VAR_10, VAR_12);
 if ((VAR_15) && (VAR_11->r_ctl.rc_early_recovery_segs)) {
  uint32_t VAR_16;

  VAR_16 = VAR_11->r_ctl.rc_early_recovery_segs * FUNC_4(VAR_10);
  if (VAR_10->ccv->bytes_this_ack > VAR_16) {
   VAR_10->ccv->bytes_this_ack = VAR_16;
  }
 }
 if (VAR_10->snd_cwnd <= VAR_10->snd_wnd)
  VAR_10->ccv->flags |= VAR_1;
 else
  VAR_10->ccv->flags &= ~VAR_1;

 if (VAR_14 == VAR_2) {
  if (VAR_10->snd_cwnd > VAR_10->snd_ssthresh) {
   VAR_10->t_bytes_acked += FUNC_6(VAR_10->ccv->bytes_this_ack,
       VAR_13 * VAR_9 * FUNC_4(VAR_10));
   if (VAR_10->t_bytes_acked >= VAR_10->snd_cwnd) {
    VAR_10->t_bytes_acked -= VAR_10->snd_cwnd;
    VAR_10->ccv->flags |= VAR_0;
   }
  } else {
   VAR_10->ccv->flags &= ~VAR_0;
   VAR_10->t_bytes_acked = 0;
  }
 }
 if (FUNC_1(VAR_10)->ack_received != ((void*)0)) {

  VAR_10->ccv->curack = VAR_12->th_ack;
  FUNC_1(VAR_10)->ack_received(VAR_10->ccv, VAR_14);
 }



 if (VAR_11->r_ctl.rc_rack_largest_cwnd < VAR_10->snd_cwnd) {
  VAR_11->r_ctl.rc_rack_largest_cwnd = VAR_10->snd_cwnd;
 }

 if (VAR_10->t_peakrate_thr && VAR_10->snd_cwnd > VAR_10->t_peakrate_thr) {
  VAR_10->snd_cwnd = VAR_10->t_peakrate_thr;
 }
}
