
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct tcp_hwrate_limit_table {int time_between; TYPE_2__* ptbl; } ;
struct TYPE_6__ {int rc_pace_max_segs; int bbr_hptsi_segments_delay_tar; struct tcp_hwrate_limit_table* crte; } ;
struct tcp_bbr {scalar_t__ bbr_hdrw_pacing; scalar_t__ hw_pacing_set; scalar_t__ rc_last_options; TYPE_3__ r_ctl; TYPE_1__* rc_tp; } ;
struct TYPE_5__ {int rs_min_seg; } ;
struct TYPE_4__ {scalar_t__ t_maxseg; int t_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct tcp_bbr*,int ,int,int,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct tcp_bbr*,int,int,int,int,int,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void
FUNC_4(struct tcp_bbr *VAR_5, uint32_t VAR_6)
{





 const struct tcp_hwrate_limit_table *VAR_7;
 uint32_t VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

 if ((VAR_5->bbr_hdrw_pacing == 0) ||
     (FUNC_0(VAR_5->rc_tp->t_flags)) ||
     (VAR_5->r_ctl.crte == ((void*)0)))
  return;
 if (VAR_5->hw_pacing_set == 0) {

  return;
 }
 if (VAR_3 == 0) {

  return;
 }
 VAR_7 = VAR_5->r_ctl.crte;
 if (VAR_5->rc_tp->t_maxseg > VAR_5->rc_last_options)
  VAR_10 = VAR_5->rc_tp->t_maxseg - VAR_5->rc_last_options;
 else
  VAR_10 = VAR_0 - VAR_5->rc_last_options;






 VAR_8 = FUNC_1(VAR_5, VAR_1,
          VAR_5->r_ctl.rc_pace_max_segs, VAR_6, 1);
 VAR_13 = VAR_5->r_ctl.rc_pace_max_segs / VAR_10;
 VAR_13 *= VAR_7->time_between;
 if (VAR_8 > VAR_13)
  VAR_12 = VAR_8 - VAR_13;
 else
  VAR_12 = 0;
 FUNC_2(VAR_5, VAR_6, VAR_12, VAR_8, VAR_13,
        (VAR_5->r_ctl.rc_pace_max_segs / VAR_10),
        1);
 if (VAR_12 &&
     (VAR_12 < (FUNC_3(VAR_7->time_between,
     VAR_5->r_ctl.bbr_hptsi_segments_delay_tar)))) {
  VAR_9 = FUNC_3(((VAR_8 + VAR_7->time_between)/VAR_7->time_between),
        (VAR_5->r_ctl.rc_pace_max_segs/VAR_10));
  VAR_9 *= VAR_3;
  if (VAR_4 &&
      (VAR_9 < VAR_5->r_ctl.crte->ptbl->rs_min_seg)) {





   VAR_9 = VAR_5->r_ctl.crte->ptbl->rs_min_seg;
  }
  VAR_9 *= VAR_10;
 } else if (VAR_12 == 0) {
  VAR_9 = VAR_5->r_ctl.rc_pace_max_segs * VAR_3;
  if (VAR_4 &&
      (VAR_9 < VAR_5->r_ctl.crte->ptbl->rs_min_seg)) {





   VAR_9 = VAR_5->r_ctl.crte->ptbl->rs_min_seg;
  }
 } else {
  VAR_9 = VAR_5->r_ctl.rc_pace_max_segs;
 }
 if (VAR_9 > VAR_5->r_ctl.rc_pace_max_segs)
  VAR_11 = VAR_9;
 else
  VAR_11 = VAR_5->r_ctl.rc_pace_max_segs;
 if (VAR_11 >= (VAR_2-VAR_10))
  VAR_11 = VAR_2 - VAR_10;

 if (VAR_11 != VAR_5->r_ctl.rc_pace_max_segs) {
  FUNC_2(VAR_5, VAR_6, VAR_11, 0, VAR_5->r_ctl.rc_pace_max_segs, VAR_10, 0);
  VAR_5->r_ctl.rc_pace_max_segs = VAR_11;
 }
}
