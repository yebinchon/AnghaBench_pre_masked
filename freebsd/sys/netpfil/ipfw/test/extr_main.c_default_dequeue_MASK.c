
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mq {struct mbuf* head; } ;
struct mbuf {struct mbuf* m_nextpkt; } ;
struct dn_sch_inst {int dummy; } ;



__attribute__((used)) static struct mbuf *
FUNC_0(struct dn_sch_inst *VAR_0)
{
 struct mq *VAR_1 = (struct mq *)VAR_0;
 struct mbuf *VAR_2;

 if ((VAR_2 = VAR_1->head)) {
  VAR_2 = VAR_1->head;
  VAR_1->head = VAR_2->m_nextpkt;
  VAR_2->m_nextpkt = ((void*)0);
 }
 return VAR_2;
}
