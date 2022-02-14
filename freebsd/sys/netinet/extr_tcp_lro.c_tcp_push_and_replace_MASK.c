
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcpcb {int dummy; } ;
struct mbuf {struct mbuf* m_nextpkt; } ;
struct lro_entry {TYPE_1__* m_head; } ;
struct lro_ctrl {int dummy; } ;
struct TYPE_2__ {struct mbuf* m_nextpkt; } ;


 int FUNC_0 (struct tcpcb*,struct lro_ctrl*,struct lro_entry*,int) ;
 int FUNC_1 (struct lro_ctrl*,struct lro_entry*,struct mbuf*) ;

__attribute__((used)) static void
FUNC_2(struct tcpcb *VAR_0, struct lro_ctrl *VAR_1, struct lro_entry *VAR_2, struct mbuf *VAR_3, int VAR_4)
{




 struct mbuf *VAR_5;


 VAR_5 = VAR_2->m_head->m_nextpkt;
 VAR_2->m_head->m_nextpkt = ((void*)0);

 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4);





 FUNC_1(VAR_1, VAR_2, VAR_3);

 VAR_3->m_nextpkt = VAR_5;
}
