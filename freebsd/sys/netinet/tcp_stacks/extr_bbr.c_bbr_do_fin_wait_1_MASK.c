
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct tcpopt {int to_flags; scalar_t__ to_tsval; } ;
struct tcphdr {int th_seq; } ;
struct tcpcb {int last_ack_sent; int t_flags; scalar_t__ ts_recent; int ts_recent_age; int t_inpcb; scalar_t__ t_fin_is_rst; scalar_t__ t_fb_ptr; } ;
struct tcp_bbr {int r_wanted_output; int rc_tv; } ;
struct TYPE_2__ {int sb_state; } ;
struct socket {int so_state; int so_snd; TYPE_1__ so_rcv; } ;
struct mbuf {int dummy; } ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct tcpcb*) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int VAR_11 ;
 scalar_t__ FUNC_4 (struct mbuf*,struct tcp_bbr*,struct tcpcb*,int*,struct tcphdr*,struct socket*) ;
 scalar_t__ FUNC_5 (struct mbuf*,struct tcphdr*,struct socket*,struct tcpcb*,struct tcpopt*,int ,int,int*,int,int*) ;
 int FUNC_6 (struct mbuf*,struct tcphdr*,struct socket*,struct tcpcb*,int,int,int ,int,int) ;
 scalar_t__ FUNC_7 (struct tcp_bbr*) ;
 int FUNC_8 (struct socket*,struct tcpcb*) ;
 int FUNC_9 (struct mbuf*,struct tcphdr*,struct tcpcb*,int*) ;
 int FUNC_10 (struct mbuf*,int *) ;
 int FUNC_11 (struct mbuf*,struct tcpcb*,struct tcphdr*,int,int,int*) ;
 int FUNC_12 (struct mbuf*,struct tcpcb*,struct tcphdr*,int ,int) ;
 scalar_t__ FUNC_13 (struct tcpopt*,struct mbuf*,struct tcphdr*,struct tcpcb*,int*,int*,int*,int*) ;
 int FUNC_14 (struct mbuf*,struct tcphdr*,struct socket*,struct tcpcb*) ;
 scalar_t__ FUNC_15 (struct mbuf*,struct tcphdr*,struct tcpcb*,int,int,int*) ;
 scalar_t__ FUNC_16 (int *) ;
 int FUNC_17 (struct socket*) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_18 (struct tcpcb*,int ) ;
 int FUNC_19 (struct tcpcb*,int ,int ) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static int
FUNC_21(struct mbuf *VAR_14, struct tcphdr *VAR_15, struct socket *VAR_16,
    struct tcpcb *VAR_17, struct tcpopt *VAR_18, int32_t VAR_19, int32_t VAR_20,
    uint32_t VAR_21, int32_t VAR_22, int32_t VAR_23)
{
 int32_t VAR_24 = 0;
 int32_t VAR_25;
 struct tcp_bbr *VAR_26;

 VAR_26 = (struct tcp_bbr *)VAR_17->t_fb_ptr;
 FUNC_8(VAR_16, VAR_17);
 if ((VAR_22 & VAR_8) ||
     (VAR_17->t_fin_is_rst && (VAR_22 & VAR_7)))
  return (FUNC_14(VAR_14, VAR_15, VAR_16, VAR_17));




 if (VAR_22 & VAR_9) {
  FUNC_9(VAR_14, VAR_15, VAR_17, &VAR_25);
  return (VAR_25);
 }




 if ((VAR_18->to_flags & VAR_10) != 0 && VAR_17->ts_recent &&
     FUNC_3(VAR_18->to_tsval, VAR_17->ts_recent)) {
  if (FUNC_15(VAR_14, VAR_15, VAR_17, VAR_20, VAR_22, &VAR_25))
   return (VAR_25);
 }
 FUNC_0(VAR_17->t_inpcb);
 if (FUNC_13(VAR_18, VAR_14, VAR_15, VAR_17, &VAR_20, &VAR_22, &VAR_19, &VAR_25)) {
  return (VAR_25);
 }




 if ((VAR_16->so_state & VAR_2) && VAR_20) {




  if (FUNC_4(VAR_14, VAR_26, VAR_17, &VAR_20, VAR_15, VAR_16))
   return (1);
 }
 if ((VAR_18->to_flags & VAR_10) != 0 &&
     FUNC_1(VAR_15->th_seq, VAR_17->last_ack_sent) &&
     FUNC_1(VAR_17->last_ack_sent, VAR_15->th_seq + VAR_20 +
     ((VAR_22 & (VAR_9 | VAR_7)) != 0))) {
  VAR_17->ts_recent_age = FUNC_20(&VAR_26->rc_tv);
  VAR_17->ts_recent = VAR_18->to_tsval;
 }





 if ((VAR_22 & VAR_6) == 0) {
  if (VAR_17->t_flags & VAR_5) {
   return (FUNC_6(VAR_14, VAR_15, VAR_16, VAR_17, VAR_19, VAR_20,
       VAR_21, VAR_22, VAR_23));
  } else if (VAR_17->t_flags & VAR_4) {
   FUNC_11(VAR_14, VAR_17, VAR_15, VAR_22, VAR_20, &VAR_25);
   VAR_26->r_wanted_output = 1;
   return (VAR_25);
  } else {
   FUNC_10(VAR_14, ((void*)0));
   return (0);
  }
 }



 if (FUNC_5(VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_21, VAR_20, &VAR_24, VAR_22, &VAR_25)) {
  return (VAR_25);
 }
 if (VAR_24) {
  if (VAR_16->so_rcv.sb_state & VAR_1) {
   FUNC_17(VAR_16);
   FUNC_19(VAR_17, VAR_11,
       (VAR_12 ?
       VAR_13 :
       FUNC_2(VAR_17)));
  }
  FUNC_18(VAR_17, VAR_3);
 }
 if (FUNC_16(&VAR_16->so_snd)) {
  if (FUNC_7(VAR_26)) {
   FUNC_12(VAR_14, VAR_17, VAR_15, VAR_0, VAR_20);
   return (1);
  }
 }
 return (FUNC_6(VAR_14, VAR_15, VAR_16, VAR_17, VAR_19, VAR_20,
     VAR_21, VAR_22, VAR_23));
}
