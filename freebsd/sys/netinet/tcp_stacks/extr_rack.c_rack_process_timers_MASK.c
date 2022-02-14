
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct tcpcb {scalar_t__ t_state; int t_inpcb; } ;
struct TYPE_2__ {int rc_hpts_flags; int rc_timer_exp; int rc_tlp_rxt_last_time; } ;
struct tcp_rack {TYPE_1__ r_ctl; scalar_t__ rc_tmr_stopped; scalar_t__ rc_last_pto_set; } ;
typedef int int32_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (struct tcp_rack*,int,int,int) ;
 int FUNC_3 (struct tcpcb*,struct tcp_rack*,int) ;
 int FUNC_4 (struct tcpcb*,struct tcp_rack*,int) ;
 int FUNC_5 (struct tcpcb*,struct tcp_rack*,int) ;
 int FUNC_6 (struct tcpcb*,struct tcp_rack*,int) ;
 int FUNC_7 (struct tcpcb*,struct tcp_rack*,int) ;
 int FUNC_8 (struct tcpcb*,struct tcp_rack*,int) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int
FUNC_10(struct tcpcb *VAR_9, struct tcp_rack *VAR_10, uint32_t VAR_11, uint8_t VAR_12)
{
 int32_t VAR_13 = 0;
 int32_t VAR_14 = (VAR_10->r_ctl.rc_hpts_flags & VAR_3);

 if (VAR_14 == 0) {
  return (0);
 }
 if (VAR_9->t_state == VAR_8) {

  if (VAR_10->r_ctl.rc_hpts_flags & VAR_0)
   return (0);
  return (1);
 }
 if (FUNC_1(VAR_11, VAR_10->r_ctl.rc_timer_exp)) {
  uint32_t VAR_15;

  if (VAR_10->r_ctl.rc_hpts_flags & VAR_0) {
   VAR_13 = -1;
   FUNC_2(VAR_10, VAR_11, VAR_13, 0);
   return (0);
  }
  if (VAR_12 == 0) {
   VAR_13 = -2;
   FUNC_2(VAR_10, VAR_11, VAR_13, 0);
   return (0);
  }




  VAR_13 = -3;
  VAR_15 = VAR_10->r_ctl.rc_timer_exp - VAR_11;
  FUNC_9(VAR_9->t_inpcb, FUNC_0(VAR_15));
  FUNC_2(VAR_10, VAR_11, VAR_13, VAR_15);
  VAR_10->rc_last_pto_set = 0;
  return (1);
 }
 VAR_10->rc_tmr_stopped = 0;
 VAR_10->r_ctl.rc_hpts_flags &= ~VAR_3;
 if (VAR_14 & VAR_1) {
  VAR_13 = FUNC_3(VAR_9, VAR_10, VAR_11);
 } else if (VAR_14 & VAR_5) {
  VAR_10->r_ctl.rc_tlp_rxt_last_time = VAR_11;
  VAR_13 = FUNC_6(VAR_9, VAR_10, VAR_11);
 } else if (VAR_14 & VAR_7) {
  VAR_10->r_ctl.rc_tlp_rxt_last_time = VAR_11;
  VAR_13 = FUNC_8(VAR_9, VAR_10, VAR_11);
 } else if (VAR_14 & VAR_6) {
  VAR_10->r_ctl.rc_tlp_rxt_last_time = VAR_11;
  VAR_13 = FUNC_7(VAR_9, VAR_10, VAR_11);
 } else if (VAR_14 & VAR_4) {
  VAR_13 = FUNC_5(VAR_9, VAR_10, VAR_11);
 } else if (VAR_14 & VAR_2) {
  VAR_13 = FUNC_4(VAR_9, VAR_10, VAR_11);
 }
 FUNC_2(VAR_10, VAR_11, VAR_13, VAR_14);
 return (VAR_13);
}
