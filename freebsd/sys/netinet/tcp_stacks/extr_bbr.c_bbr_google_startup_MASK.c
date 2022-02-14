
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_2__ {int rc_bbr_lastbtlbw; scalar_t__ rc_bbr_last_startup_epoch; scalar_t__ rc_pkt_epoch; int rc_lost_at_startup; } ;
struct tcp_bbr {TYPE_1__ r_ctl; } ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct tcp_bbr*) ;
 int FUNC_1 (struct tcp_bbr*,int ,scalar_t__,int ,scalar_t__,int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int32_t
FUNC_2(struct tcp_bbr *VAR_2, uint32_t VAR_3, int32_t VAR_4)
{
 uint64_t VAR_5, VAR_6;
 if (VAR_4 == 0) {



  return (0);
 }
 VAR_5 = FUNC_0(VAR_2);
 VAR_6 = ((VAR_2->r_ctl.rc_bbr_lastbtlbw *
   (uint64_t)VAR_1) / (uint64_t)100) + VAR_2->r_ctl.rc_bbr_lastbtlbw;
 if (VAR_5 >= VAR_6) {
  VAR_2->r_ctl.rc_bbr_last_startup_epoch = VAR_2->r_ctl.rc_pkt_epoch;
  FUNC_1(VAR_2, VAR_3, VAR_2->r_ctl.rc_bbr_last_startup_epoch,
          VAR_2->r_ctl.rc_lost_at_startup, VAR_1, 3);
  VAR_2->r_ctl.rc_bbr_lastbtlbw = VAR_5;
 }
 if ((VAR_2->r_ctl.rc_pkt_epoch - VAR_2->r_ctl.rc_bbr_last_startup_epoch) >= VAR_0)
  return (1);
 FUNC_1(VAR_2, VAR_3, VAR_2->r_ctl.rc_bbr_last_startup_epoch,
         VAR_2->r_ctl.rc_lost_at_startup, VAR_1, 8);
 return(0);
}
