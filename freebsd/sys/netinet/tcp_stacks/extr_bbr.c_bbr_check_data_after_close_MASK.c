
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {scalar_t__ th_seq; } ;
struct tcpcb {int t_flags2; scalar_t__ rcv_nxt; } ;
struct tcp_bbr {scalar_t__ rc_allow_data_af_clo; int r_wanted_output; } ;
struct socket {int so_snd; } ;
struct mbuf {int dummy; } ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct mbuf*,struct tcpcb*,struct tcphdr*,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 struct tcpcb* FUNC_3 (struct tcpcb*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_4(struct mbuf *VAR_3, struct tcp_bbr *VAR_4,
    struct tcpcb *VAR_5, int32_t * VAR_6, struct tcphdr *VAR_7, struct socket *VAR_8)
{

 if (VAR_4->rc_allow_data_af_clo == 0) {
close_now:
  VAR_5 = FUNC_3(VAR_5);
  FUNC_0(VAR_2);
  FUNC_1(VAR_3, VAR_5, VAR_7, VAR_0, (*VAR_6));
  return (1);
 }
 if (FUNC_2(&VAR_8->so_snd) == 0)
  goto close_now;

 VAR_5->rcv_nxt = VAR_7->th_seq + *VAR_6;
 VAR_5->t_flags2 |= VAR_1;
 VAR_4->r_wanted_output = 1;
 *VAR_6 = 0;
 return (0);
}
