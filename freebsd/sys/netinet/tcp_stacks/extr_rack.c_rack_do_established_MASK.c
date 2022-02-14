
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct tcpopt {int to_flags; scalar_t__ to_tsval; } ;
struct tcphdr {scalar_t__ th_seq; } ;
struct tcpcb {scalar_t__ rcv_nxt; scalar_t__ last_ack_sent; int t_flags; int t_inpcb; scalar_t__ t_fb_ptr; scalar_t__ ts_recent; int ts_recent_age; scalar_t__ t_fin_is_rst; } ;
struct TYPE_2__ {int rc_rcvtime; } ;
struct tcp_rack {int r_wanted_output; TYPE_1__ r_ctl; } ;
struct socket {int so_snd; } ;
struct mbuf {int dummy; } ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tcpcb*) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct socket*,struct tcpcb*) ;
 int FUNC_5 (struct mbuf*,struct tcphdr*,struct tcpcb*,scalar_t__*) ;
 int FUNC_6 (struct mbuf*,int *) ;
 int FUNC_7 (struct mbuf*,struct tcpcb*,struct tcphdr*,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_8 (struct mbuf*,struct tcpcb*,struct tcphdr*,int ,scalar_t__) ;
 scalar_t__ FUNC_9 (struct tcpopt*,struct mbuf*,struct tcphdr*,struct tcpcb*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_10 (struct mbuf*,struct tcphdr*,struct socket*,struct tcpcb*) ;
 scalar_t__ FUNC_11 (struct mbuf*,struct tcphdr*,struct tcpcb*,scalar_t__,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_12 (struct mbuf*,struct tcphdr*,struct socket*,struct tcpcb*,struct tcpopt*,scalar_t__,scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_13 (struct mbuf*,struct tcphdr*,struct socket*,struct tcpcb*,struct tcpopt*,scalar_t__,scalar_t__,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_14 (struct mbuf*,struct tcphdr*,struct socket*,struct tcpcb*,struct tcpopt*,int ,scalar_t__,int *,scalar_t__,scalar_t__*) ;
 int FUNC_15 (struct mbuf*,struct tcphdr*,struct socket*,struct tcpcb*,scalar_t__,scalar_t__,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_16 (struct tcpcb*) ;
 scalar_t__ FUNC_17 (int *) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 () ;

__attribute__((used)) static int
FUNC_20(struct mbuf *VAR_11, struct tcphdr *VAR_12, struct socket *VAR_13,
    struct tcpcb *VAR_14, struct tcpopt *VAR_15, int32_t VAR_16, int32_t VAR_17,
    uint32_t VAR_18, int32_t VAR_19, int32_t VAR_20)
{
 int32_t VAR_21 = 0;
 if (FUNC_3(((VAR_15->to_flags & VAR_9) == 0)) &&
     FUNC_3((VAR_19 & (VAR_7 | VAR_5 | VAR_6 | VAR_8 | VAR_4)) == VAR_4) &&
     FUNC_3(FUNC_0(VAR_14)) &&
     FUNC_3(VAR_12->th_seq == VAR_14->rcv_nxt)) {
  struct tcp_rack *VAR_22;

  VAR_22 = (struct tcp_rack *)VAR_14->t_fb_ptr;
  if (VAR_17 == 0) {
   if (FUNC_13(VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17,
       VAR_18, VAR_20, VAR_22->r_ctl.rc_rcvtime)) {
    return (0);
   }
  } else {
   if (FUNC_12(VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17,
       VAR_18, VAR_20)) {
    return (0);
   }
  }
 }
 FUNC_4(VAR_13, VAR_14);

 if ((VAR_19 & VAR_6) ||
     (VAR_14->t_fin_is_rst && (VAR_19 & VAR_5)))
  return (FUNC_10(VAR_11, VAR_12, VAR_13, VAR_14));





 if (VAR_19 & VAR_7) {
  FUNC_5(VAR_11, VAR_12, VAR_14, &VAR_21);
  return (VAR_21);
 }




 if ((VAR_15->to_flags & VAR_10) != 0 && VAR_14->ts_recent &&
     FUNC_2(VAR_15->to_tsval, VAR_14->ts_recent)) {
  if (FUNC_11(VAR_11, VAR_12, VAR_14, VAR_17, VAR_19, &VAR_21))
   return (VAR_21);
 }
 if (FUNC_9(VAR_15, VAR_11, VAR_12, VAR_14, &VAR_17, &VAR_19, &VAR_16, &VAR_21)) {
  return (VAR_21);
 }
 if ((VAR_15->to_flags & VAR_10) != 0 &&
     FUNC_1(VAR_12->th_seq, VAR_14->last_ack_sent) &&
     FUNC_1(VAR_14->last_ack_sent, VAR_12->th_seq + VAR_17 +
     ((VAR_19 & (VAR_7 | VAR_5)) != 0))) {
  VAR_14->ts_recent_age = FUNC_19();
  VAR_14->ts_recent = VAR_15->to_tsval;
 }





 if ((VAR_19 & VAR_4) == 0) {
  if (VAR_14->t_flags & VAR_3) {

   return (FUNC_15(VAR_11, VAR_12, VAR_13, VAR_14, VAR_16, VAR_17,
       VAR_18, VAR_19, VAR_20));

  } else if (VAR_14->t_flags & VAR_2) {
   FUNC_7(VAR_11, VAR_14, VAR_12, VAR_19, VAR_17, &VAR_21);
   ((struct tcp_rack *)VAR_14->t_fb_ptr)->r_wanted_output++;
   return (VAR_21);
  } else {
   FUNC_6(VAR_11, ((void*)0));
   return (0);
  }
 }



 if (FUNC_14(VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_18, VAR_17, ((void*)0), VAR_19, &VAR_21)) {
  return (VAR_21);
 }
 if (FUNC_17(&VAR_13->so_snd)) {
  if (FUNC_16(VAR_14)) {
   FUNC_18(VAR_14->t_inpcb, VAR_1);
   FUNC_8(VAR_11, VAR_14, VAR_12, VAR_0, VAR_17);
   return (1);
  }
 }

 return (FUNC_15(VAR_11, VAR_12, VAR_13, VAR_14, VAR_16, VAR_17,
     VAR_18, VAR_19, VAR_20));
}
