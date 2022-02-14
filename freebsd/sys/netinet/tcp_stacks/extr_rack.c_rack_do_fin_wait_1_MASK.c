
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct tcpopt {int to_flags; scalar_t__ to_tsval; } ;
struct tcphdr {int th_seq; } ;
struct tcpcb {int last_ack_sent; int t_flags; int t_inpcb; scalar_t__ t_fb_ptr; scalar_t__ ts_recent; int ts_recent_age; scalar_t__ t_fin_is_rst; } ;
struct tcp_rack {int r_wanted_output; } ;
struct TYPE_2__ {int sb_state; } ;
struct socket {int so_state; int so_snd; TYPE_1__ so_rcv; } ;
struct mbuf {int dummy; } ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct tcpcb*) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int VAR_12 ;
 int FUNC_3 (struct socket*,struct tcpcb*) ;
 int FUNC_4 (struct mbuf*,struct tcphdr*,struct tcpcb*,int*) ;
 int FUNC_5 (struct mbuf*,int *) ;
 int FUNC_6 (struct mbuf*,struct tcpcb*,struct tcphdr*,int,int,int*) ;
 int FUNC_7 (struct mbuf*,struct tcpcb*,struct tcphdr*,int ,int) ;
 scalar_t__ FUNC_8 (struct tcpopt*,struct mbuf*,struct tcphdr*,struct tcpcb*,int*,int*,int*,int*) ;
 int FUNC_9 (struct mbuf*,struct tcphdr*,struct socket*,struct tcpcb*) ;
 scalar_t__ FUNC_10 (struct mbuf*,struct tcphdr*,struct tcpcb*,int,int,int*) ;
 scalar_t__ FUNC_11 (struct mbuf*,struct tcpcb*,int*,struct tcphdr*,struct socket*) ;
 scalar_t__ FUNC_12 (struct mbuf*,struct tcphdr*,struct socket*,struct tcpcb*,struct tcpopt*,int ,int,int*,int,int*) ;
 int FUNC_13 (struct mbuf*,struct tcphdr*,struct socket*,struct tcpcb*,int,int,int ,int,int) ;
 scalar_t__ FUNC_14 (struct tcpcb*) ;
 scalar_t__ FUNC_15 (int *) ;
 int FUNC_16 (struct socket*) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (struct tcpcb*,int ) ;
 int FUNC_19 (struct tcpcb*,int ,int ) ;
 int FUNC_20 () ;

__attribute__((used)) static int
FUNC_21(struct mbuf *VAR_15, struct tcphdr *VAR_16, struct socket *VAR_17,
    struct tcpcb *VAR_18, struct tcpopt *VAR_19, int32_t VAR_20, int32_t VAR_21,
    uint32_t VAR_22, int32_t VAR_23, int32_t VAR_24)
{
 int32_t VAR_25 = 0;
 int32_t VAR_26 = 0;

 FUNC_3(VAR_17, VAR_18);

 if ((VAR_23 & VAR_9) ||
     (VAR_18->t_fin_is_rst && (VAR_23 & VAR_8)))
  return (FUNC_9(VAR_15, VAR_16, VAR_17, VAR_18));




 if (VAR_23 & VAR_10) {
  FUNC_4(VAR_15, VAR_16, VAR_18, &VAR_25);
  return (VAR_25);
 }




 if ((VAR_19->to_flags & VAR_11) != 0 && VAR_18->ts_recent &&
     FUNC_2(VAR_19->to_tsval, VAR_18->ts_recent)) {
  if (FUNC_10(VAR_15, VAR_16, VAR_18, VAR_21, VAR_23, &VAR_25))
   return (VAR_25);
 }
 if (FUNC_8(VAR_19, VAR_15, VAR_16, VAR_18, &VAR_21, &VAR_23, &VAR_20, &VAR_25)) {
  return (VAR_25);
 }




 if ((VAR_17->so_state & VAR_3) && VAR_21) {
  if (FUNC_11(VAR_15, VAR_18, &VAR_21, VAR_16, VAR_17))
   return (1);
 }
 if ((VAR_19->to_flags & VAR_11) != 0 &&
     FUNC_0(VAR_16->th_seq, VAR_18->last_ack_sent) &&
     FUNC_0(VAR_18->last_ack_sent, VAR_16->th_seq + VAR_21 +
     ((VAR_23 & (VAR_10 | VAR_8)) != 0))) {
  VAR_18->ts_recent_age = FUNC_20();
  VAR_18->ts_recent = VAR_19->to_tsval;
 }





 if ((VAR_23 & VAR_7) == 0) {
  if (VAR_18->t_flags & VAR_6) {
   return (FUNC_13(VAR_15, VAR_16, VAR_17, VAR_18, VAR_20, VAR_21,
       VAR_22, VAR_23, VAR_24));
  } else if (VAR_18->t_flags & VAR_5) {
   FUNC_6(VAR_15, VAR_18, VAR_16, VAR_23, VAR_21, &VAR_25);
   ((struct tcp_rack *)VAR_18->t_fb_ptr)->r_wanted_output++;
   return (VAR_25);
  } else {
   FUNC_5(VAR_15, ((void*)0));
   return (0);
  }
 }



 if (FUNC_12(VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_22, VAR_21, &VAR_26, VAR_23, &VAR_25)) {
  return (VAR_25);
 }
 if (VAR_26) {
  if (VAR_17->so_rcv.sb_state & VAR_2) {
   FUNC_16(VAR_17);
   FUNC_19(VAR_18, VAR_12,
       (VAR_13 ?
       VAR_14 :
       FUNC_1(VAR_18)));
  }
  FUNC_18(VAR_18, VAR_4);
 }
 if (FUNC_15(&VAR_17->so_snd)) {
  if (FUNC_14(VAR_18)) {
   FUNC_17(VAR_18->t_inpcb, VAR_1);
   FUNC_7(VAR_15, VAR_18, VAR_16, VAR_0, VAR_21);
   return (1);
  }
 }
 return (FUNC_13(VAR_15, VAR_16, VAR_17, VAR_18, VAR_20, VAR_21,
     VAR_22, VAR_23, VAR_24));
}
