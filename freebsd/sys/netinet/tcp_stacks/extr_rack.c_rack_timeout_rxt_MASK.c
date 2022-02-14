
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct tcpcb {scalar_t__ t_state; scalar_t__ snd_una; scalar_t__ snd_max; int t_rxtshift; int snd_cwnd; int snd_cwnd_prev; scalar_t__ snd_recover_prev; scalar_t__ snd_recover; int t_srtt; int t_flags2; scalar_t__ t_pmtud_saved_maxseg; scalar_t__ t_maxseg; int t_rttvar; scalar_t__ t_rtttime; int t_flags; struct inpcb* t_inpcb; int t_rxtcur; scalar_t__ t_badrxtwin; int snd_ssthresh; int snd_ssthresh_prev; scalar_t__ t_softerror; TYPE_1__* t_timers; } ;
struct TYPE_6__ {int rack_sf; TYPE_2__* rc_resend; int rc_hpts_flags; } ;
struct tcp_rack {TYPE_3__ r_ctl; struct inpcb* rc_inp; } ;
struct inpcb {int inp_vflag; } ;
typedef int int32_t ;
struct TYPE_5__ {int r_flags; } ;
struct TYPE_4__ {int tt_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_5 (int ,int,int ,int) ;
 int VAR_10 ;
 int FUNC_6 (struct tcpcb*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int FUNC_7 (struct inpcb*) ;
 int FUNC_8 (struct inpcb*) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (struct tcpcb*,int *,int ) ;
 scalar_t__ FUNC_11 (struct tcpcb*) ;
 int FUNC_12 (struct tcpcb*) ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 int FUNC_13 (int *,scalar_t__) ;
 int* VAR_28 ;
 int FUNC_14 (struct inpcb*,int ) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 scalar_t__ VAR_34 ;

__attribute__((used)) static int
FUNC_15(struct tcpcb *VAR_35, struct tcp_rack *VAR_36, uint32_t VAR_37)
{
 int32_t VAR_38;
 struct inpcb *VAR_39;
 int32_t VAR_40 = 0;

 VAR_39 = VAR_35->t_inpcb;
 if (VAR_35->t_timers->tt_flags & VAR_19) {
  return (1);
 }
 if (FUNC_11(VAR_35)) {
  FUNC_14(VAR_39, VAR_1);
  return (1);
 }
 VAR_36->r_ctl.rc_hpts_flags &= ~VAR_3;
 if (FUNC_4(VAR_35->t_state) &&
     (VAR_35->snd_una == VAR_35->snd_max)) {

  return (0);
 }





 FUNC_12(VAR_35);
 if ((VAR_36->r_ctl.rc_resend == ((void*)0)) ||
     ((VAR_36->r_ctl.rc_resend->r_flags & VAR_5) == 0)) {






  VAR_35->t_rxtshift++;
 }
 if (VAR_35->t_rxtshift > VAR_10) {
  VAR_35->t_rxtshift = VAR_10;
  FUNC_3(VAR_33);
  VAR_40 = 1;
  FUNC_14(VAR_36->rc_inp,
      (VAR_35->t_softerror ? (uint16_t) VAR_35->t_softerror : VAR_1));
  goto out;
 }
 if (VAR_35->t_state == VAR_9) {




  VAR_35->snd_cwnd = 1;
 } else if (VAR_35->t_rxtshift == 1) {
  VAR_35->snd_cwnd_prev = VAR_35->snd_cwnd;
  VAR_35->snd_ssthresh_prev = VAR_35->snd_ssthresh;
  VAR_35->snd_recover_prev = VAR_35->snd_recover;
  if (FUNC_1(VAR_35->t_flags))
   VAR_35->t_flags |= VAR_18;
  else
   VAR_35->t_flags &= ~VAR_18;
  if (FUNC_0(VAR_35->t_flags))
   VAR_35->t_flags |= VAR_17;
  else
   VAR_35->t_flags &= ~VAR_17;
  VAR_35->t_badrxtwin = VAR_34 + (VAR_35->t_srtt >> (VAR_11 + 1));
  VAR_35->t_flags |= VAR_16;
 } else
  VAR_35->t_flags &= ~VAR_16;
 FUNC_3(VAR_32);
 if ((VAR_35->t_state == VAR_9) ||
     (VAR_35->t_state == VAR_8))
  VAR_38 = FUNC_2(VAR_4 * VAR_28[VAR_35->t_rxtshift]);
 else
  VAR_38 = FUNC_6(VAR_35) * VAR_28[VAR_35->t_rxtshift];
 FUNC_5(VAR_35->t_rxtcur, VAR_38,
    FUNC_9(FUNC_2(VAR_26), VAR_38),
    FUNC_2(VAR_25));







 if (VAR_21 && (((VAR_35->t_state == VAR_6))
     || (VAR_35->t_state == VAR_7))) {
  if (((VAR_35->t_flags2 & (VAR_14 | VAR_13)) ==
      (VAR_14 | VAR_13)) &&
      (VAR_35->t_rxtshift >= 2 && VAR_35->t_rxtshift < 6 &&
      VAR_35->t_rxtshift % 2 == 0)) {






   if ((VAR_35->t_flags2 & VAR_12) == 0) {

    VAR_35->t_flags2 |= VAR_12;

    VAR_35->t_pmtud_saved_maxseg = VAR_35->t_maxseg;
   }
  } else {
   if ((VAR_35->t_flags2 & VAR_12) &&
       (VAR_35->t_rxtshift >= 6)) {
    VAR_35->t_flags2 |= VAR_14;
    VAR_35->t_flags2 &= ~VAR_12;
    VAR_35->t_maxseg = VAR_35->t_pmtud_saved_maxseg;
    FUNC_3(VAR_31);
   }
  }
 }






 if (VAR_35->t_rxtshift > VAR_10 / 4) {





   FUNC_8(VAR_35->t_inpcb);
  VAR_35->t_rttvar += (VAR_35->t_srtt >> VAR_11);
  VAR_35->t_srtt = 0;
 }
 if (VAR_27)
  FUNC_13(&VAR_36->r_ctl.rack_sf, VAR_35->snd_una);
 VAR_35->snd_recover = VAR_35->snd_max;
 VAR_35->t_flags |= VAR_15;
 VAR_35->t_rtttime = 0;
 FUNC_10(VAR_35, ((void*)0), VAR_0);
out:
 return (VAR_40);
}
