
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct tcpcb {int t_flags; scalar_t__ t_state; int snd_una; int snd_max; scalar_t__ t_srtt; scalar_t__ t_rttvar; int t_rxtshift; TYPE_2__* t_inpcb; } ;
struct TYPE_6__ {scalar_t__ rc_tlp_rxt_last_time; scalar_t__ rc_min_to; int rc_min_rto_ms; scalar_t__ rc_last_tlp_seq; scalar_t__ rc_tlp_seg_send_cnt; int rc_hpts_flags; int rc_tmap; } ;
struct tcp_bbr {scalar_t__ rc_max_rto_sec; scalar_t__ rc_tlp_in_progress; int rc_tlp_rtx_out; TYPE_3__ r_ctl; scalar_t__ rc_in_persist; scalar_t__ rc_all_timers_stopped; } ;
struct bbr_sendmap {int r_rtr_cnt; scalar_t__* r_tim_lastsent; int r_flags; scalar_t__ r_start; } ;
typedef size_t int32_t ;
struct TYPE_5__ {TYPE_1__* inp_socket; } ;
struct TYPE_4__ {int so_snd; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int,int) ;
 struct bbr_sendmap* FUNC_3 (int *) ;
 struct bbr_sendmap* FUNC_4 (int *,int ,int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_5 (scalar_t__,scalar_t__,int,scalar_t__) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_9 (struct tcp_bbr*,scalar_t__,scalar_t__,struct bbr_sendmap*) ;
 scalar_t__ FUNC_10 (struct tcpcb*,struct tcp_bbr*,struct bbr_sendmap*,scalar_t__,scalar_t__) ;
 struct bbr_sendmap* FUNC_11 (struct tcp_bbr*) ;
 scalar_t__ FUNC_12 (struct tcpcb*,struct tcp_bbr*) ;
 scalar_t__ FUNC_13 (struct tcp_bbr*,int ) ;
 int FUNC_14 (struct tcp_bbr*,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_15 (int *) ;
 scalar_t__* VAR_20 ;

__attribute__((used)) static uint32_t
FUNC_16(struct tcpcb *VAR_21, struct tcp_bbr *VAR_22, uint32_t VAR_23)
{






 uint32_t VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29;
 int32_t VAR_30;
 int32_t VAR_31 = 0;
 struct bbr_sendmap *VAR_32;

 if (VAR_22->rc_all_timers_stopped) {

  return (0);
 }
 if (VAR_22->rc_in_persist) {

  return (FUNC_12(VAR_21, VAR_22));
 }
 VAR_32 = FUNC_3(&VAR_22->r_ctl.rc_tmap);
 if ((VAR_32 == ((void*)0)) ||
     ((VAR_21->t_flags & VAR_11) == 0) ||
     (VAR_21->t_state < VAR_9)) {

activate_rxt:
  if (FUNC_2(VAR_21->snd_una, VAR_21->snd_max) || FUNC_15(&(VAR_21->t_inpcb->inp_socket->so_snd))) {
   uint64_t VAR_33;

   VAR_28 = 0;
   VAR_32 = FUNC_3(&VAR_22->r_ctl.rc_tmap);
   if (VAR_32) {
    VAR_30 = VAR_32->r_rtr_cnt - 1;
    if (FUNC_7(VAR_32->r_tim_lastsent[VAR_30], VAR_22->r_ctl.rc_tlp_rxt_last_time))
     VAR_29 = VAR_32->r_tim_lastsent[VAR_30];
    else
     VAR_29 = VAR_22->r_ctl.rc_tlp_rxt_last_time;
    if (FUNC_8(VAR_29, VAR_23))
        VAR_28 = VAR_23 - VAR_29;
   }
   VAR_22->r_ctl.rc_hpts_flags |= VAR_7;
   if (VAR_21->t_srtt == 0)
    VAR_33 = VAR_2;
   else
    VAR_33 = ((uint64_t)(FUNC_6(VAR_21->t_srtt) +
        ((uint64_t)FUNC_6(VAR_21->t_rttvar) * (uint64_t)4)) >> VAR_10);
   if (VAR_21->t_rxtshift)
    VAR_33 *= VAR_20[VAR_21->t_rxtshift];
   if (VAR_33 > VAR_28)
    VAR_33 -= VAR_28;
   else
    VAR_33 = VAR_22->r_ctl.rc_min_to;
   FUNC_5(VAR_26, VAR_33,
       (VAR_22->r_ctl.rc_min_rto_ms * VAR_5),
       (VAR_22->rc_max_rto_sec * VAR_13));
   FUNC_14(VAR_22, 2, VAR_23, 0, VAR_27, 0, VAR_26);
   return (VAR_26);
  }
  return (0);
 }
 if (VAR_32->r_flags & VAR_0) {
  VAR_32 = FUNC_11(VAR_22);
  if (VAR_32 == ((void*)0)) {

   goto activate_rxt;
  }
 }

 if (VAR_32->r_flags & VAR_4) {
  if ((VAR_21->t_flags & VAR_12) &&
      ((VAR_21->snd_max - VAR_21->snd_una) == 1) &&
      (VAR_32->r_flags & VAR_1)) {




   goto activate_rxt;
  }
  VAR_27 = FUNC_13(VAR_22, VAR_3);
  VAR_24 = FUNC_9(VAR_22, VAR_27, VAR_23, VAR_32);
  VAR_30 = VAR_32->r_rtr_cnt - 1;
  VAR_25 = VAR_32->r_tim_lastsent[VAR_30] + VAR_24;
  if (FUNC_1(VAR_25, VAR_23)) {
   VAR_26 = VAR_25 - VAR_23;
   if (VAR_26 < VAR_22->r_ctl.rc_min_to) {
    VAR_26 = VAR_22->r_ctl.rc_min_to;
   }
  } else {
   VAR_26 = VAR_22->r_ctl.rc_min_to;
  }
 } else {

  if (VAR_22->rc_tlp_in_progress != 0) {



   goto activate_rxt;
  }
  VAR_32 = FUNC_4(&VAR_22->r_ctl.rc_tmap, VAR_14, VAR_19);
  if (VAR_32 == ((void*)0)) {

   goto activate_rxt;
  }
  if (VAR_32->r_flags & VAR_1) {

   VAR_32 = ((void*)0);
   goto activate_rxt;
  }
  VAR_28 = 0;
  VAR_30 = VAR_32->r_rtr_cnt - 1;
  if (FUNC_7(VAR_32->r_tim_lastsent[VAR_30], VAR_22->r_ctl.rc_tlp_rxt_last_time))
   VAR_29 = VAR_32->r_tim_lastsent[VAR_30];
  else
   VAR_29 = VAR_22->r_ctl.rc_tlp_rxt_last_time;
  if (FUNC_8(VAR_29, VAR_23))
      VAR_28 = VAR_23 - VAR_29;
  VAR_31 = 1;
  VAR_27 = FUNC_13(VAR_22, VAR_16);
  VAR_24 = FUNC_10(VAR_21, VAR_22, VAR_32, VAR_27, VAR_23);
  if (VAR_24 > VAR_28)
   VAR_26 = VAR_24 - VAR_28;
  else
   VAR_26 = VAR_22->r_ctl.rc_min_to;
  if (VAR_26 > (((uint32_t)VAR_22->rc_max_rto_sec) * VAR_13)) {




   goto activate_rxt;
  }
  if ((VAR_22->rc_tlp_rtx_out == 1) &&
      (VAR_32->r_start == VAR_22->r_ctl.rc_last_tlp_seq)) {




   VAR_22->rc_tlp_rtx_out = 0;
   goto activate_rxt;
  }
  if (VAR_32->r_start != VAR_22->r_ctl.rc_last_tlp_seq) {




   VAR_22->r_ctl.rc_tlp_seg_send_cnt = 0;
   VAR_22->r_ctl.rc_last_tlp_seq = VAR_32->r_start;
  }
 }
 if (VAR_31 == 0) {
  FUNC_0(VAR_17);
  VAR_22->r_ctl.rc_hpts_flags |= VAR_6;
 } else {
  FUNC_14(VAR_22, 1, VAR_23, VAR_28, VAR_27, VAR_24, VAR_26);
  if (VAR_22->r_ctl.rc_tlp_seg_send_cnt > VAR_15) {




   goto activate_rxt;
  } else {
   FUNC_0(VAR_18);
   VAR_22->r_ctl.rc_hpts_flags |= VAR_8;
  }
 }
 return (VAR_26);
}
