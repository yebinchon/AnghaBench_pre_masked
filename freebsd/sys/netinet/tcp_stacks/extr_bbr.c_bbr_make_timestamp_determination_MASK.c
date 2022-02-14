
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int cur_rtt_send_time; int bbr_ts_check_our_cts; int last_inbound_ts; int bbr_ts_check_tstmp; int bbr_peer_tsratio; } ;
struct tcp_bbr {int rc_ts_clock_set; int rc_ts_cant_be_used; TYPE_1__ r_ctl; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct tcp_bbr*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_1(struct tcp_bbr *VAR_3)
{
 uint64_t VAR_4, VAR_5, VAR_6;

 VAR_4 = VAR_3->r_ctl.cur_rtt_send_time - VAR_3->r_ctl.bbr_ts_check_our_cts;
 if (VAR_4 < VAR_2) {






  return;
 }
 VAR_5 = VAR_3->r_ctl.last_inbound_ts - VAR_3->r_ctl.bbr_ts_check_tstmp;
 if (VAR_5 < VAR_1) {
  return;
 }

 if (VAR_5 > VAR_4) {





  if (VAR_5 < (VAR_4 + ((VAR_4 * (uint64_t)1000)/ (uint64_t)VAR_0))) {

   VAR_3->rc_ts_clock_set = 1;
   VAR_3->r_ctl.bbr_peer_tsratio = 1;
  } else {
   VAR_3->rc_ts_cant_be_used = 1;
   VAR_3->rc_ts_clock_set = 1;
  }
  return;
 }

 VAR_3->rc_ts_clock_set = 1;

 VAR_6 = (VAR_5 * 1000) / (uint64_t)VAR_0;
 if ((VAR_5 + VAR_6) >= VAR_4) {

  VAR_3->r_ctl.bbr_peer_tsratio = 1;
  FUNC_0(VAR_3, VAR_5, VAR_4);
  return;
 }

 VAR_6 = (VAR_5 * 1000 * 10) / (uint64_t)VAR_0;
 if (((VAR_5 * 10) + VAR_6) >= VAR_4) {
  VAR_3->r_ctl.bbr_peer_tsratio = 10;
  FUNC_0(VAR_3, VAR_5, VAR_4);
  return;
 }

 VAR_6 = (VAR_5 * 1000 * 100) / (uint64_t)VAR_0;
 if (((VAR_5 * 100) + VAR_6) >= VAR_4) {
  VAR_3->r_ctl.bbr_peer_tsratio = 100;
  FUNC_0(VAR_3, VAR_5, VAR_4);
  return;
 }

 VAR_6 = (VAR_5 * 1000 * 1000) / (uint64_t)VAR_0;
 if (((VAR_5 * 1000) + VAR_6) >= VAR_4) {
  VAR_3->r_ctl.bbr_peer_tsratio = 1000;
  FUNC_0(VAR_3, VAR_5, VAR_4);
  return;
 }

 VAR_6 = (VAR_5 * 1000 * 10000) / (uint64_t)VAR_0;
 if (((VAR_5 * 10000) + VAR_6) >= VAR_4) {
  VAR_3->r_ctl.bbr_peer_tsratio = 10000;
  return;
 }

 VAR_3->rc_ts_cant_be_used = 1;
 VAR_3->r_ctl.bbr_peer_tsratio = 0;
 FUNC_0(VAR_3, VAR_5, VAR_4);
}
