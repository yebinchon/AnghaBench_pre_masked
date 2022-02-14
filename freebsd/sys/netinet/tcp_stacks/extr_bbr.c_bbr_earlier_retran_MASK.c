
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct tcpcb {int dummy; } ;
struct TYPE_2__ {int rc_lost; int rc_lt_lost; int rc_lost_bytes; int rc_reorder_ts; } ;
struct tcp_bbr {TYPE_1__ r_ctl; scalar_t__ rc_tlp_rtx_out; } ;
struct bbr_sendmap {int r_flags; scalar_t__ r_start; scalar_t__ r_end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_3(struct tcpcb *VAR_8, struct tcp_bbr *VAR_9, struct bbr_sendmap *VAR_10,
     uint32_t VAR_11, uint32_t VAR_12, int VAR_13)
{





 if (VAR_10->r_flags & VAR_1) {





  return;
 }
 if (VAR_10->r_flags & VAR_3) {



  VAR_9->rc_tlp_rtx_out = 0;
  return;
 }
 if (VAR_13 != VAR_0) {






  return;
 }

 if (VAR_10->r_flags & VAR_4) {




  FUNC_1(VAR_7);
  VAR_9->r_ctl.rc_reorder_ts = VAR_12;
 }

 if (VAR_10->r_flags & VAR_2) {
  VAR_9->r_ctl.rc_lost -= VAR_10->r_end - VAR_10->r_start;
  VAR_9->r_ctl.rc_lost_bytes -= VAR_10->r_end - VAR_10->r_start;
  VAR_10->r_flags &= ~VAR_2;
  if (FUNC_2(VAR_9->r_ctl.rc_lt_lost, VAR_9->r_ctl.rc_lost))

   VAR_9->r_ctl.rc_lt_lost = VAR_9->r_ctl.rc_lost;
 }




 FUNC_1(VAR_5);
 FUNC_0(VAR_6, (VAR_10->r_end - VAR_10->r_start));
}
