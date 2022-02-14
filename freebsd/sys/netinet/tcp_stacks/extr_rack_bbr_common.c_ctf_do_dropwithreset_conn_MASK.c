
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {int dummy; } ;
struct tcpcb {scalar_t__ t_inpcb; } ;
struct mbuf {int dummy; } ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct mbuf*,struct tcphdr*,struct tcpcb*,int ,int ) ;
 int FUNC_2 (scalar_t__,int ) ;

void
FUNC_3(struct mbuf *VAR_1, struct tcpcb *VAR_2, struct tcphdr *VAR_3,
    int32_t VAR_4, int32_t VAR_5)
{

 if (VAR_2->t_inpcb) {
  FUNC_2(VAR_2->t_inpcb, VAR_0);
 }
 FUNC_1(VAR_1, VAR_3, VAR_2, VAR_5, VAR_4);
 FUNC_0(VAR_2->t_inpcb);
}
