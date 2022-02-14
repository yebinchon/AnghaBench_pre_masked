
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tcpopt {int to_flags; scalar_t__ to_tsval; } ;
struct tcphdr {int th_seq; } ;
struct tcpcb {int last_ack_sent; int t_flags; scalar_t__ ts_recent; int ts_recent_age; int t_inpcb; scalar_t__ t_fin_is_rst; scalar_t__ t_fb_ptr; } ;
struct tcp_bbr {int r_wanted_output; int rc_tv; } ;
struct socket {int so_state; int so_snd; } ;
struct mbuf {int dummy; } ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (struct mbuf*,struct tcp_bbr*,struct tcpcb*,int*,struct tcphdr*,struct socket*) ;
 scalar_t__ FUNC_4 (struct mbuf*,struct tcphdr*,struct socket*,struct tcpcb*,struct tcpopt*,int ,int,int*,int,int*) ;
 int FUNC_5 (struct mbuf*,struct tcphdr*,struct socket*,struct tcpcb*,int,int,int ,int,int) ;
 scalar_t__ FUNC_6 (struct tcp_bbr*) ;
 int FUNC_7 (struct socket*,struct tcpcb*) ;
 int FUNC_8 (struct mbuf*,struct tcphdr*,struct tcpcb*,int*) ;
 int FUNC_9 (struct mbuf*,struct tcpcb*) ;
 int FUNC_10 (struct mbuf*,struct tcpcb*,struct tcphdr*,int,int,int*) ;
 int FUNC_11 (struct mbuf*,struct tcpcb*,struct tcphdr*,int ,int) ;
 scalar_t__ FUNC_12 (struct tcpopt*,struct mbuf*,struct tcphdr*,struct tcpcb*,int*,int*,int*,int*) ;
 int FUNC_13 (struct mbuf*,struct tcphdr*,struct socket*,struct tcpcb*) ;
 scalar_t__ FUNC_14 (struct mbuf*,struct tcphdr*,struct tcpcb*,int,int,int*) ;
 scalar_t__ FUNC_15 (int *) ;
 struct tcpcb* FUNC_16 (struct tcpcb*) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int
FUNC_18(struct mbuf *VAR_9, struct tcphdr *VAR_10, struct socket *VAR_11,
    struct tcpcb *VAR_12, struct tcpopt *VAR_13, int32_t VAR_14, int32_t VAR_15,
    uint32_t VAR_16, int32_t VAR_17, int32_t VAR_18)
{
 int32_t VAR_19 = 0;
 int32_t VAR_20;
 struct tcp_bbr *VAR_21;

 VAR_21 = (struct tcp_bbr *)VAR_12->t_fb_ptr;
 FUNC_7(VAR_11, VAR_12);
 if ((VAR_17 & VAR_6) ||
     (VAR_12->t_fin_is_rst && (VAR_17 & VAR_5)))
  return (FUNC_13(VAR_9, VAR_10, VAR_11, VAR_12));




 if (VAR_17 & VAR_7) {
  FUNC_8(VAR_9, VAR_10, VAR_12, &VAR_20);
  return (VAR_20);
 }




 if ((VAR_13->to_flags & VAR_8) != 0 && VAR_12->ts_recent &&
     FUNC_2(VAR_13->to_tsval, VAR_12->ts_recent)) {
  if (FUNC_14(VAR_9, VAR_10, VAR_12, VAR_15, VAR_17, &VAR_20))
   return (VAR_20);
 }
 FUNC_0(VAR_12->t_inpcb);
 if (FUNC_12(VAR_13, VAR_9, VAR_10, VAR_12, &VAR_15, &VAR_17, &VAR_14, &VAR_20)) {
  return (VAR_20);
 }




 if ((VAR_11->so_state & VAR_1) && VAR_15) {




  if (FUNC_3(VAR_9, VAR_21, VAR_12, &VAR_15, VAR_10, VAR_11))
   return (1);
 }
 if ((VAR_13->to_flags & VAR_8) != 0 &&
     FUNC_1(VAR_10->th_seq, VAR_12->last_ack_sent) &&
     FUNC_1(VAR_12->last_ack_sent, VAR_10->th_seq + VAR_15 +
     ((VAR_17 & (VAR_7 | VAR_5)) != 0))) {
  VAR_12->ts_recent_age = FUNC_17(&VAR_21->rc_tv);
  VAR_12->ts_recent = VAR_13->to_tsval;
 }





 if ((VAR_17 & VAR_4) == 0) {
  if (VAR_12->t_flags & VAR_3) {
   return (FUNC_5(VAR_9, VAR_10, VAR_11, VAR_12, VAR_14, VAR_15,
       VAR_16, VAR_17, VAR_18));
  } else if (VAR_12->t_flags & VAR_2) {
   FUNC_10(VAR_9, VAR_12, VAR_10, VAR_17, VAR_15, &VAR_20);
   VAR_21->r_wanted_output = 1;
   return (VAR_20);
  } else {
   FUNC_9(VAR_9, ((void*)0));
   return (0);
  }
 }



 if (FUNC_4(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_16, VAR_15, &VAR_19, VAR_17, &VAR_20)) {
  return (VAR_20);
 }
 if (VAR_19) {
  VAR_12 = FUNC_16(VAR_12);
  FUNC_9(VAR_9, VAR_12);
  return (1);
 }
 if (FUNC_15(&VAR_11->so_snd)) {
  if (FUNC_6(VAR_21)) {
   FUNC_11(VAR_9, VAR_12, VAR_10, VAR_0, VAR_15);
   return (1);
  }
 }
 return (FUNC_5(VAR_9, VAR_10, VAR_11, VAR_12, VAR_14, VAR_15,
     VAR_16, VAR_17, VAR_18));
}
