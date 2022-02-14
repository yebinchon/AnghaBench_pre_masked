
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int rc_reorder_ts; int rc_reorder_fade; int rc_pkt_delay; int rc_reorder_shift; } ;
struct tcp_bbr {scalar_t__ rc_max_rto_sec; TYPE_2__* rc_tp; TYPE_1__ r_ctl; } ;
struct bbr_sendmap {int dummy; } ;
typedef int int32_t ;
struct TYPE_4__ {scalar_t__ t_srtt; int t_rxtcur; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct tcp_bbr*,int,int,int,int,struct bbr_sendmap*,int ) ;

__attribute__((used)) static uint32_t
FUNC_3(struct tcp_bbr *VAR_3, uint32_t VAR_4, uint32_t VAR_5, struct bbr_sendmap *VAR_6)
{
 int32_t VAR_7;
 uint32_t VAR_8, VAR_9;

 if (VAR_4 == 0)
  VAR_4 = 1;
 if (VAR_3->r_ctl.rc_reorder_ts) {
  if (VAR_3->r_ctl.rc_reorder_fade) {
   if (FUNC_0(VAR_5, VAR_3->r_ctl.rc_reorder_ts)) {
    VAR_7 = VAR_5 - VAR_3->r_ctl.rc_reorder_ts;
    if (VAR_7 == 0) {




     VAR_7 = 1;
    }
   } else {

    VAR_7 = 0;
   }
   if (VAR_7 > VAR_3->r_ctl.rc_reorder_fade) {

    VAR_3->r_ctl.rc_reorder_ts = 0;
    VAR_7 = 0;
   }
  } else {

   VAR_7 = 1;
  }
 } else {
  VAR_7 = 0;
 }
 VAR_8 = VAR_4 + VAR_3->r_ctl.rc_pkt_delay;
 if (VAR_7) {

  if (VAR_3->r_ctl.rc_reorder_shift)
   VAR_8 += (VAR_4 >> VAR_3->r_ctl.rc_reorder_shift);
  else
   VAR_8 += (VAR_4 >> 2);
 } else {
  VAR_8 += 1000;
 }

 if ((VAR_3->rc_tp)->t_srtt == 0)
  VAR_9 = VAR_0;
 else
  VAR_9 = FUNC_1(VAR_3->rc_tp->t_rxtcur);
 if (VAR_8 > VAR_9) {
  VAR_8 = VAR_9;
 }

 if (VAR_8 > (((uint32_t)VAR_3->rc_max_rto_sec) * VAR_2)) {
  VAR_8 = (((uint32_t)VAR_3->rc_max_rto_sec) * VAR_2);
 }
 FUNC_2(VAR_3, VAR_5, VAR_8, VAR_7, VAR_4, VAR_6, VAR_1);
 return (VAR_8);
}
