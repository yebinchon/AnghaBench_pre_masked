
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct timeval {int tv_sec; int tv_usec; } ;
struct tcphdr {int dummy; } ;
struct tcpcb {int t_inpcb; scalar_t__ t_in_pkt; } ;
struct socket {int dummy; } ;
struct TYPE_2__ {int rcv_tstmp; } ;
struct mbuf {int m_flags; TYPE_1__ m_pkthdr; } ;
typedef int int32_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct socket*,struct tcpcb*,int) ;
 int FUNC_2 (struct mbuf*) ;
 scalar_t__ FUNC_3 (struct mbuf*,struct tcphdr*,struct socket*,struct tcpcb*,int ,int ,int ,int ,struct timeval*) ;
 int FUNC_4 (struct timeval*) ;

void
FUNC_5(struct mbuf *VAR_1, struct tcphdr *VAR_2, struct socket *VAR_3,
    struct tcpcb *VAR_4, int32_t VAR_5, int32_t VAR_6, uint8_t VAR_7)
{
 struct timeval VAR_8;


 if (VAR_4->t_in_pkt) {
  if (FUNC_1(VAR_3, VAR_4, 1)) {
   FUNC_2(VAR_1);
   return;
  }
 }
 if (VAR_1->m_flags & VAR_0) {
  VAR_8.tv_sec = VAR_1->m_pkthdr.rcv_tstmp /1000000000;
  VAR_8.tv_usec = (VAR_1->m_pkthdr.rcv_tstmp % 1000000000)/1000;
 } else {

  FUNC_4(&VAR_8);
 }
 if(FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4,
        VAR_5, VAR_6, VAR_7, 0, &VAR_8) == 0)
  FUNC_0(VAR_4->t_inpcb);
}
