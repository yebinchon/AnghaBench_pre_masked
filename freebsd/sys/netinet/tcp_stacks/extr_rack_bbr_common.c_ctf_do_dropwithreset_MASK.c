
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {int dummy; } ;
struct tcpcb {int t_inpcb; } ;
struct mbuf {int dummy; } ;
typedef int int32_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mbuf*,struct tcphdr*,struct tcpcb*,int ,int ) ;

void
FUNC_2(struct mbuf *VAR_0, struct tcpcb *VAR_1, struct tcphdr *VAR_2,
    int32_t VAR_3, int32_t VAR_4)
{
 if (VAR_1 != ((void*)0)) {
  FUNC_1(VAR_0, VAR_2, VAR_1, VAR_4, VAR_3);
  FUNC_0(VAR_1->t_inpcb);
 } else
  FUNC_1(VAR_0, VAR_2, ((void*)0), VAR_4, VAR_3);
}
