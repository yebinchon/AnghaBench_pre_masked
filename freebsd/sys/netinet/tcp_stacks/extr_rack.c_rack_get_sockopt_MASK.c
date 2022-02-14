
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcpcb {scalar_t__ t_delayed_ack; } ;
struct TYPE_2__ {scalar_t__ rc_prop_rate; scalar_t__ rc_prop_reduce; scalar_t__ rc_tlp_cwnd_reduce; scalar_t__ rc_early_recovery; scalar_t__ rc_prr_sendalot; scalar_t__ rc_min_to; scalar_t__ rc_early_recovery_segs; scalar_t__ rc_reorder_shift; scalar_t__ rc_reorder_fade; scalar_t__ rc_tlp_threshold; scalar_t__ rc_pkt_delay; scalar_t__ rc_rate_sample_method; } ;
struct tcp_rack {scalar_t__ do_detection; scalar_t__ rc_pace_reduce; scalar_t__ rc_pace_max_segs; scalar_t__ rc_always_pace; scalar_t__ use_rack_cheat; scalar_t__ rack_tlp_threshold_use; scalar_t__ r_enforce_min_pace; scalar_t__ rack_per_of_gp; scalar_t__ rc_allow_data_af_clo; TYPE_1__ r_ctl; } ;
struct sockopt {int sopt_name; } ;
struct socket {int dummy; } ;
struct inpcb {int dummy; } ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct inpcb*) ;
 scalar_t__ FUNC_1 (struct sockopt*,scalar_t__*,int) ;
 int FUNC_2 (struct socket*,struct sockopt*,struct inpcb*,struct tcpcb*) ;

__attribute__((used)) static int
FUNC_3(struct socket *VAR_1, struct sockopt *VAR_2,
    struct inpcb *VAR_3, struct tcpcb *VAR_4, struct tcp_rack *VAR_5)
{
 int32_t VAR_6, VAR_7;







 VAR_6 = 0;
 switch (VAR_2->sopt_name) {
 case 147:
  VAR_7 = VAR_5->do_detection;
  break;

 case 135:
  VAR_7 = VAR_5->r_ctl.rc_prop_rate;
  break;
 case 136:

  VAR_7 = VAR_5->r_ctl.rc_prop_reduce;
  break;
 case 130:

  VAR_7 = VAR_5->r_ctl.rc_tlp_cwnd_reduce;
  break;
 case 146:

  VAR_7 = VAR_5->r_ctl.rc_early_recovery;
  break;
 case 138:

  VAR_7 = VAR_5->rc_pace_reduce;
  break;
 case 139:

  VAR_7 = VAR_5->rc_pace_max_segs;
  break;
 case 140:

  VAR_7 = VAR_5->rc_always_pace;
  break;
 case 134:

  VAR_7 = VAR_5->r_ctl.rc_prr_sendalot;
  break;
 case 141:

  VAR_7 = VAR_5->r_ctl.rc_min_to;
  break;
 case 145:

  VAR_7 = VAR_5->r_ctl.rc_early_recovery_segs;
  break;
 case 132:

  VAR_7 = VAR_5->r_ctl.rc_reorder_shift;
  break;
 case 133:

  VAR_7 = VAR_5->r_ctl.rc_reorder_fade;
  break;
 case 150:

  VAR_7 = VAR_5->use_rack_cheat;
  break;
 case 129:

  VAR_7 = VAR_5->r_ctl.rc_tlp_threshold;
  break;
 case 137:

  VAR_7 = VAR_5->r_ctl.rc_pkt_delay;
  break;
 case 128:
  VAR_7 = VAR_5->rack_tlp_threshold_use;
  break;
 case 131:

  VAR_6 = VAR_0;
  break;
 case 143:
  VAR_6 = VAR_0;
  break;
 case 142:
  VAR_7 = VAR_5->r_enforce_min_pace;
  break;
 case 144:
  VAR_7 = VAR_5->rack_per_of_gp;
  break;
 case 151:
  VAR_7 = VAR_5->r_ctl.rc_rate_sample_method;
  break;
 case 148:
  VAR_7 = VAR_4->t_delayed_ack;
  break;
 case 149:
  VAR_7 = VAR_5->rc_allow_data_af_clo;
  break;
 default:
  return (FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4));
  break;
 }
 FUNC_0(VAR_3);
 if (VAR_6 == 0) {
  VAR_6 = FUNC_1(VAR_2, &VAR_7, sizeof VAR_7);
 }
 return (VAR_6);
}
