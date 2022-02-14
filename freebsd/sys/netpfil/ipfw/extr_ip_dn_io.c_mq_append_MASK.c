
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mq {struct mbuf* tail; int count; struct mbuf* head; } ;
struct mbuf {int m_flags; int m_data; int __m_extbuf; int __m_extlen; struct mbuf* m_nextpkt; } ;


 int FUNC_0 (struct mbuf*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,struct mbuf*,...) ;
 int FUNC_2 (int,void*,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static inline void
FUNC_4(struct mq *VAR_3, struct mbuf *VAR_4)
{
 if (VAR_3->head == ((void*)0))
  VAR_3->head = VAR_4;
 else
  VAR_3->tail->m_nextpkt = VAR_4;
 VAR_3->count++;
 VAR_3->tail = VAR_4;
 VAR_4->m_nextpkt = ((void*)0);
}
