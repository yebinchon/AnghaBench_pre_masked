
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int rc_num_small_maps_alloced; int rc_pace_max_segs; } ;
struct tcp_bbr {TYPE_2__ r_ctl; scalar_t__ rc_last_options; TYPE_1__* rc_tp; } ;
struct bbr_sendmap {int r_start; int r_end; int r_rtr_cnt; int r_is_smallmap; int * r_tim_lastsent; int r_bbr_state; int r_flight_at_send; int r_first_sent_time; int r_app_limited; int r_del_time; int r_del_ack_ts; int r_ts_valid; int r_delivered; int r_is_drain; int r_is_gain; scalar_t__ r_rtr_bytes; int r_dupack; int r_flags; } ;
struct TYPE_3__ {scalar_t__ t_maxseg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static __inline void
FUNC_1(struct tcp_bbr *VAR_2, struct bbr_sendmap *VAR_3, struct bbr_sendmap *VAR_4, uint32_t VAR_5)
{
 int VAR_6;

 VAR_3->r_start = VAR_5;
 VAR_3->r_end = VAR_4->r_end;
 VAR_3->r_rtr_cnt = VAR_4->r_rtr_cnt;
 VAR_3->r_flags = VAR_4->r_flags;

 VAR_3->r_flags &= ~VAR_1;

 VAR_4->r_flags &= ~VAR_0;
 VAR_3->r_dupack = VAR_4->r_dupack;
 VAR_3->r_rtr_bytes = 0;
 VAR_3->r_is_gain = VAR_4->r_is_gain;
 VAR_3->r_is_drain = VAR_4->r_is_drain;
 VAR_3->r_delivered = VAR_4->r_delivered;
 VAR_3->r_ts_valid = VAR_4->r_ts_valid;
 VAR_3->r_del_ack_ts = VAR_4->r_del_ack_ts;
 VAR_3->r_del_time = VAR_4->r_del_time;
 VAR_3->r_app_limited = VAR_4->r_app_limited;
 VAR_3->r_first_sent_time = VAR_4->r_first_sent_time;
 VAR_3->r_flight_at_send = VAR_4->r_flight_at_send;

 VAR_3->r_bbr_state = VAR_4->r_bbr_state;
 for (VAR_6 = 0; VAR_6 < VAR_3->r_rtr_cnt; VAR_6++) {
  VAR_3->r_tim_lastsent[VAR_6] = VAR_4->r_tim_lastsent[VAR_6];
 }
 VAR_4->r_end = VAR_3->r_start;
 VAR_6 = FUNC_0((VAR_2->rc_tp->t_maxseg - VAR_2->rc_last_options), VAR_2->r_ctl.rc_pace_max_segs);
 VAR_6 /= 8;

 if ((VAR_4->r_is_smallmap == 0) &&
     ((VAR_4->r_end - VAR_4->r_start) <= VAR_6)) {
  VAR_2->r_ctl.rc_num_small_maps_alloced++;
  VAR_4->r_is_smallmap = 1;
 }

 if ((VAR_3->r_end - VAR_3->r_start) <= VAR_6) {
  VAR_2->r_ctl.rc_num_small_maps_alloced++;
  VAR_3->r_is_smallmap = 1;
 }
}
