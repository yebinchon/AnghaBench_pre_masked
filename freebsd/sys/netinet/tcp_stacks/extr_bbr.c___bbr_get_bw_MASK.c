
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int rc_initial_hptsi_bw; scalar_t__ rc_delivered; int r_measurement_count; int rc_lt_bw; int red_bw; int rc_delrate; int rc_rttprop; } ;
struct tcp_bbr {scalar_t__ rc_bbr_state; int rc_past_init_win; scalar_t__ rc_use_google; TYPE_2__* rc_tp; TYPE_1__ r_ctl; scalar_t__ r_recovery_bw; scalar_t__ rc_lt_use_bw; } ;
struct TYPE_4__ {scalar_t__ t_srtt; scalar_t__ t_peakrate_thr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct tcp_bbr*,int ) ;
 scalar_t__ FUNC_1 (struct tcp_bbr*,TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static inline uint64_t
FUNC_5(struct tcp_bbr *VAR_3)
{
 uint64_t VAR_4, VAR_5;
 uint64_t VAR_6;
 int VAR_7 = 1;
 if (VAR_3->rc_bbr_state == VAR_1) {

  VAR_6 = (uint64_t)FUNC_3(&VAR_3->r_ctl.rc_rttprop);
  if (VAR_6 && (VAR_6 < 0xffffffff)) {
measure:
   VAR_5 = (uint64_t)(FUNC_1(VAR_3, VAR_3->rc_tp)) *
    ((uint64_t)1000000);
   VAR_5 /= VAR_6;
   if (VAR_5 < VAR_3->r_ctl.rc_initial_hptsi_bw) {
    VAR_5 = VAR_3->r_ctl.rc_initial_hptsi_bw;
   }

  } else if (VAR_3->rc_tp->t_srtt != 0) {

   VAR_6 = FUNC_0(VAR_3, VAR_0);
   goto measure;
  } else {
   VAR_5 = VAR_3->r_ctl.rc_initial_hptsi_bw;
  }
 } else
  VAR_5 = 0;

 if ((VAR_3->rc_past_init_win == 0) &&
     (VAR_3->r_ctl.rc_delivered > FUNC_1(VAR_3, VAR_3->rc_tp)))
  VAR_3->rc_past_init_win = 1;
 if ((VAR_3->rc_use_google) && (VAR_3->r_ctl.r_measurement_count >= 1))
  VAR_7 = 0;
 if (VAR_7 &&
     ((VAR_3->r_ctl.r_measurement_count < VAR_2) ||
      (VAR_3->rc_past_init_win == 0))) {


use_initial_window:
  VAR_6 = (uint64_t)FUNC_3(&VAR_3->r_ctl.rc_rttprop);
  if (VAR_6 && (VAR_6 < 0xffffffff)) {





   VAR_4 = (uint64_t)(FUNC_1(VAR_3, VAR_3->rc_tp)) *
    ((uint64_t)1000000);
   VAR_4 /= VAR_6;
   if (VAR_4 < VAR_3->r_ctl.rc_initial_hptsi_bw) {
    VAR_4 = VAR_3->r_ctl.rc_initial_hptsi_bw;
   }
  } else {

   VAR_4 = VAR_3->r_ctl.rc_initial_hptsi_bw;
  }
  if (VAR_4 < 1)

   VAR_4 = 1;
  if (VAR_4 > VAR_5)
   return (VAR_4);
  else
   return (VAR_5);
 }
 if (VAR_3->rc_lt_use_bw)
  VAR_4 = VAR_3->r_ctl.rc_lt_bw;
 else if (VAR_3->r_recovery_bw && (VAR_3->rc_use_google == 0))
  VAR_4 = VAR_3->r_ctl.red_bw;
 else
  VAR_4 = FUNC_2(&VAR_3->r_ctl.rc_delrate);
 if (VAR_3->rc_tp->t_peakrate_thr && (VAR_3->rc_use_google == 0)) {




  VAR_4 = FUNC_4((uint64_t)VAR_3->rc_tp->t_peakrate_thr, VAR_4);
 }
 if (VAR_4 == 0) {

  goto use_initial_window;
 }
 if (VAR_4 < 1)

  VAR_4 = 1;
 if (VAR_4 < VAR_5)
  VAR_4 = VAR_5;
 return (VAR_4);
}
