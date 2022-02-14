
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcpcb {int t_delayed_ack; int t_flags; scalar_t__ t_fb_ptr; } ;
struct TYPE_2__ {int rc_prop_rate; int rc_prop_reduce; int rc_tlp_cwnd_reduce; int rc_early_recovery; int rc_prr_sendalot; int rc_min_to; int rc_early_recovery_segs; int rc_reorder_shift; int rc_reorder_fade; int rc_tlp_threshold; int rc_pkt_delay; int rc_rate_sample_method; } ;
struct tcp_rack {int do_detection; int rack_tlp_threshold_use; int rc_always_pace; int rc_pace_reduce; int rc_pace_max_segs; int use_rack_cheat; int r_enforce_min_pace; int rack_per_of_gp; int rc_allow_data_af_clo; TYPE_1__ r_ctl; } ;
struct sockopt {int sopt_name; } ;
struct socket {int dummy; } ;
struct inpcb {int inp_flags; } ;
typedef int optval ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct inpcb*) ;
 int FUNC_1 (struct inpcb*) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct tcpcb* FUNC_3 (struct inpcb*) ;
 int FUNC_4 (struct tcpcb*) ;
 int FUNC_5 (struct tcpcb*,struct tcp_rack*) ;
 int FUNC_6 (struct sockopt*,int*,int,int) ;
 int FUNC_7 (struct socket*,struct sockopt*,struct inpcb*,struct tcpcb*) ;
 int FUNC_8 (struct tcpcb*,int,int,int) ;
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
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;

__attribute__((used)) static int
FUNC_9(struct socket *VAR_29, struct sockopt *VAR_30,
    struct inpcb *VAR_31, struct tcpcb *VAR_32, struct tcp_rack *VAR_33)
{
 int32_t VAR_34 = 0, VAR_35;

 switch (VAR_30->sopt_name) {
 case 135:
 case 136:
 case 130:
 case 146:
 case 140:
 case 148:
 case 138:
 case 139:
 case 134:
 case 141:
 case 145:
 case 132:
 case 133:
 case 129:
 case 137:
 case 128:
 case 131:
 case 143:
 case 142:
 case 144:
 case 151:
 case 150:
 case 147:
 case 149:
  break;
 default:
  return (FUNC_7(VAR_29, VAR_30, VAR_31, VAR_32));
  break;
 }
 FUNC_1(VAR_31);
 VAR_34 = FUNC_6(VAR_30, &VAR_35, sizeof(VAR_35), sizeof(VAR_35));
 if (VAR_34)
  return (VAR_34);
 FUNC_0(VAR_31);
 if (VAR_31->inp_flags & (VAR_3 | VAR_2)) {
  FUNC_1(VAR_31);
  return (VAR_0);
 }
 VAR_32 = FUNC_3(VAR_31);
 VAR_33 = (struct tcp_rack *)VAR_32->t_fb_ptr;
 switch (VAR_30->sopt_name) {
 case 147:
  FUNC_2(VAR_17);
  if (VAR_35 == 0)
   VAR_33->do_detection = 0;
  else
   VAR_33->do_detection = 1;
  break;
 case 135:
  if ((VAR_35 <= 0) || (VAR_35 >= 100)) {
   VAR_34 = VAR_1;
   break;
  }
  FUNC_2(VAR_22);
  VAR_33->r_ctl.rc_prop_rate = VAR_35;
  break;
 case 128:
  if ((VAR_35 < VAR_6) || (VAR_35 > VAR_7)) {
   VAR_34 = VAR_1;
   break;
  }
  FUNC_2(VAR_28);
  VAR_33->rack_tlp_threshold_use = VAR_35;
  break;
 case 136:

  FUNC_2(VAR_21);
  VAR_33->r_ctl.rc_prop_reduce = VAR_35;
  break;
 case 130:

  FUNC_2(VAR_26);
  VAR_33->r_ctl.rc_tlp_cwnd_reduce = VAR_35;
  break;
 case 146:

  FUNC_2(VAR_12);
  VAR_33->r_ctl.rc_early_recovery = VAR_35;
  break;
 case 140:

  FUNC_2(VAR_18);
  if (VAR_35 > 0)
   VAR_33->rc_always_pace = 1;
  else
   VAR_33->rc_always_pace = 0;
  break;
 case 138:

  FUNC_2(VAR_19);
  if (VAR_35)

   VAR_33->rc_pace_reduce = VAR_35;
  else
   VAR_34 = VAR_1;
  break;
 case 139:

  FUNC_2(VAR_14);
  VAR_33->rc_pace_max_segs = VAR_35;
  FUNC_5(VAR_32, VAR_33);
  break;
 case 134:

  FUNC_2(VAR_23);
  VAR_33->r_ctl.rc_prr_sendalot = VAR_35;
  break;
 case 141:

  FUNC_2(VAR_16);
  VAR_33->r_ctl.rc_min_to = VAR_35;
  break;
 case 145:

  FUNC_2(VAR_13);
  VAR_33->r_ctl.rc_early_recovery_segs = VAR_35;
  break;
 case 132:

  FUNC_2(VAR_25);
  if ((VAR_35 > 0) && (VAR_35 < 31))
   VAR_33->r_ctl.rc_reorder_shift = VAR_35;
  else
   VAR_34 = VAR_1;
  break;
 case 133:

  FUNC_2(VAR_24);
  VAR_33->r_ctl.rc_reorder_fade = VAR_35;
  break;
 case 129:

  FUNC_2(VAR_27);
  if (VAR_35)
   VAR_33->r_ctl.rc_tlp_threshold = VAR_35;
  else
   VAR_34 = VAR_1;
  break;
 case 150:
  FUNC_2(VAR_11);
  if (VAR_35)
   VAR_33->use_rack_cheat = 1;
  else
   VAR_33->use_rack_cheat = 0;
  break;
 case 137:

  FUNC_2(VAR_20);
  VAR_33->r_ctl.rc_pkt_delay = VAR_35;
  break;
 case 131:

  VAR_34 = VAR_1;
  break;
 case 143:
  VAR_34 = VAR_1;
  break;
 case 148:
  if (VAR_35 == 0)
   VAR_32->t_delayed_ack = 0;
  else
   VAR_32->t_delayed_ack = 1;
  if (VAR_32->t_flags & VAR_5) {
   VAR_32->t_flags &= ~VAR_5;
   VAR_32->t_flags |= VAR_4;
   FUNC_4(VAR_32);
  }
  break;
 case 142:
  FUNC_2(VAR_15);
  if (VAR_35 > 3)
   VAR_33->r_enforce_min_pace = 3;
  else
   VAR_33->r_enforce_min_pace = VAR_35;
  break;
 case 144:
  if ((VAR_35 >= 0) &&
      (VAR_35 <= 256))
   VAR_33->rack_per_of_gp = VAR_35;
  else
   VAR_34 = VAR_1;

  break;
 case 151:
  if ((VAR_35 != VAR_9) &&
      (VAR_35 != VAR_10) &&
      (VAR_35 != VAR_8))
   VAR_34 = VAR_1;
  else
   VAR_33->r_ctl.rc_rate_sample_method = VAR_35;
  break;
 case 149:
  if (VAR_35)
   VAR_33->rc_allow_data_af_clo = 1;
  else
   VAR_33->rc_allow_data_af_clo = 0;
  break;
 default:
  return (FUNC_7(VAR_29, VAR_30, VAR_31, VAR_32));
  break;
 }



 FUNC_1(VAR_31);
 return (VAR_34);
}
