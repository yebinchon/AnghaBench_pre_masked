
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcpcb {int t_delayed_ack; scalar_t__ snd_una; scalar_t__ snd_max; int * t_fb_ptr; int snd_wnd; TYPE_1__* t_inpcb; } ;
struct TYPE_4__ {int rc_tmap; int rc_mtree; int rc_tlp_rxt_last_time; int rc_last_ack; int rc_last_time_decay; int rc_min_to; int rc_prr_sendalot; int rc_rate_sample_method; int rc_high_rwnd; int rc_early_recovery; int rc_tlp_cwnd_reduce; int rc_prop_rate; int rc_prop_reduce; int rc_pkt_delay; int rc_reorder_shift; int rc_tlp_threshold; int rc_reorder_fade; int rc_free; } ;
struct tcp_rack {int use_rack_cheat; int do_detection; TYPE_2__ r_ctl; int rack_per_of_gp; int rack_tlp_threshold_use; int rc_always_pace; int r_enforce_min_pace; int rc_pace_max_segs; int rc_pace_reduce; int rc_allow_data_af_clo; scalar_t__ r_cpu; TYPE_1__* rc_inp; struct tcpcb* rc_tp; } ;
struct rack_sendmap {int r_rtr_cnt; scalar_t__ r_start; scalar_t__ r_end; int r_in_tmap; scalar_t__ r_dupack; scalar_t__ r_rtr_bytes; int * r_tim_lastsent; int r_flags; } ;
struct TYPE_3__ {int inp_flags2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 struct rack_sendmap* FUNC_1 (int ,int *,struct rack_sendmap*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct rack_sendmap*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,struct rack_sendmap*,struct tcp_rack*,struct rack_sendmap*) ;
 int VAR_5 ;
 struct rack_sendmap* FUNC_7 (struct tcp_rack*) ;
 int FUNC_8 (struct tcp_rack*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_9 (struct tcpcb*,struct tcp_rack*) ;
 int VAR_22 ;
 int FUNC_10 (struct tcp_rack*,struct tcpcb*,int ,int ,int ,int ) ;
 int FUNC_11 (struct tcpcb*) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 int FUNC_12 () ;
 int * FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int *) ;
 scalar_t__ VAR_27 ;

__attribute__((used)) static int
FUNC_15(struct tcpcb *VAR_28)
{
 struct tcp_rack *VAR_29 = ((void*)0);
 struct rack_sendmap *VAR_30;

 VAR_28->t_fb_ptr = FUNC_13(VAR_13, VAR_2);
 if (VAR_28->t_fb_ptr == ((void*)0)) {






  return (VAR_0);
 }
 FUNC_4(VAR_28->t_fb_ptr, 0, sizeof(struct tcp_rack));

 VAR_29 = (struct tcp_rack *)VAR_28->t_fb_ptr;
 FUNC_0(&VAR_29->r_ctl.rc_mtree);
 FUNC_2(&VAR_29->r_ctl.rc_free);
 FUNC_2(&VAR_29->r_ctl.rc_tmap);
 VAR_29->rc_tp = VAR_28;
 if (VAR_28->t_inpcb) {
  VAR_29->rc_inp = VAR_28->t_inpcb;
 }
 VAR_28->t_inpcb->inp_flags2 |= VAR_1;

 FUNC_8(VAR_29);
 VAR_29->r_cpu = 0;
 VAR_29->r_ctl.rc_reorder_fade = VAR_19;
 VAR_29->rc_allow_data_af_clo = VAR_8;
 VAR_29->r_ctl.rc_tlp_threshold = VAR_23;
 VAR_29->rc_pace_reduce = VAR_22;
 if (VAR_27)
  VAR_29->use_rack_cheat = 1;
 if (VAR_4)
  VAR_28->t_delayed_ack = 1;
 else
  VAR_28->t_delayed_ack = 0;
 VAR_29->rc_pace_max_segs = VAR_7;
 VAR_29->r_ctl.rc_reorder_shift = VAR_20;
 VAR_29->r_ctl.rc_pkt_delay = VAR_15;
 VAR_29->r_ctl.rc_prop_reduce = VAR_25;
 VAR_29->r_enforce_min_pace = VAR_10;
 VAR_29->r_ctl.rc_prop_rate = VAR_16;
 VAR_29->r_ctl.rc_tlp_cwnd_reduce = VAR_9;
 VAR_29->r_ctl.rc_early_recovery = VAR_6;
 VAR_29->rc_always_pace = VAR_12;
 FUNC_9(VAR_28, VAR_29);
 VAR_29->r_ctl.rc_high_rwnd = VAR_28->snd_wnd;
 VAR_29->r_ctl.rc_rate_sample_method = VAR_17;
 VAR_29->rack_tlp_threshold_use = VAR_24;
 VAR_29->r_ctl.rc_prr_sendalot = VAR_21;
 VAR_29->r_ctl.rc_min_to = VAR_11;
 VAR_29->rack_per_of_gp = VAR_14;
 FUNC_5(&VAR_29->r_ctl.rc_last_ack);
 VAR_29->r_ctl.rc_last_time_decay = VAR_29->r_ctl.rc_last_ack;
 VAR_29->r_ctl.rc_tlp_rxt_last_time = FUNC_12();

 if (VAR_26)
  VAR_29->do_detection = 1;
 else
  VAR_29->do_detection = 0;
 if (VAR_28->snd_una != VAR_28->snd_max) {

  struct rack_sendmap *VAR_31;

  VAR_31 = FUNC_7(VAR_29);
  if (VAR_31 == ((void*)0)) {
   FUNC_14(VAR_13, VAR_28->t_fb_ptr);
   VAR_28->t_fb_ptr = ((void*)0);
   return (VAR_0);
  }
  VAR_31->r_flags = VAR_3;
  VAR_31->r_tim_lastsent[0] = VAR_29->r_ctl.rc_tlp_rxt_last_time;
  VAR_31->r_rtr_cnt = 1;
  VAR_31->r_rtr_bytes = 0;
  VAR_31->r_start = VAR_28->snd_una;
  VAR_31->r_end = VAR_28->snd_max;
  VAR_31->r_dupack = 0;
  VAR_30 = FUNC_1(VAR_18, &VAR_29->r_ctl.rc_mtree, VAR_31);






  FUNC_3(&VAR_29->r_ctl.rc_tmap, VAR_31, VAR_5);
  VAR_31->r_in_tmap = 1;
 }
 FUNC_11(VAR_28);
 FUNC_10(VAR_29, VAR_28, FUNC_12(), 0, 0, 0);
 return (0);
}
