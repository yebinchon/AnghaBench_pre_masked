
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_2__ {int rc_del_time; int rc_delivered; int last_inbound_ts; int bbr_peer_tsratio; int rc_bbr_cur_del_rate; int rc_delrate; } ;
struct tcp_bbr {scalar_t__ rc_in_persist; scalar_t__ rc_ts_cant_be_used; TYPE_1__ r_ctl; scalar_t__ ts_can_raise; scalar_t__ rc_use_ts_limit; scalar_t__ rc_ts_clock_set; scalar_t__ rc_ts_valid; } ;
struct bbr_sendmap {int r_del_time; int r_delivered; int r_del_ack_ts; int r_first_sent_time; int* r_tim_lastsent; int r_rtr_cnt; scalar_t__ r_app_limited; scalar_t__ r_pacing_delay; scalar_t__ r_flight_at_send; scalar_t__ r_ts_valid; } ;


 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct tcp_bbr*,int,int,int,int,int,int,int,int ,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct tcp_bbr*,int) ;

__attribute__((used)) static void
FUNC_5(struct tcp_bbr *VAR_1, struct bbr_sendmap *VAR_2, uint32_t VAR_3, uint32_t VAR_4)
{
 if (VAR_1->rc_in_persist == 0) {


  uint64_t VAR_5, VAR_6, VAR_7, VAR_8;
  uint32_t VAR_9, VAR_10, VAR_11;

  if (FUNC_0(VAR_1->r_ctl.rc_del_time, VAR_2->r_del_time))
   VAR_5 = (uint64_t)(VAR_1->r_ctl.rc_del_time - VAR_2->r_del_time);
  else
   VAR_5 = 1;





  VAR_11 = (VAR_1->r_ctl.rc_delivered - VAR_2->r_delivered);
  VAR_6 = (uint64_t)VAR_11;
  VAR_6 *= (uint64_t)VAR_0;
  VAR_6 /= VAR_5;
  if (VAR_6 == 0) {

   return;
  }
  VAR_9 = (VAR_6 >> 32) & 0x00000000ffffffff;
  VAR_10 = VAR_6 & 0x00000000ffffffff;




  if (VAR_2->r_ts_valid &&
      VAR_1->rc_ts_valid &&
      VAR_1->rc_ts_clock_set &&
      (VAR_1->rc_ts_cant_be_used == 0) &&
      VAR_1->rc_use_ts_limit) {
   VAR_7 = FUNC_3((VAR_1->r_ctl.last_inbound_ts - VAR_2->r_del_ack_ts), 1);
   VAR_7 *= VAR_1->r_ctl.bbr_peer_tsratio;
   if ((VAR_11 == 0) ||
       (VAR_3 < 1000)) {

    FUNC_1(VAR_1, 61, VAR_4,
          VAR_7,
          VAR_1->r_ctl.last_inbound_ts,
          VAR_2->r_del_ack_ts, 0,
          0, 0, 0, VAR_11);
   } else {
    VAR_8 = (uint64_t)VAR_11;
    VAR_8 *= (uint64_t)VAR_0;
    VAR_8 /= VAR_7;
    FUNC_1(VAR_1, 62, VAR_4,
          (VAR_8 >> 32),
          (VAR_8 & 0xffffffff), 0, 0,
          0, 0, VAR_7, VAR_11);
    if ((VAR_1->ts_can_raise) &&
        (VAR_8 > VAR_6)) {
     FUNC_1(VAR_1, 8, VAR_4,
           VAR_11,
           VAR_7,
           (VAR_6 >> 32),
           (VAR_6 & 0x00000000ffffffff),
           0, 0, 0, 0);
     VAR_6 = VAR_8;
    } else if (VAR_8 && (VAR_8 < VAR_6)) {
     FUNC_1(VAR_1, 7, VAR_4,
           VAR_11,
           VAR_7,
           (VAR_6 >> 32),
           (VAR_6 & 0x00000000ffffffff),
           0, 0, 0, 0);
     VAR_6 = VAR_8;
    }
   }
  }
  if (VAR_2->r_first_sent_time &&
      FUNC_0(VAR_2->r_tim_lastsent[(VAR_2->r_rtr_cnt -1)],VAR_2->r_first_sent_time)) {
   uint64_t VAR_12, VAR_13;
   VAR_12 = (uint64_t)(VAR_2->r_flight_at_send);
   VAR_12 *= (uint64_t)VAR_0;
   VAR_13 = VAR_2->r_tim_lastsent[(VAR_2->r_rtr_cnt -1)] - VAR_2->r_first_sent_time;
   VAR_13 += VAR_2->r_pacing_delay;
   VAR_12 /= VAR_13;
   if (VAR_12 < VAR_6) {
    FUNC_1(VAR_1, 6, VAR_4,
          VAR_11,
          (uint32_t)VAR_13,
          (VAR_6 >> 32),
          (uint32_t)VAR_6,
          VAR_2->r_first_sent_time, 0, (VAR_12 >> 32),
          (uint32_t)VAR_12);
    VAR_6 = VAR_12;
   }
  }

  VAR_1->r_ctl.rc_bbr_cur_del_rate = VAR_6;
  if ((VAR_2->r_app_limited == 0) ||
      (VAR_6 > FUNC_2(&VAR_1->r_ctl.rc_delrate))) {
   FUNC_4(VAR_1, VAR_4);
   FUNC_1(VAR_1, 10, VAR_4, (uint32_t)VAR_5, VAR_11,
         0, 0, 0, 0, VAR_1->r_ctl.rc_del_time, VAR_2->r_del_time);
  }
 }
}
