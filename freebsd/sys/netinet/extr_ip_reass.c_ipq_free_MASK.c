
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {struct mbuf* m_nextpkt; } ;
struct ipqbucket {int count; int head; } ;
struct ipq {struct mbuf* ipq_frags; int ipq_nfrags; } ;


 int FUNC_0 (int *,struct ipq*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct mbuf*) ;
 int VAR_2 ;
 int FUNC_3 (int ,struct ipq*) ;

__attribute__((used)) static void
FUNC_4(struct ipqbucket *VAR_3, struct ipq *VAR_4)
{
 struct mbuf *VAR_5;

 FUNC_1(&VAR_2, VAR_4->ipq_nfrags);
 while (VAR_4->ipq_frags) {
  VAR_5 = VAR_4->ipq_frags;
  VAR_4->ipq_frags = VAR_5->m_nextpkt;
  FUNC_2(VAR_5);
 }
 FUNC_0(&VAR_3->head, VAR_4, VAR_1);
 VAR_3->count--;
 FUNC_3(VAR_0, VAR_4);
}
