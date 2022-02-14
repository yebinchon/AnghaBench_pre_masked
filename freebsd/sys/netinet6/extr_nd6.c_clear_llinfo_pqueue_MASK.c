
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {struct mbuf* m_nextpkt; } ;
struct llentry {struct mbuf* la_hold; } ;


 int FUNC_0 (struct mbuf*) ;

__attribute__((used)) static void
FUNC_1(struct llentry *VAR_0)
{
 struct mbuf *VAR_1, *VAR_2;

 for (VAR_1 = VAR_0->la_hold; VAR_1; VAR_1 = VAR_2) {
  VAR_2 = VAR_1->m_nextpkt;
  FUNC_0(VAR_1);
 }

 VAR_0->la_hold = ((void*)0);
}
