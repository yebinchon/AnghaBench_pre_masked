
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tcpopt {int to_flags; scalar_t__ to_tsval; } ;
struct tcphdr {int th_seq; } ;
struct tcpcb {int last_ack_sent; int t_flags; int t_inpcb; scalar_t__ t_fb_ptr; scalar_t__ ts_recent; int ts_recent_age; scalar_t__ t_fin_is_rst; } ;
struct tcp_rack {int r_wanted_output; } ;
struct socket {int so_state; int so_snd; } ;
struct mbuf {int dummy; } ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (struct socket*,struct tcpcb*) ;
 int FUNC_3 (struct mbuf*,struct tcphdr*,struct tcpcb*,int*) ;
 int FUNC_4 (struct mbuf*,struct tcpcb*) ;
 int FUNC_5 (struct mbuf*,struct tcpcb*,struct tcphdr*,int,int,int*) ;
 int FUNC_6 (struct mbuf*,struct tcpcb*,struct tcphdr*,int ,int) ;
 scalar_t__ FUNC_7 (struct tcpopt*,struct mbuf*,struct tcphdr*,struct tcpcb*,int*,int*,int*,int*) ;
 int FUNC_8 (struct mbuf*,struct tcphdr*,struct socket*,struct tcpcb*) ;
 scalar_t__ FUNC_9 (struct mbuf*,struct tcphdr*,struct tcpcb*,int,int,int*) ;
 scalar_t__ FUNC_10 (struct mbuf*,struct tcpcb*,int*,struct tcphdr*,struct socket*) ;
 scalar_t__ FUNC_11 (struct mbuf*,struct tcphdr*,struct socket*,struct tcpcb*,struct tcpopt*,int ,int,int*,int,int*) ;
 int FUNC_12 (struct mbuf*,struct tcphdr*,struct socket*,struct tcpcb*,int,int,int ,int,int) ;
 scalar_t__ FUNC_13 (struct tcpcb*) ;
 scalar_t__ FUNC_14 (int *) ;
 struct tcpcb* FUNC_15 (struct tcpcb*) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 () ;

__attribute__((used)) static int
FUNC_18(struct mbuf *VAR_10, struct tcphdr *VAR_11, struct socket *VAR_12,
    struct tcpcb *VAR_13, struct tcpopt *VAR_14, int32_t VAR_15, int32_t VAR_16,
    uint32_t VAR_17, int32_t VAR_18, int32_t VAR_19)
{
 int32_t VAR_20 = 0;
 int32_t VAR_21 = 0;

 FUNC_2(VAR_12, VAR_13);

 if ((VAR_18 & VAR_7) ||
     (VAR_13->t_fin_is_rst && (VAR_18 & VAR_6)))
  return (FUNC_8(VAR_10, VAR_11, VAR_12, VAR_13));




 if (VAR_18 & VAR_8) {
  FUNC_3(VAR_10, VAR_11, VAR_13, &VAR_20);
  return (VAR_20);
 }




 if ((VAR_14->to_flags & VAR_9) != 0 && VAR_13->ts_recent &&
     FUNC_1(VAR_14->to_tsval, VAR_13->ts_recent)) {
  if (FUNC_9(VAR_10, VAR_11, VAR_13, VAR_16, VAR_18, &VAR_20))
   return (VAR_20);
 }
 if (FUNC_7(VAR_14, VAR_10, VAR_11, VAR_13, &VAR_16, &VAR_18, &VAR_15, &VAR_20)) {
  return (VAR_20);
 }




 if ((VAR_12->so_state & VAR_2) && VAR_16) {
  if (FUNC_10(VAR_10, VAR_13, &VAR_16, VAR_11, VAR_12))
   return (1);
 }
 if ((VAR_14->to_flags & VAR_9) != 0 &&
     FUNC_0(VAR_11->th_seq, VAR_13->last_ack_sent) &&
     FUNC_0(VAR_13->last_ack_sent, VAR_11->th_seq + VAR_16 +
     ((VAR_18 & (VAR_8 | VAR_6)) != 0))) {
  VAR_13->ts_recent_age = FUNC_17();
  VAR_13->ts_recent = VAR_14->to_tsval;
 }





 if ((VAR_18 & VAR_5) == 0) {
  if (VAR_13->t_flags & VAR_4) {
   return (FUNC_12(VAR_10, VAR_11, VAR_12, VAR_13, VAR_15, VAR_16,
       VAR_17, VAR_18, VAR_19));
  } else if (VAR_13->t_flags & VAR_3) {
   FUNC_5(VAR_10, VAR_13, VAR_11, VAR_18, VAR_16, &VAR_20);
   ((struct tcp_rack *)VAR_13->t_fb_ptr)->r_wanted_output++;
   return (VAR_20);
  } else {
   FUNC_4(VAR_10, ((void*)0));
   return (0);
  }
 }



 if (FUNC_11(VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_17, VAR_16, &VAR_21, VAR_18, &VAR_20)) {
  return (VAR_20);
 }
 if (VAR_21) {
  VAR_13 = FUNC_15(VAR_13);
  FUNC_4(VAR_10, VAR_13);
  return (1);
 }
 if (FUNC_14(&VAR_12->so_snd)) {
  if (FUNC_13(VAR_13)) {
   FUNC_16(VAR_13->t_inpcb, VAR_1);
   FUNC_6(VAR_10, VAR_13, VAR_11, VAR_0, VAR_16);
   return (1);
  }
 }
 return (FUNC_12(VAR_10, VAR_11, VAR_12, VAR_13, VAR_15, VAR_16,
     VAR_17, VAR_18, VAR_19));
}
