
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct tcpcb {scalar_t__ t_state; scalar_t__ snd_una; scalar_t__ snd_max; int t_rxtshift; int snd_cwnd; int t_maxseg; int t_flags; int snd_cwnd_prev; scalar_t__ snd_recover_prev; scalar_t__ snd_recover; int t_srtt; int t_flags2; int t_pmtud_saved_maxseg; int t_rttvar; scalar_t__ t_rtttime; int t_inpcb; int t_rxtcur; scalar_t__ t_badrxtwin; int snd_ssthresh; int snd_ssthresh_prev; scalar_t__ t_softerror; } ;
struct TYPE_4__ {int rc_min_rto_ms; int bbr_sf; TYPE_1__* rc_resend; int rc_hpts_flags; } ;
struct tcp_bbr {int rc_last_options; int r_is_v6; TYPE_2__ r_ctl; scalar_t__ rc_max_rto_sec; int rc_inp; scalar_t__ rc_all_timers_stopped; } ;
typedef int int32_t ;
struct TYPE_3__ {int r_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int ,int,int ,int ) ;
 int VAR_8 ;
 int FUNC_5 (struct tcpcb*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ FUNC_7 (struct tcp_bbr*) ;
 int FUNC_8 (struct tcpcb*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,scalar_t__) ;
 int* VAR_23 ;
 scalar_t__ VAR_24 ;
 int FUNC_12 (int ,int ) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;

__attribute__((used)) static int
FUNC_13(struct tcpcb *VAR_31, struct tcp_bbr *VAR_32, uint32_t VAR_33)
{
 int32_t VAR_34;
 int32_t VAR_35 = 0;

 VAR_32->r_ctl.rc_hpts_flags &= ~VAR_3;
 if (VAR_32->rc_all_timers_stopped) {
  return (1);
 }
 if (FUNC_3(VAR_31->t_state) &&
     (VAR_31->snd_una == VAR_31->snd_max)) {

  return (0);
 }





 if (FUNC_7(VAR_32)) {
  VAR_35 = 1;
  FUNC_12(VAR_32->rc_inp, VAR_2);
  goto out;
 }
 FUNC_8(VAR_31);
 if ((VAR_32->r_ctl.rc_resend == ((void*)0)) ||
     ((VAR_32->r_ctl.rc_resend->r_flags & VAR_1) == 0)) {






  VAR_31->t_rxtshift++;
 }
 if (VAR_31->t_rxtshift > VAR_8) {
  VAR_31->t_rxtshift = VAR_8;
  FUNC_2(VAR_29);
  VAR_35 = 1;
  FUNC_12(VAR_32->rc_inp,
      (VAR_31->t_softerror ? (uint16_t) VAR_31->t_softerror : VAR_2));
  goto out;
 }
 if (VAR_31->t_state == VAR_7) {




  VAR_31->snd_cwnd = 1;
 } else if (VAR_31->t_rxtshift == 1) {
  VAR_31->snd_cwnd = VAR_31->t_maxseg - VAR_32->rc_last_options;
  if (!FUNC_0(VAR_31->t_flags)) {
   VAR_31->snd_cwnd_prev = VAR_31->snd_cwnd;
   VAR_31->snd_ssthresh_prev = VAR_31->snd_ssthresh;
   VAR_31->snd_recover_prev = VAR_31->snd_recover;
   VAR_31->t_badrxtwin = VAR_30 + (VAR_31->t_srtt >> (VAR_9 + 1));
   VAR_31->t_flags |= VAR_14;
  } else {
   VAR_31->t_flags &= ~VAR_14;
  }
  VAR_31->snd_cwnd = VAR_31->t_maxseg - VAR_32->rc_last_options;
 } else {
  VAR_31->snd_cwnd = VAR_31->t_maxseg - VAR_32->rc_last_options;
  VAR_31->t_flags &= ~VAR_14;
 }
 FUNC_2(VAR_28);
 if ((VAR_31->t_state == VAR_7) ||
     (VAR_31->t_state == VAR_6))
  VAR_34 = FUNC_6(VAR_0) * VAR_23[VAR_31->t_rxtshift];
 else
  VAR_34 = FUNC_5(VAR_31) * VAR_23[VAR_31->t_rxtshift];
 FUNC_4(VAR_31->t_rxtcur, VAR_34,
     FUNC_1(VAR_32->r_ctl.rc_min_rto_ms),
     FUNC_1(((uint32_t)VAR_32->rc_max_rto_sec) * 1000));







 if (VAR_19 && (((VAR_31->t_state == VAR_4))
     || (VAR_31->t_state == VAR_5))) {
  if (((VAR_31->t_flags2 & (VAR_12 | VAR_11)) ==
      (VAR_12 | VAR_11)) &&
      (VAR_31->t_rxtshift >= 2 && VAR_31->t_rxtshift < 6 &&
      VAR_31->t_rxtshift % 2 == 0)) {






   if ((VAR_31->t_flags2 & VAR_10) == 0) {




    VAR_31->t_flags2 |= VAR_10;

    VAR_31->t_pmtud_saved_maxseg = VAR_31->t_maxseg;
   }
  } else {
   if ((VAR_31->t_flags2 & VAR_10) &&
       (VAR_31->t_rxtshift >= 6)) {
    VAR_31->t_flags2 |= VAR_12;
    VAR_31->t_flags2 &= ~VAR_10;
    VAR_31->t_maxseg = VAR_31->t_pmtud_saved_maxseg;
    FUNC_2(VAR_27);
   }
  }
 }







 if (VAR_24 && (VAR_31->t_state == VAR_7) &&
     (VAR_31->t_rxtshift == 3))
  VAR_31->t_flags &= ~(VAR_15 | VAR_16 | VAR_17);






 if (VAR_31->t_rxtshift > VAR_8 / 4) {





   FUNC_10(VAR_31->t_inpcb);
  VAR_31->t_rttvar += (VAR_31->t_srtt >> VAR_9);
  VAR_31->t_srtt = 0;
 }
 FUNC_11(&VAR_32->r_ctl.bbr_sf, VAR_31->snd_una);
 VAR_31->snd_recover = VAR_31->snd_max;
 VAR_31->t_flags |= VAR_13;
 VAR_31->t_rtttime = 0;
out:
 return (VAR_35);
}
