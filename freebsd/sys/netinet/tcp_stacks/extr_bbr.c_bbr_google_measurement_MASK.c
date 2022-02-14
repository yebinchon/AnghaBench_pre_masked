
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_2__ {int rc_del_time; int rc_delivered; int rc_lowest_rtt; int rc_bbr_cur_del_rate; int rc_delrate; } ;
struct tcp_bbr {scalar_t__ rc_in_persist; TYPE_1__ r_ctl; } ;
struct bbr_sendmap {int r_del_time; int r_delivered; int r_first_sent_time; int* r_tim_lastsent; int r_rtr_cnt; scalar_t__ r_app_limited; scalar_t__ r_pacing_delay; scalar_t__ r_flight_at_send; } ;


 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct tcp_bbr*,int,int,int,int,int,int,int,int ,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tcp_bbr*,int) ;

__attribute__((used)) static void
FUNC_4(struct tcp_bbr *VAR_1, struct bbr_sendmap *VAR_2, uint32_t VAR_3, uint32_t VAR_4)
{
 if (VAR_1->rc_in_persist == 0) {


  uint64_t VAR_5, VAR_6;
  uint32_t VAR_7, VAR_8, VAR_9;
  int VAR_10 = 0;

  if (FUNC_0(VAR_1->r_ctl.rc_del_time, VAR_2->r_del_time))
   VAR_5 = (uint64_t)(VAR_1->r_ctl.rc_del_time - VAR_2->r_del_time);
  else
   VAR_5 = 1;





  VAR_9 = (VAR_1->r_ctl.rc_delivered - VAR_2->r_delivered);
  VAR_6 = (uint64_t)VAR_9;
  VAR_6 *= (uint64_t)VAR_0;
  VAR_6 /= VAR_5;
  if (VAR_5 < VAR_1->r_ctl.rc_lowest_rtt) {
   FUNC_1(VAR_1, 99, VAR_4, (uint32_t)VAR_5, VAR_9,
         VAR_5, VAR_1->r_ctl.rc_lowest_rtt, 0, 0, 0, 0);

   VAR_10 = 1;
  }
  VAR_7 = (VAR_6 >> 32) & 0x00000000ffffffff;
  VAR_8 = VAR_6 & 0x00000000ffffffff;




  VAR_1->r_ctl.rc_bbr_cur_del_rate = VAR_6;

  if (VAR_2->r_first_sent_time &&
      FUNC_0(VAR_2->r_tim_lastsent[(VAR_2->r_rtr_cnt -1)],VAR_2->r_first_sent_time)) {
   uint64_t VAR_11, VAR_12;
   VAR_11 = (uint64_t)(VAR_2->r_flight_at_send);
   VAR_11 *= (uint64_t)VAR_0;
   VAR_12 = VAR_2->r_tim_lastsent[(VAR_2->r_rtr_cnt -1)] - VAR_2->r_first_sent_time;
   VAR_12 += VAR_2->r_pacing_delay;
   VAR_11 /= VAR_12;
   if (VAR_11 < VAR_6) {
    FUNC_1(VAR_1, 6, VAR_4,
          VAR_9,
          (uint32_t)VAR_12,
          (VAR_6 >> 32),
          (uint32_t)VAR_6,
          VAR_2->r_first_sent_time, 0, (VAR_11 >> 32),
          (uint32_t)VAR_11);
    VAR_6 = VAR_11;
   }
   if ((VAR_12 > VAR_5) &&
       (VAR_12 < VAR_1->r_ctl.rc_lowest_rtt)) {
    FUNC_1(VAR_1, 99, VAR_4, (uint32_t)VAR_5, VAR_9,
          (uint32_t)VAR_12, VAR_1->r_ctl.rc_lowest_rtt, 0, 0, 0, 0);
    VAR_10 = 1;
   } else
    VAR_10 = 0;
  }
  VAR_1->r_ctl.rc_bbr_cur_del_rate = VAR_6;
  if ((VAR_10 == 0) &&
      ((VAR_2->r_app_limited == 0) ||
       (VAR_6 > FUNC_2(&VAR_1->r_ctl.rc_delrate)))) {
   FUNC_3(VAR_1, VAR_4);
   FUNC_1(VAR_1, 10, VAR_4, (uint32_t)VAR_5, VAR_9,
         0, 0, 0, 0, VAR_1->r_ctl.rc_del_time, VAR_2->r_del_time);
  }
 }
}
