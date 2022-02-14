
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {scalar_t__ bbr_rttprobe_gain_val; scalar_t__ rc_bbr_hptsi_gain; int rc_target_at_state; } ;
struct tcp_bbr {scalar_t__ rc_bbr_state; int rc_last_options; TYPE_2__ r_ctl; scalar_t__ rc_use_google; TYPE_1__* rc_tp; } ;
struct TYPE_3__ {int t_maxseg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct tcp_bbr*,scalar_t__) ;
 scalar_t__* VAR_4 ;
 int FUNC_1 (struct tcp_bbr*,int,int,int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void
FUNC_2(struct tcp_bbr *VAR_7, int VAR_8)
{
 uint32_t VAR_9, VAR_10;

 if ((VAR_7->rc_bbr_state == VAR_1) &&
     ((VAR_7->r_ctl.bbr_rttprobe_gain_val == 0) || VAR_7->rc_use_google)) {

  VAR_9 = VAR_5 * (VAR_7->rc_tp->t_maxseg - VAR_7->rc_last_options);
  VAR_10 = 1;
 } else {

  if ((VAR_7->rc_bbr_state == VAR_0) &&
      (VAR_7->r_ctl.rc_bbr_hptsi_gain > VAR_3)) {

   VAR_9 = FUNC_0(VAR_7, VAR_7->r_ctl.rc_bbr_hptsi_gain);
   VAR_10 = 2;
  } else if ((VAR_6) || VAR_7->rc_use_google) {




   VAR_9 = FUNC_0(VAR_7, VAR_3);
   VAR_10 = 3;
  } else {





   if (VAR_7->r_ctl.rc_bbr_hptsi_gain < VAR_4[VAR_2]) {
    VAR_9 = FUNC_0(VAR_7, VAR_4[VAR_2]);
    VAR_10 = 4;
   } else {
    VAR_9 = FUNC_0(VAR_7, VAR_7->r_ctl.rc_bbr_hptsi_gain);
    VAR_10 = 5;
   }
  }
 }
 FUNC_1(VAR_7, VAR_9, VAR_8, VAR_10);
 VAR_7->r_ctl.rc_target_at_state = VAR_9;
}
