
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct tcpopt {int to_flags; scalar_t__ to_tsval; } ;
struct tcphdr {scalar_t__ th_seq; } ;
struct tcpcb {int t_maxseg; scalar_t__ rcv_nxt; scalar_t__ last_ack_sent; int t_flags; scalar_t__ ts_recent; int ts_recent_age; int t_inpcb; scalar_t__ t_fin_is_rst; int snd_wnd; scalar_t__ t_fb_ptr; } ;
struct TYPE_2__ {int rc_delivered; int rc_init_rwnd; } ;
struct tcp_bbr {int r_wanted_output; int rc_tv; TYPE_1__ r_ctl; } ;
struct socket {int so_snd; } ;
struct mbuf {int dummy; } ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct tcpcb*) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct mbuf*,struct tcphdr*,struct socket*,struct tcpcb*,struct tcpopt*,scalar_t__,scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_6 (struct mbuf*,struct tcphdr*,struct socket*,struct tcpcb*,struct tcpopt*,scalar_t__,scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_7 (struct mbuf*,struct tcphdr*,struct socket*,struct tcpcb*,struct tcpopt*,int ,scalar_t__,int *,scalar_t__,scalar_t__*) ;
 int FUNC_8 (struct mbuf*,struct tcphdr*,struct socket*,struct tcpcb*,scalar_t__,scalar_t__,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (struct tcp_bbr*) ;
 int FUNC_10 (struct socket*,struct tcpcb*) ;
 int FUNC_11 (struct mbuf*,struct tcphdr*,struct tcpcb*,scalar_t__*) ;
 int FUNC_12 (struct mbuf*,int *) ;
 int FUNC_13 (struct mbuf*,struct tcpcb*,struct tcphdr*,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_14 (struct mbuf*,struct tcpcb*,struct tcphdr*,int ,scalar_t__) ;
 scalar_t__ FUNC_15 (struct tcpopt*,struct mbuf*,struct tcphdr*,struct tcpcb*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_16 (struct mbuf*,struct tcphdr*,struct socket*,struct tcpcb*) ;
 scalar_t__ FUNC_17 (struct mbuf*,struct tcphdr*,struct tcpcb*,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_18 (int ,int ) ;
 scalar_t__ FUNC_19 (int *) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static int
FUNC_21(struct mbuf *VAR_10, struct tcphdr *VAR_11, struct socket *VAR_12,
    struct tcpcb *VAR_13, struct tcpopt *VAR_14, int32_t VAR_15, int32_t VAR_16,
    uint32_t VAR_17, int32_t VAR_18, int32_t VAR_19)
{
 struct tcp_bbr *VAR_20;
 int32_t VAR_21;
 VAR_20 = (struct tcp_bbr *)VAR_13->t_fb_ptr;
 if (VAR_20->r_ctl.rc_delivered < (4 * VAR_13->t_maxseg)) {





  VAR_20->r_ctl.rc_init_rwnd = FUNC_18(VAR_17, VAR_13->snd_wnd);
 }
 if (FUNC_4(((VAR_14->to_flags & VAR_8) == 0)) &&
     FUNC_4((VAR_18 & (VAR_6 | VAR_4 | VAR_5 | VAR_7 | VAR_3)) == VAR_3) &&
     FUNC_4(FUNC_1(VAR_13)) &&
     FUNC_4(VAR_11->th_seq == VAR_13->rcv_nxt)) {
  if (VAR_16 == 0) {
   if (FUNC_6(VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16,
       VAR_17, VAR_19)) {
    return (0);
   }
  } else {
   if (FUNC_5(VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16,
       VAR_17, VAR_19)) {
    return (0);
   }
  }
 }
 FUNC_10(VAR_12, VAR_13);

 if ((VAR_18 & VAR_5) ||
     (VAR_13->t_fin_is_rst && (VAR_18 & VAR_4)))
  return (FUNC_16(VAR_10, VAR_11, VAR_12, VAR_13));




 if (VAR_18 & VAR_6) {
  FUNC_11(VAR_10, VAR_11, VAR_13, &VAR_21);
  return (VAR_21);
 }




 if ((VAR_14->to_flags & VAR_9) != 0 && VAR_13->ts_recent &&
     FUNC_3(VAR_14->to_tsval, VAR_13->ts_recent)) {
  if (FUNC_17(VAR_10, VAR_11, VAR_13, VAR_16, VAR_18, &VAR_21))
   return (VAR_21);
 }
 FUNC_0(VAR_13->t_inpcb);
 if (FUNC_15(VAR_14, VAR_10, VAR_11, VAR_13, &VAR_16, &VAR_18, &VAR_15, &VAR_21)) {
  return (VAR_21);
 }
 if ((VAR_14->to_flags & VAR_9) != 0 &&
     FUNC_2(VAR_11->th_seq, VAR_13->last_ack_sent) &&
     FUNC_2(VAR_13->last_ack_sent, VAR_11->th_seq + VAR_16 +
     ((VAR_18 & (VAR_6 | VAR_4)) != 0))) {
  VAR_13->ts_recent_age = FUNC_20(&VAR_20->rc_tv);
  VAR_13->ts_recent = VAR_14->to_tsval;
 }





 if ((VAR_18 & VAR_3) == 0) {
  if (VAR_13->t_flags & VAR_2) {
   return (FUNC_8(VAR_10, VAR_11, VAR_12, VAR_13, VAR_15, VAR_16,
       VAR_17, VAR_18, VAR_19));
  } else if (VAR_13->t_flags & VAR_1) {
   FUNC_13(VAR_10, VAR_13, VAR_11, VAR_18, VAR_16, &VAR_21);
   VAR_20->r_wanted_output = 1;
   return (VAR_21);
  } else {
   FUNC_12(VAR_10, ((void*)0));
   return (0);
  }
 }



 if (FUNC_7(VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_17, VAR_16, ((void*)0), VAR_18, &VAR_21)) {
  return (VAR_21);
 }
 if (FUNC_19(&VAR_12->so_snd)) {
  if (FUNC_9(VAR_20)) {
   FUNC_14(VAR_10, VAR_13, VAR_11, VAR_0, VAR_16);
   return (1);
  }
 }

 return (FUNC_8(VAR_10, VAR_11, VAR_12, VAR_13, VAR_15, VAR_16,
     VAR_17, VAR_18, VAR_19));
}
