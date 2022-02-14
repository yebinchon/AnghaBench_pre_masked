
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {struct mbuf* m_nextpkt; } ;


 int FUNC_0 (struct mbuf*) ;

void
FUNC_1(struct mbuf *VAR_0)
{
 struct mbuf *VAR_1;
 while ( (VAR_1 = VAR_0) ) {
  VAR_0 = VAR_0->m_nextpkt;
  FUNC_0(VAR_1);
 }
}
