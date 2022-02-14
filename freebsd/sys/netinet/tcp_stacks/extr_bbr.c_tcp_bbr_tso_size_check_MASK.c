
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_8__ {int rc_pace_min_segs; int rc_pace_max_segs; int rc_bbr_hptsi_gain; int bbr_cross_over; int bbr_hptsi_segments_max; int bbr_hptsi_per_second; int bbr_hptsi_segments_floor; int bbr_utter_max; int bbr_hptsi_segments_delay_tar; } ;
struct tcp_bbr {scalar_t__ rc_last_options; scalar_t__ rc_past_init_win; scalar_t__ rc_use_google; TYPE_3__ r_ctl; TYPE_2__* rc_inp; scalar_t__ rc_no_pacing; TYPE_5__* rc_tp; scalar_t__ bbr_init_win_cheat; } ;
struct TYPE_10__ {scalar_t__ t_maxseg; int t_flags; int snd_wnd; } ;
struct TYPE_6__ {int sb_flags; } ;
struct TYPE_9__ {TYPE_1__ so_snd; } ;
struct TYPE_7__ {TYPE_4__* inp_socket; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct tcp_bbr*,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct tcp_bbr*) ;
 int FUNC_3 (struct tcp_bbr*,int,int ,int) ;
 int FUNC_4 (struct tcp_bbr*,TYPE_5__*) ;
 int FUNC_5 (struct tcp_bbr*,int,int,int,int,int,int ) ;
 int FUNC_6 (struct tcp_bbr*) ;
 int FUNC_7 (TYPE_4__*,int ) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int,int) ;

__attribute__((used)) static void
FUNC_10(struct tcp_bbr *VAR_7, uint32_t VAR_8)
{
 uint64_t VAR_9;
 uint32_t VAR_10 = 0, VAR_11;
 uint32_t VAR_12, VAR_13;
 uint32_t VAR_14=0;
 if (VAR_7->rc_tp->t_maxseg > VAR_7->rc_last_options) {
  VAR_12 = VAR_7->rc_tp->t_maxseg - VAR_7->rc_last_options;
 } else {
  VAR_12 = VAR_0 - VAR_7->rc_last_options;
 }






 VAR_10 = VAR_7->r_ctl.rc_pace_max_segs;
 if (VAR_7->rc_past_init_win == 0) {






  if (VAR_7->rc_use_google)
   VAR_7->r_ctl.rc_pace_max_segs = ((VAR_7->rc_tp->t_maxseg - VAR_7->rc_last_options) * 2);
  else if (VAR_7->bbr_init_win_cheat)
   VAR_7->r_ctl.rc_pace_max_segs = FUNC_4(VAR_7, VAR_7->rc_tp);
  else
   VAR_7->r_ctl.rc_pace_max_segs = VAR_7->rc_tp->t_maxseg - VAR_7->rc_last_options;
  if (VAR_7->r_ctl.rc_pace_min_segs != VAR_7->rc_tp->t_maxseg)
   VAR_7->r_ctl.rc_pace_min_segs = VAR_7->rc_tp->t_maxseg;
  if (VAR_7->r_ctl.rc_pace_max_segs == 0) {
   VAR_7->r_ctl.rc_pace_max_segs = VAR_12;
  }
  FUNC_5(VAR_7, VAR_8, VAR_7->r_ctl.rc_pace_max_segs, VAR_14, VAR_10, VAR_12, 0);



   FUNC_1(VAR_7, VAR_8);
  return;
 }





 VAR_9 = FUNC_2(VAR_7);
 if (FUNC_0(VAR_7->rc_tp->t_flags) &&
      (VAR_7->rc_use_google == 0)) {

  VAR_11 = VAR_12;
 } else if (VAR_7->rc_use_google) {
  int VAR_15;


  if (VAR_7->r_ctl.rc_bbr_hptsi_gain != VAR_1) {
   VAR_9 *= VAR_7->r_ctl.rc_bbr_hptsi_gain;
   VAR_9 /= VAR_1;
  }
  VAR_13 = VAR_9 / 1024;
  if (VAR_13 > (64 * 1024))
   VAR_13 = 64 * 1024;
  VAR_11 = VAR_13 / VAR_12;
  if (VAR_9 < VAR_3)
   VAR_15 = 1;
  else
   VAR_15 = 2;
  if (VAR_11 < VAR_15)
   VAR_11 = VAR_15;
  VAR_11 *= VAR_12;
 } else if (VAR_7->rc_no_pacing) {
  VAR_11 = (VAR_4 / VAR_12) * VAR_12;
 } else if (VAR_9 <= VAR_7->r_ctl.bbr_cross_over) {




  uint32_t VAR_16, VAR_17;

  VAR_16 = FUNC_3(VAR_7, VAR_1, VAR_7->r_ctl.bbr_hptsi_segments_delay_tar, VAR_9);
  if (VAR_16 > VAR_12) {
   VAR_11 = VAR_16 / VAR_12;
   if (VAR_11 > VAR_7->r_ctl.bbr_hptsi_segments_max)
    VAR_11 = VAR_7->r_ctl.bbr_hptsi_segments_max;
   VAR_11 *= VAR_12;
  } else {




   VAR_17 = FUNC_6(VAR_7);
   if ((VAR_16 > VAR_17) && (VAR_6 == 0))
    VAR_11 = FUNC_8(VAR_16, VAR_17);
   else
    VAR_11 = VAR_17;
  }
 } else if (VAR_9 > VAR_2) {




  VAR_11 = FUNC_8(VAR_4, VAR_12);
 } else {
  VAR_9 /= VAR_7->r_ctl.bbr_hptsi_per_second;
  VAR_11 = FUNC_9(VAR_9, (uint64_t)VAR_12);





  if (VAR_11 < (VAR_7->r_ctl.bbr_hptsi_segments_max * VAR_12))
   VAR_11 = (VAR_7->r_ctl.bbr_hptsi_segments_max * VAR_12);
 }
 if (VAR_7->r_ctl.bbr_hptsi_segments_floor && (VAR_11 < (VAR_12 * VAR_7->r_ctl.bbr_hptsi_segments_floor)))
  VAR_11 = VAR_12 * VAR_7->r_ctl.bbr_hptsi_segments_floor;
 if (VAR_11 > VAR_4)
  VAR_11 = FUNC_8(VAR_4, VAR_12);




  if (VAR_7->r_ctl.bbr_utter_max && (VAR_11 > (VAR_7->r_ctl.bbr_utter_max * VAR_12))) {
   VAR_11 = VAR_7->r_ctl.bbr_utter_max * VAR_12;
  }
 if (VAR_10 != VAR_11) {

  FUNC_5(VAR_7, VAR_8, VAR_11, VAR_14, VAR_10, VAR_12, 0);
  VAR_7->r_ctl.rc_pace_max_segs = VAR_11;
 }







  FUNC_1(VAR_7, VAR_8);
}
