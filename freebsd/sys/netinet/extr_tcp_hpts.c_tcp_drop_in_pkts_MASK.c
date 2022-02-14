
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {struct mbuf* t_in_pkt; } ;
struct mbuf {struct mbuf* m_nextpkt; } ;


 int FUNC_0 (struct mbuf*) ;

__attribute__((used)) static void
FUNC_1(struct tcpcb *VAR_0)
{
 struct mbuf *VAR_1, *VAR_2;

 VAR_1 = VAR_0->t_in_pkt;
 if (VAR_1)
  VAR_2 = VAR_1->m_nextpkt;
 else
  VAR_2 = ((void*)0);
 VAR_0->t_in_pkt = ((void*)0);
 while (VAR_1) {
  FUNC_0(VAR_1);
  VAR_1 = VAR_2;
  if (VAR_1)
   VAR_2 = VAR_1->m_nextpkt;
 }
}
