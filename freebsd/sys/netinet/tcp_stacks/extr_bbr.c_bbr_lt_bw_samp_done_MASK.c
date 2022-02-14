
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_2__ {int rc_lt_bw; int rc_pkt_epoch; int rc_lt_epoch_use; int rc_bbr_hptsi_gain; } ;
struct tcp_bbr {int rc_lt_use_bw; TYPE_1__ r_ctl; } ;


 int VAR_0 ;
 int FUNC_0 (struct tcp_bbr*,scalar_t__,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct tcp_bbr*,scalar_t__) ;

__attribute__((used)) static inline void
FUNC_2(struct tcp_bbr *VAR_3, uint64_t VAR_4, uint32_t VAR_5, uint32_t VAR_6)
{
 uint64_t VAR_7;


 if (VAR_3->r_ctl.rc_lt_bw) {

  if (VAR_3->r_ctl.rc_lt_bw > VAR_4)
   VAR_7 = VAR_3->r_ctl.rc_lt_bw - VAR_4;
  else
   VAR_7 = VAR_4 - VAR_3->r_ctl.rc_lt_bw;
  if ((VAR_7 <= VAR_1) ||
      (VAR_7 <= (VAR_3->r_ctl.rc_lt_bw / VAR_2))) {

   uint32_t VAR_8;

   VAR_8 = (uint32_t)VAR_3->r_ctl.rc_lt_bw;
   VAR_3->r_ctl.rc_lt_bw = (VAR_4 + VAR_3->r_ctl.rc_lt_bw) / 2;
   VAR_3->rc_lt_use_bw = 1;
   VAR_3->r_ctl.rc_bbr_hptsi_gain = VAR_0;




   VAR_3->r_ctl.rc_lt_epoch_use = VAR_3->r_ctl.rc_pkt_epoch;




   FUNC_0(VAR_3, VAR_5, 4, (uint32_t)VAR_4, VAR_8, (uint32_t)VAR_7, VAR_6);
   return;
  }
 }
 VAR_3->r_ctl.rc_lt_bw = VAR_4;
 FUNC_1(VAR_3, VAR_5);
 FUNC_0(VAR_3, VAR_5, 5, 0, (uint32_t)VAR_4, 0, VAR_6);
}
