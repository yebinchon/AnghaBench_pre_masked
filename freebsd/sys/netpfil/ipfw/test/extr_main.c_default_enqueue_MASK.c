
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mq {struct mbuf* tail; struct mbuf* head; } ;
struct mbuf {struct mbuf* m_nextpkt; } ;
struct dn_sch_inst {int dummy; } ;
struct dn_queue {int dummy; } ;



__attribute__((used)) static int
FUNC_0(struct dn_sch_inst *VAR_0, struct dn_queue *VAR_1, struct mbuf *VAR_2)
{
 struct mq *VAR_3 = (struct mq *)VAR_0;

 (void)VAR_1;

 if (VAR_3->head == ((void*)0))
  VAR_3->head = VAR_2;
 else
  VAR_3->tail->m_nextpkt = VAR_2;
 VAR_3->tail = VAR_2;
 return 0;
}
