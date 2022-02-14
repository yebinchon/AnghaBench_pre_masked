
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct tcpcb {scalar_t__ t_state; int t_flags; int snd_una; int snd_max; scalar_t__ t_rxtcur; int t_srtt; TYPE_2__* t_inpcb; } ;
struct TYPE_6__ {scalar_t__ rc_tlp_rxt_last_time; scalar_t__ rc_min_to; scalar_t__ rc_prr_sndcnt; scalar_t__ rc_tlp_rtx_out; scalar_t__ rc_last_tlp_seq; scalar_t__ rc_tlp_seg_send_cnt; scalar_t__ rc_tlp_send_cnt; int rc_hpts_flags; int rc_tmap; } ;
struct tcp_rack {scalar_t__ use_rack_cheat; scalar_t__ rc_tlp_in_progress; TYPE_3__ r_ctl; scalar_t__ sack_attack_disable; scalar_t__ rc_in_persist; scalar_t__ t_timers_stopped; } ;
struct rack_sendmap {int r_rtr_cnt; scalar_t__* r_tim_lastsent; int r_flags; scalar_t__ r_start; } ;
typedef size_t int32_t ;
struct TYPE_5__ {TYPE_1__* inp_socket; } ;
struct TYPE_4__ {int so_snd; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int,int) ;
 struct rack_sendmap* FUNC_3 (int *) ;
 struct rack_sendmap* FUNC_4 (int *,int ,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (struct tcpcb*) ;
 int VAR_12 ;
 scalar_t__ FUNC_9 (struct tcp_rack*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (struct tcpcb*,struct tcp_rack*,struct rack_sendmap*,scalar_t__) ;
 struct rack_sendmap* FUNC_11 (struct tcp_rack*) ;
 scalar_t__ FUNC_12 (struct tcpcb*,struct tcp_rack*) ;
 scalar_t__ FUNC_13 (struct tcpcb*,struct tcp_rack*) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_14 (int *) ;

__attribute__((used)) static uint32_t
FUNC_15(struct tcpcb *VAR_15, struct tcp_rack *VAR_16, uint32_t VAR_17, int VAR_18)
{






 uint32_t VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
 uint32_t VAR_25;
 int32_t VAR_26;
 int32_t VAR_27 = 0;
 struct rack_sendmap *VAR_28;

 if (VAR_16->t_timers_stopped) {

  return (0);
 }
 if (VAR_16->rc_in_persist) {

  return (FUNC_12(VAR_15, VAR_16));
 }
 if ((VAR_15->t_state < VAR_7) ||
     ((VAR_15->t_flags & VAR_10) == 0))
  goto activate_rxt;
 VAR_28 = FUNC_3(&VAR_16->r_ctl.rc_tmap);
 if ((VAR_28 == ((void*)0)) || VAR_18) {

activate_rxt:
  VAR_23 = 0;
  VAR_28 = FUNC_3(&VAR_16->r_ctl.rc_tmap);
  if (VAR_28) {
   VAR_26 = VAR_28->r_rtr_cnt - 1;
   if (FUNC_6(VAR_28->r_tim_lastsent[VAR_26], VAR_16->r_ctl.rc_tlp_rxt_last_time))
    VAR_24 = VAR_28->r_tim_lastsent[VAR_26];
   else
    VAR_24 = VAR_16->r_ctl.rc_tlp_rxt_last_time;
   if (FUNC_7(VAR_24, VAR_17))
       VAR_23 = VAR_17 - VAR_24;
  }
  if (FUNC_2(VAR_15->snd_una, VAR_15->snd_max) || FUNC_14(&(VAR_15->t_inpcb->inp_socket->so_snd))) {
   VAR_16->r_ctl.rc_hpts_flags |= VAR_1;
   VAR_21 = FUNC_5(VAR_15->t_rxtcur);
   if (VAR_21 > VAR_23)
    VAR_21 -= VAR_23;
   else
    VAR_21 = VAR_16->r_ctl.rc_min_to;
   if (VAR_21 == 0)
    VAR_21 = 1;
   return (VAR_21);
  }
  return (0);
 }
 if (VAR_28->r_flags & VAR_3) {
  VAR_28 = FUNC_11(VAR_16);
  if (VAR_28 == ((void*)0)) {

   goto activate_rxt;
  }
 }
 if (VAR_16->sack_attack_disable) {







  goto activate_rxt;
 }

 if (VAR_28->r_flags & VAR_6) {
  if ((VAR_15->t_flags & VAR_11) &&
      ((VAR_15->snd_max - VAR_15->snd_una) == 1) &&
      (VAR_28->r_flags & VAR_4)) {




   goto activate_rxt;
  }
  if ((VAR_16->use_rack_cheat == 0) &&
      (FUNC_0(VAR_15->t_flags)) &&
       (VAR_16->r_ctl.rc_prr_sndcnt < FUNC_8(VAR_15))) {
   goto activate_tlp;
  }
  VAR_22 = FUNC_13(VAR_15, VAR_16);
  VAR_19 = FUNC_9(VAR_16, VAR_22, VAR_17);
  VAR_26 = VAR_28->r_rtr_cnt - 1;
  VAR_20 = VAR_28->r_tim_lastsent[VAR_26] + VAR_19;
  if (FUNC_1(VAR_20, VAR_17)) {
   VAR_21 = VAR_20 - VAR_17;
   if (VAR_21 < VAR_16->r_ctl.rc_min_to) {
    VAR_21 = VAR_16->r_ctl.rc_min_to;
   }
  } else {
   VAR_21 = VAR_16->r_ctl.rc_min_to;
  }
 } else {

activate_tlp:
  if ((VAR_16->rc_tlp_in_progress != 0) ||
      (VAR_16->r_ctl.rc_tlp_rtx_out != 0)) {




   goto activate_rxt;
  }
  VAR_28 = FUNC_4(&VAR_16->r_ctl.rc_tmap, VAR_13, VAR_12);
  if (VAR_28 == ((void*)0)) {

   goto activate_rxt;
  }
  if (VAR_28->r_flags & VAR_4) {

   VAR_28 = ((void*)0);
   goto activate_rxt;
  }
  VAR_26 = VAR_28->r_rtr_cnt - 1;
  VAR_23 = 0;
  if (FUNC_6(VAR_28->r_tim_lastsent[VAR_26], VAR_16->r_ctl.rc_tlp_rxt_last_time))
   VAR_24 = VAR_28->r_tim_lastsent[VAR_26];
  else
   VAR_24 = VAR_16->r_ctl.rc_tlp_rxt_last_time;
  if (FUNC_7(VAR_24, VAR_17))
      VAR_23 = VAR_17 - VAR_24;
  VAR_27 = 1;
  if (VAR_15->t_srtt) {
   VAR_25 = (VAR_15->t_srtt >> VAR_9);
   VAR_22 = FUNC_5(VAR_25);
  } else
   VAR_22 = VAR_5;
  VAR_19 = FUNC_10(VAR_15, VAR_16, VAR_28, VAR_22);
  if (VAR_19 > VAR_23)
   VAR_21 = VAR_19 - VAR_23;
  else
   VAR_21 = VAR_16->r_ctl.rc_min_to;
  if (VAR_21 > VAR_8) {




   goto activate_rxt;
  }
  if (VAR_28->r_start != VAR_16->r_ctl.rc_last_tlp_seq) {




   VAR_16->r_ctl.rc_tlp_seg_send_cnt = 0;
   VAR_16->r_ctl.rc_last_tlp_seq = VAR_28->r_start;
  }
 }
 if (VAR_27 == 0) {
  VAR_16->r_ctl.rc_hpts_flags |= VAR_0;
 } else {
  if ((VAR_16->r_ctl.rc_tlp_send_cnt > VAR_14) ||
      (VAR_16->r_ctl.rc_tlp_seg_send_cnt > VAR_14)) {




   goto activate_rxt;
  } else {
   VAR_16->r_ctl.rc_hpts_flags |= VAR_2;
  }
 }
 if (VAR_21 == 0)
  VAR_21 = 1;
 return (VAR_21);
}
