
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct mq {int dummy; } ;
struct mbuf {struct mbuf* m_nextpkt; } ;
struct dn_pkt_tag {int output_time; } ;
struct TYPE_5__ {int subtype; } ;
struct TYPE_4__ {int count; struct mbuf* head; } ;
struct delay_line {TYPE_2__ oid; TYPE_1__ mq; } ;
struct TYPE_6__ {int evheap; } ;


 int FUNC_0 (int ,int ) ;
 TYPE_3__ VAR_0 ;
 struct dn_pkt_tag* FUNC_1 (struct mbuf*) ;
 int FUNC_2 (int *,int ,struct delay_line*) ;
 int FUNC_3 (struct mq*,struct mbuf*) ;

__attribute__((used)) static void
FUNC_4(struct mq *VAR_1, struct delay_line *VAR_2, uint64_t VAR_3)
{
 struct mbuf *VAR_4;
 struct dn_pkt_tag *VAR_5 = ((void*)0);

 VAR_2->oid.subtype = 0;
 while ((VAR_4 = VAR_2->mq.head) != ((void*)0)) {
  VAR_5 = FUNC_1(VAR_4);
  if (!FUNC_0(VAR_5->output_time, VAR_3))
   break;
  VAR_2->mq.head = VAR_4->m_nextpkt;
  VAR_2->mq.count--;
  FUNC_3(VAR_1, VAR_4);
 }
 if (VAR_4 != ((void*)0)) {
  VAR_2->oid.subtype = 1;
  FUNC_2(&VAR_0.evheap, VAR_5->output_time, VAR_2);
 }
}
