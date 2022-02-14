
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int rc_reorder_ts; int rc_reorder_fade; int rc_pkt_delay; int rc_reorder_shift; } ;
struct tcp_rack {TYPE_2__* rc_tp; TYPE_1__ r_ctl; } ;
typedef int int32_t ;
struct TYPE_4__ {int t_rxtcur; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static uint32_t
FUNC_2(struct tcp_rack *VAR_1, uint32_t VAR_2, uint32_t VAR_3)
{
 int32_t VAR_4;
 uint32_t VAR_5;
 if (VAR_2 == 0)
  VAR_2 = 1;
 if (VAR_1->r_ctl.rc_reorder_ts) {
  if (VAR_1->r_ctl.rc_reorder_fade) {
   if (FUNC_0(VAR_3, VAR_1->r_ctl.rc_reorder_ts)) {
    VAR_4 = VAR_3 - VAR_1->r_ctl.rc_reorder_ts;
    if (VAR_4 == 0) {




     VAR_4 = 1;
    }
   } else {

    VAR_4 = 0;
   }
   if (VAR_4 > VAR_1->r_ctl.rc_reorder_fade) {

    VAR_1->r_ctl.rc_reorder_ts = 0;
    VAR_4 = 0;
   }
  } else {

   VAR_4 = 1;
  }
 } else {
  VAR_4 = 0;
 }
 VAR_5 = VAR_2 + VAR_1->r_ctl.rc_pkt_delay;
 if (VAR_4) {

  if (VAR_1->r_ctl.rc_reorder_shift)
   VAR_5 += (VAR_2 >> VAR_1->r_ctl.rc_reorder_shift);
  else
   VAR_5 += (VAR_2 >> 2);
 } else {
  VAR_5 += 1;
 }

 if (VAR_5 > FUNC_1(VAR_1->rc_tp->t_rxtcur)) {
  VAR_5 = FUNC_1(VAR_1->rc_tp->t_rxtcur);
 }

 if (VAR_5 > VAR_0) {
  VAR_5 = VAR_0;
 }
 return (VAR_5);
}
