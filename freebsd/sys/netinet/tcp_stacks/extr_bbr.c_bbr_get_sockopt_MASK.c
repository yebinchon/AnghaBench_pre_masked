
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcpcb {int t_delayed_ack; } ;
struct TYPE_3__ {int cur_time_limit; } ;
struct TYPE_4__ {int bbr_hptsi_per_second; int bbr_hptsi_segments_delay_tar; int bbr_hptsi_segments_max; int bbr_hptsi_bytes_min; int bbr_cross_over; int rc_startup_pg; int rc_drain_pg; int rc_probertt_int; int bbr_rttprobe_gain_val; int rc_min_rto_ms; int rc_pace_max_segs; int rc_min_to; int rc_reorder_shift; int rc_reorder_fade; int bbr_hptsi_segments_floor; int bbr_utter_max; int rc_pkt_delay; int rc_incr_tmrs; int rc_inc_enet_oh; int rc_inc_ip_oh; int rc_inc_tcp_oh; TYPE_1__ rc_rttprop; } ;
struct tcp_bbr {int no_pacing_until; int rc_use_google; int rc_use_ts_limit; int rc_init_win; int rc_loss_exit; int rc_max_rto_sec; int bbr_use_rack_cheat; int bbr_init_win_cheat; int rc_use_idle_restart; int rc_tlp_threshold; int rc_resends_use_tso; int rc_allow_data_af_clo; int bbr_hdw_pace_ena; int r_use_policer; int ts_can_raise; TYPE_2__ r_ctl; } ;
struct sockopt {int sopt_name; } ;
struct socket {int dummy; } ;
struct inpcb {int dummy; } ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct inpcb*) ;
 int VAR_4 ;
 int FUNC_1 (struct sockopt*,int*,int) ;
 int FUNC_2 (struct socket*,struct sockopt*,struct inpcb*,struct tcpcb*) ;

__attribute__((used)) static int
FUNC_3(struct socket *VAR_5, struct sockopt *VAR_6,
    struct inpcb *VAR_7, struct tcpcb *VAR_8, struct tcp_bbr *VAR_9)
{
 int32_t VAR_10, VAR_11;







 switch (VAR_6->sopt_name) {
 case 152:
  VAR_11 = VAR_9->r_ctl.bbr_hptsi_per_second;
  break;
 case 154:
  VAR_11 = VAR_9->r_ctl.bbr_hptsi_segments_delay_tar;
  break;
 case 151:
  VAR_11 = VAR_9->r_ctl.bbr_hptsi_segments_max;
  break;
 case 156:
  VAR_11 = VAR_9->no_pacing_until;
  break;
 case 150:
  VAR_11 = VAR_9->r_ctl.bbr_hptsi_bytes_min;
  break;
 case 155:
  VAR_11 = VAR_9->r_ctl.bbr_cross_over;
  break;
 case 164:
  VAR_11 = VAR_9->rc_use_google;
  break;
 case 140:
  VAR_11 = VAR_9->rc_use_ts_limit;
  break;
 case 159:
  VAR_11 = VAR_9->rc_init_win;
  break;
 case 142:
  VAR_11 = VAR_9->r_ctl.rc_startup_pg;
  break;
 case 163:
  VAR_11 = VAR_9->r_ctl.rc_drain_pg;
  break;
 case 147:
  VAR_11 = VAR_9->r_ctl.rc_probertt_int;
  break;
 case 146:
  VAR_11 = (VAR_9->r_ctl.rc_rttprop.cur_time_limit / VAR_4);
  break;
 case 148:
  VAR_11 = VAR_9->r_ctl.bbr_rttprobe_gain_val;
  break;
 case 143:
  VAR_11 = VAR_9->rc_loss_exit;
  break;
 case 138:
  VAR_10 = VAR_3;
  break;
 case 157:
  VAR_11 = VAR_9->r_ctl.rc_min_rto_ms;
  break;
 case 158:
  VAR_11 = VAR_9->rc_max_rto_sec;
  break;
 case 132:

  VAR_11 = VAR_9->r_ctl.rc_pace_max_segs;
  break;
 case 133:

  VAR_11 = VAR_9->r_ctl.rc_min_to;
  break;
 case 129:

  VAR_11 = VAR_9->r_ctl.rc_reorder_shift;
  break;
 case 130:

  VAR_11 = VAR_9->r_ctl.rc_reorder_fade;
  break;
 case 137:

  VAR_11 = VAR_9->bbr_use_rack_cheat;
  break;
 case 161:
  VAR_11 = VAR_9->r_ctl.bbr_hptsi_segments_floor;
  break;
 case 136:
  VAR_11 = VAR_9->r_ctl.bbr_utter_max;
  break;
 case 144:

  VAR_11 = VAR_9->bbr_init_win_cheat;
  break;
 case 162:
  VAR_11 = VAR_9->rc_use_idle_restart;
  break;
 case 128:

  VAR_11 = VAR_9->rc_tlp_threshold;
  break;
 case 131:

  VAR_11 = VAR_9->r_ctl.rc_pkt_delay;
  break;
 case 145:
  VAR_11 = VAR_9->rc_resends_use_tso;
  break;
 case 135:
  VAR_11 = VAR_9->rc_allow_data_af_clo;
  break;
 case 134:
  VAR_11 = VAR_8->t_delayed_ack;
  break;
 case 160:
  VAR_11 = VAR_9->bbr_hdw_pace_ena;
  break;
 case 149:
  VAR_11 = VAR_9->r_use_policer;
  break;
 case 139:
  VAR_11 = VAR_9->ts_can_raise;
  break;
 case 141:
  VAR_11 = VAR_9->r_ctl.rc_incr_tmrs;
  break;
 case 153:
  VAR_11 = 0;
  if (VAR_9->r_ctl.rc_inc_tcp_oh)
   VAR_11 |= VAR_2;
  if (VAR_9->r_ctl.rc_inc_ip_oh)
   VAR_11 |= VAR_1;
  if (VAR_9->r_ctl.rc_inc_enet_oh)
   VAR_11 |= VAR_0;
  break;
 default:
  return (FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8));
  break;
 }
 FUNC_0(VAR_7);
 VAR_10 = FUNC_1(VAR_6, &VAR_11, sizeof VAR_11);
 return (VAR_10);
}
