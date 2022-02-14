
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mbuf {struct mbuf* m_nextpkt; } ;
struct cf_conn {struct mbuf* mreq; } ;
struct TYPE_4__ {scalar_t__ xp_p1; } ;
typedef TYPE_1__ SVCXPRT ;


 int FUNC_0 (struct mbuf*) ;
 int FUNC_1 (struct cf_conn*,int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(SVCXPRT *VAR_0)
{
 struct cf_conn *VAR_1 = (struct cf_conn *)VAR_0->xp_p1;
 struct mbuf *VAR_2, *VAR_3;

 FUNC_2(VAR_0);
 VAR_2 = VAR_1->mreq;
 while (VAR_2 != ((void*)0)) {
  VAR_3 = VAR_2;
  VAR_2 = VAR_2->m_nextpkt;
  FUNC_0(VAR_3);
 }
 FUNC_1(VAR_1, sizeof(*VAR_1));
}
