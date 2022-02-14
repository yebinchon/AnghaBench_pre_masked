
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct tcpcb {scalar_t__ t_state; int t_flags; int snd_una; int snd_max; struct inpcb* t_inpcb; } ;
struct TYPE_5__ {int rc_timer_exp; int rc_hpts_flags; int rc_last_output_to; } ;
struct tcp_rack {int rc_tmr_stopped; TYPE_3__* rc_inp; TYPE_2__ r_ctl; scalar_t__ sack_attack_disable; scalar_t__ tlp_timer_up; } ;
struct inpcb {int inp_flags2; TYPE_1__* inp_socket; scalar_t__ inp_in_hpts; } ;
typedef int int32_t ;
struct TYPE_6__ {scalar_t__ inp_in_hpts; int inp_flags2; } ;
struct TYPE_4__ {int so_options; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct tcpcb*) ;
 int FUNC_5 (struct tcpcb*) ;
 scalar_t__ FUNC_6 (int,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,struct tcpcb*,struct tcp_rack*,int,int,int,int) ;
 int FUNC_9 (struct tcp_rack*,int,int,int,int) ;
 int FUNC_10 (struct tcp_rack*,int,int,int) ;
 int FUNC_11 (struct tcpcb*,struct tcp_rack*,int,int) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_12 (struct inpcb*,int ) ;
 int VAR_14 ;

__attribute__((used)) static void
FUNC_13(struct tcp_rack *VAR_15, struct tcpcb *VAR_16, uint32_t VAR_17,
      int32_t VAR_18, uint32_t VAR_19, int VAR_20)
{
 struct inpcb *VAR_21;
 uint32_t VAR_22 = 0;
 uint32_t VAR_23;
 uint8_t VAR_24;
 uint32_t VAR_25 = 0;

 VAR_21 = VAR_16->t_inpcb;
 if (VAR_21->inp_in_hpts) {

  return;
 }
 if ((VAR_16->t_state == VAR_8) ||
     (VAR_16->t_state == VAR_10)) {
  return;
 }
 VAR_24 = VAR_15->rc_tmr_stopped;
 if (VAR_24 && FUNC_6(VAR_15->r_ctl.rc_timer_exp, VAR_17)) {
  VAR_25 = VAR_15->r_ctl.rc_timer_exp - VAR_17;
 }
 VAR_15->tlp_timer_up = 0;
 VAR_15->r_ctl.rc_timer_exp = 0;
 if (VAR_15->rc_inp->inp_in_hpts == 0) {
  VAR_15->r_ctl.rc_hpts_flags = 0;
 }
 if (VAR_18) {

  VAR_15->r_ctl.rc_hpts_flags |= VAR_2;
 } else if (VAR_15->r_ctl.rc_hpts_flags & VAR_2) {




  if (FUNC_6(VAR_15->r_ctl.rc_last_output_to, VAR_17))
   VAR_18 = VAR_15->r_ctl.rc_last_output_to - VAR_17;
  else
   VAR_18 = 1;
 }
 VAR_23 = FUNC_11(VAR_16, VAR_15, VAR_17, VAR_20);
 if (VAR_15->sack_attack_disable &&
     (VAR_18 < FUNC_7(VAR_14))) {
  VAR_18 = FUNC_7(VAR_14);
 }
 if (VAR_16->t_flags & VAR_11) {
  VAR_22 = FUNC_3(VAR_13);
  VAR_15->r_ctl.rc_hpts_flags |= VAR_3;
 }
 if (VAR_22 && ((VAR_23 == 0) ||
       (VAR_22 < VAR_23)))
  VAR_23 = VAR_22;
 else
  VAR_15->r_ctl.rc_hpts_flags &= ~VAR_3;




 if ((VAR_23 == 0) &&
     (VAR_18 == 0)) {
  if ((VAR_12 || VAR_21->inp_socket->so_options & VAR_7) &&
      (VAR_16->t_state <= VAR_9)) {





   if (FUNC_2(VAR_16->t_state)) {

    VAR_23 = FUNC_4(VAR_16);
   } else {

    VAR_23 = FUNC_5(VAR_16);
   }
   VAR_15->r_ctl.rc_hpts_flags |= VAR_4;
  }
 }
 if (VAR_25 && (VAR_24 & (VAR_4 | VAR_3)) ==
     (VAR_15->r_ctl.rc_hpts_flags & VAR_5)) {
  if (VAR_25 < VAR_23)
   VAR_23 = VAR_25;
 }
 if (VAR_23) {





  if (VAR_23 > 0x7ffffffe)
   VAR_23 = 0x7ffffffe;
  VAR_15->r_ctl.rc_timer_exp = VAR_17 + VAR_23;
 }
 if (VAR_18) {
  VAR_15->rc_inp->inp_flags2 |= VAR_1;
  if (VAR_15->r_ctl.rc_hpts_flags & VAR_6)
   VAR_21->inp_flags2 |= VAR_0;
  else
   VAR_21->inp_flags2 &= ~VAR_0;
  VAR_15->r_ctl.rc_last_output_to = VAR_17 + VAR_18;
  if ((VAR_23 == 0) || (VAR_23 > VAR_18)) {
   if (VAR_15->rc_inp->inp_in_hpts == 0)
    FUNC_12(VAR_16->t_inpcb, FUNC_0(VAR_18));
   FUNC_9(VAR_15, VAR_17, VAR_23, VAR_18, 1);
  } else {




   if (VAR_15->rc_inp->inp_in_hpts == 0)
    FUNC_12(VAR_16->t_inpcb, FUNC_0(VAR_23));
   FUNC_9(VAR_15, VAR_17, VAR_23, VAR_18, 0);
  }
 } else if (VAR_23) {
  if (VAR_15->r_ctl.rc_hpts_flags & VAR_6) {

   VAR_15->rc_inp->inp_flags2 |= VAR_1;
   VAR_21->inp_flags2 |= VAR_0;
  } else {

   VAR_15->rc_inp->inp_flags2 &= ~VAR_1;
   VAR_21->inp_flags2 &= ~VAR_0;
  }
  if (VAR_15->rc_inp->inp_in_hpts == 0)
   FUNC_12(VAR_16->t_inpcb, FUNC_0(VAR_23));
  FUNC_9(VAR_15, VAR_17, VAR_23, VAR_18, 0);
 } else {







 }
 VAR_15->rc_tmr_stopped = 0;
 if (VAR_18)
  FUNC_10(VAR_15, VAR_19, VAR_18, VAR_17);
}
