
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbuf {struct mbuf* m_nextpkt; } ;
struct ipq {struct mbuf* ipq_frags; int ipq_nfrags; } ;
struct TYPE_2__ {int count; int head; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ) ;
 struct ipq* FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,struct ipq*,int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_6 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (struct mbuf*) ;
 int VAR_5 ;

__attribute__((used)) static struct ipq *
FUNC_8(int VAR_6)
{
 struct ipq *VAR_7;
 int VAR_8, VAR_9;

 FUNC_0(VAR_6);

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  VAR_8 = (VAR_6 + VAR_9) % VAR_0;
  if (VAR_8 != VAR_6 && FUNC_1(VAR_8) == 0)
   continue;
  VAR_7 = FUNC_4(&VAR_1[VAR_8].head, VAR_3);
  if (VAR_7) {
   struct mbuf *VAR_10;

   FUNC_3(VAR_4, VAR_7->ipq_nfrags);
   FUNC_6(&VAR_5, VAR_7->ipq_nfrags);
   while (VAR_7->ipq_frags) {
    VAR_10 = VAR_7->ipq_frags;
    VAR_7->ipq_frags = VAR_10->m_nextpkt;
    FUNC_7(VAR_10);
   }
   FUNC_5(&VAR_1[VAR_8].head, VAR_7, VAR_2);
   VAR_1[VAR_8].count--;
   if (VAR_8 != VAR_6)
    FUNC_2(VAR_8);
   break;
  }
  if (VAR_8 != VAR_6)
   FUNC_2(VAR_8);
 }
 FUNC_0(VAR_6);
 return (VAR_7);
}
