
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tcpopt {int to_flags; scalar_t__ to_tsval; } ;
struct tcphdr {int th_seq; } ;
struct tcpcb {int last_ack_sent; int t_flags; scalar_t__ ts_recent; int ts_recent_age; int t_inpcb; scalar_t__ t_fin_is_rst; scalar_t__ t_fb_ptr; } ;
struct tcp_bbr {int r_wanted_output; int rc_tv; } ;
struct socket {int so_snd; } ;
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
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (struct mbuf*,struct tcphdr*,struct socket*,struct tcpcb*,struct tcpopt*,int ,int,int *,int,int*) ;
 int FUNC_4 (struct mbuf*,struct tcphdr*,struct socket*,struct tcpcb*,int,int,int ,int,int) ;
 scalar_t__ FUNC_5 (struct tcp_bbr*) ;
 int FUNC_6 (struct socket*,struct tcpcb*) ;
 int FUNC_7 (struct mbuf*,struct tcphdr*,struct tcpcb*,int*) ;
 int FUNC_8 (struct mbuf*,int *) ;
 int FUNC_9 (struct mbuf*,struct tcpcb*,struct tcphdr*,int,int,int*) ;
 int FUNC_10 (struct mbuf*,struct tcpcb*,struct tcphdr*,int ,int) ;
 scalar_t__ FUNC_11 (struct tcpopt*,struct mbuf*,struct tcphdr*,struct tcpcb*,int*,int*,int*,int*) ;
 int FUNC_12 (struct mbuf*,struct tcphdr*,struct socket*,struct tcpcb*) ;
 scalar_t__ FUNC_13 (struct mbuf*,struct tcphdr*,struct tcpcb*,int,int,int*) ;
 scalar_t__ FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int
FUNC_16(struct mbuf *VAR_8, struct tcphdr *VAR_9, struct socket *VAR_10,
    struct tcpcb *VAR_11, struct tcpopt *VAR_12, int32_t VAR_13, int32_t VAR_14,
    uint32_t VAR_15, int32_t VAR_16, int32_t VAR_17)
{
 struct tcp_bbr *VAR_18;
 int32_t VAR_19;

 VAR_18 = (struct tcp_bbr *)VAR_11->t_fb_ptr;
 FUNC_6(VAR_10, VAR_11);
 if ((VAR_16 & VAR_5) ||
     (VAR_11->t_fin_is_rst && (VAR_16 & VAR_4)))
  return (FUNC_12(VAR_8, VAR_9, VAR_10, VAR_11));




 if (VAR_16 & VAR_6) {
  FUNC_7(VAR_8, VAR_9, VAR_11, &VAR_19);
  return (VAR_19);
 }




 if ((VAR_12->to_flags & VAR_7) != 0 && VAR_11->ts_recent &&
     FUNC_2(VAR_12->to_tsval, VAR_11->ts_recent)) {
  if (FUNC_13(VAR_8, VAR_9, VAR_11, VAR_14, VAR_16, &VAR_19))
   return (VAR_19);
 }
 FUNC_0(VAR_11->t_inpcb);
 if (FUNC_11(VAR_12, VAR_8, VAR_9, VAR_11, &VAR_14, &VAR_16, &VAR_13, &VAR_19)) {
  return (VAR_19);
 }
 if ((VAR_12->to_flags & VAR_7) != 0 &&
     FUNC_1(VAR_9->th_seq, VAR_11->last_ack_sent) &&
     FUNC_1(VAR_11->last_ack_sent, VAR_9->th_seq + VAR_14 +
     ((VAR_16 & (VAR_6 | VAR_4)) != 0))) {
  VAR_11->ts_recent_age = FUNC_15(&VAR_18->rc_tv);
  VAR_11->ts_recent = VAR_12->to_tsval;
 }





 if ((VAR_16 & VAR_3) == 0) {
  if (VAR_11->t_flags & VAR_2) {
   return (FUNC_4(VAR_8, VAR_9, VAR_10, VAR_11, VAR_13, VAR_14,
       VAR_15, VAR_16, VAR_17));
  } else if (VAR_11->t_flags & VAR_1) {
   FUNC_9(VAR_8, VAR_11, VAR_9, VAR_16, VAR_14, &VAR_19);
   VAR_18->r_wanted_output = 1;
   return (VAR_19);
  } else {
   FUNC_8(VAR_8, ((void*)0));
   return (0);
  }
 }



 if (FUNC_3(VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_15, VAR_14, ((void*)0), VAR_16, &VAR_19)) {
  return (VAR_19);
 }
 if (FUNC_14(&VAR_10->so_snd)) {
  if (FUNC_5(VAR_18)) {
   FUNC_10(VAR_8, VAR_11, VAR_9, VAR_0, VAR_14);
   return (1);
  }
 }
 return (FUNC_4(VAR_8, VAR_9, VAR_10, VAR_11, VAR_13, VAR_14,
     VAR_15, VAR_16, VAR_17));
}
