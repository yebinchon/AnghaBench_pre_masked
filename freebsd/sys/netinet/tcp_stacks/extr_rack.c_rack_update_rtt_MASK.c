
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct tcpopt {int to_flags; int to_tsecr; } ;
struct tcpcb {int t_rttlow; scalar_t__ t_softerror; scalar_t__ t_rxtshift; int snd_ssthresh; int snd_cwnd; int snd_max; int t_flags; } ;
struct TYPE_2__ {int rc_rack_min_rtt; int rc_rack_tmit_time; int rc_prr_sndcnt; int rc_ssthresh_at; int rc_cwnd_at; int rc_rsm_start; scalar_t__ rc_tlp_cwnd_reduce; } ;
struct tcp_rack {int rc_rack_rtt; TYPE_1__ r_ctl; } ;
struct rack_sendmap {int r_flags; int r_rtr_cnt; int* r_tim_lastsent; } ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int,int) ;
 int VAR_5 ;
 int FUNC_2 (struct tcpcb*) ;
 int FUNC_3 (struct tcpcb*,int *,int ) ;
 int FUNC_4 (struct tcpcb*,struct rack_sendmap*,int,int) ;
 int FUNC_5 (struct tcp_rack*,int) ;
 int FUNC_6 (struct tcp_rack*,int) ;

__attribute__((used)) static int
FUNC_7(struct tcpcb *VAR_6, struct tcp_rack *VAR_7,
    struct rack_sendmap *VAR_8, struct tcpopt *VAR_9, uint32_t VAR_10, int32_t VAR_11)
{
 int32_t VAR_12;
 uint32_t VAR_13;

 if (VAR_8->r_flags & VAR_2)

  return (0);


 if ((VAR_8->r_rtr_cnt == 1) ||
     ((VAR_11 == VAR_1) &&
     (VAR_9->to_flags & VAR_5) &&
     (VAR_9->to_tsecr) &&
     (VAR_8->r_tim_lastsent[VAR_8->r_rtr_cnt - 1] == VAR_9->to_tsecr))
     ) {





  VAR_13 = VAR_10 - VAR_8->r_tim_lastsent[(VAR_8->r_rtr_cnt - 1)];
  if ((int)VAR_13 <= 0)
   VAR_13 = 1;
  if (!VAR_6->t_rttlow || VAR_6->t_rttlow > VAR_13)
   VAR_6->t_rttlow = VAR_13;
  if (!VAR_7->r_ctl.rc_rack_min_rtt ||
      FUNC_1(VAR_13, VAR_7->r_ctl.rc_rack_min_rtt)) {
   VAR_7->r_ctl.rc_rack_min_rtt = VAR_13;
   if (VAR_7->r_ctl.rc_rack_min_rtt == 0) {
    VAR_7->r_ctl.rc_rack_min_rtt = 1;
   }
  }
  FUNC_6(VAR_7, VAR_13 + 1);
  if ((VAR_8->r_flags & VAR_4) &&
      (!FUNC_0(VAR_6->t_flags))) {

   if (VAR_7->r_ctl.rc_tlp_cwnd_reduce) {
    VAR_7->r_ctl.rc_rsm_start = VAR_6->snd_max;
    VAR_7->r_ctl.rc_cwnd_at = VAR_6->snd_cwnd;
    VAR_7->r_ctl.rc_ssthresh_at = VAR_6->snd_ssthresh;
    FUNC_3(VAR_6, ((void*)0), VAR_0);




    VAR_7->r_ctl.rc_prr_sndcnt = FUNC_2(VAR_6);
    FUNC_5(VAR_7, 7);
   }
  }
  if (FUNC_1(VAR_7->r_ctl.rc_rack_tmit_time, VAR_8->r_tim_lastsent[(VAR_8->r_rtr_cnt - 1)])) {

   VAR_7->r_ctl.rc_rack_tmit_time = VAR_8->r_tim_lastsent[(VAR_8->r_rtr_cnt - 1)];
   VAR_7->rc_rack_rtt = VAR_13;
  }
  return (1);
 }





 VAR_6->t_rxtshift = 0;
 VAR_6->t_softerror = 0;
 if ((VAR_9->to_flags & VAR_5) &&
     (VAR_11 == VAR_1) &&
     (VAR_9->to_tsecr) &&
     ((VAR_8->r_flags & VAR_3) == 0)) {




  for (VAR_12 = 0; VAR_12 < VAR_8->r_rtr_cnt; VAR_12++) {
   if (VAR_8->r_tim_lastsent[VAR_12] == VAR_9->to_tsecr) {
    VAR_13 = VAR_10 - VAR_8->r_tim_lastsent[VAR_12];
    if ((int)VAR_13 <= 0)
     VAR_13 = 1;
    if ((VAR_12 + 1) < VAR_8->r_rtr_cnt) {

     FUNC_4(VAR_6, VAR_8, VAR_13, VAR_10);
    }
    if (!VAR_6->t_rttlow || VAR_6->t_rttlow > VAR_13)
     VAR_6->t_rttlow = VAR_13;
    if (!VAR_7->r_ctl.rc_rack_min_rtt || FUNC_1(VAR_13, VAR_7->r_ctl.rc_rack_min_rtt)) {
     VAR_7->r_ctl.rc_rack_min_rtt = VAR_13;
     if (VAR_7->r_ctl.rc_rack_min_rtt == 0) {
      VAR_7->r_ctl.rc_rack_min_rtt = 1;
     }
    }
    if (FUNC_1(VAR_7->r_ctl.rc_rack_tmit_time,
        VAR_8->r_tim_lastsent[(VAR_8->r_rtr_cnt - 1)])) {

     VAR_7->r_ctl.rc_rack_tmit_time = VAR_8->r_tim_lastsent[(VAR_8->r_rtr_cnt - 1)];
     VAR_7->rc_rack_rtt = VAR_13;
    }
    return (1);
   }
  }
  goto ts_not_found;
 } else {






ts_not_found:
  VAR_12 = VAR_8->r_rtr_cnt - 1;
  VAR_13 = VAR_10 - VAR_8->r_tim_lastsent[VAR_12];
  if ((int)VAR_13 <= 0)
   VAR_13 = 1;
  if (VAR_7->r_ctl.rc_rack_min_rtt && FUNC_1(VAR_13, VAR_7->r_ctl.rc_rack_min_rtt)) {






   VAR_12 = VAR_8->r_rtr_cnt - 2;
   VAR_13 = VAR_10 - VAR_8->r_tim_lastsent[VAR_12];
   FUNC_4(VAR_6, VAR_8, VAR_13, VAR_10);
  } else if (VAR_7->r_ctl.rc_rack_min_rtt) {




   if (!VAR_7->r_ctl.rc_rack_min_rtt ||
       FUNC_1(VAR_13, VAR_7->r_ctl.rc_rack_min_rtt)) {
    VAR_7->r_ctl.rc_rack_min_rtt = VAR_13;
    if (VAR_7->r_ctl.rc_rack_min_rtt == 0) {
     VAR_7->r_ctl.rc_rack_min_rtt = 1;
    }
   }
   if (FUNC_1(VAR_7->r_ctl.rc_rack_tmit_time, VAR_8->r_tim_lastsent[VAR_12])) {

    VAR_7->r_ctl.rc_rack_tmit_time = VAR_8->r_tim_lastsent[VAR_12];
    VAR_7->rc_rack_rtt = VAR_13;
   }
   return (1);
  }
 }
 return (0);
}
