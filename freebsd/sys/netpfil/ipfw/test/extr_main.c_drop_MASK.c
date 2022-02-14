
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbuf {struct mbuf* m_nextpkt; int flow_id; } ;
struct list_head {int dummy; } ;
struct TYPE_2__ {int length; struct list_head h; } ;
struct dn_queue {TYPE_1__ ni; } ;
struct cfg_s {int llmask; struct mbuf* freelist; int * ll; int drop; } ;


 int VAR_0 ;
 struct dn_queue* FUNC_0 (struct cfg_s*,int ) ;
 int FUNC_1 (char*,struct dn_queue*,int ,int) ;
 int FUNC_2 (struct list_head*,int *) ;
 int FUNC_3 (struct list_head*) ;

__attribute__((used)) static int
FUNC_4(struct cfg_s *VAR_1, struct mbuf *VAR_2)
{
 struct dn_queue *VAR_3;
 int VAR_4;

 VAR_1->drop++;
 VAR_3 = FUNC_0(VAR_1, VAR_2->flow_id);
 VAR_4 = VAR_3->ni.length;

 FUNC_1("q %p id %d current length %d", VAR_3, VAR_2->flow_id, VAR_4);
 if (VAR_4 < VAR_0) {
  struct list_head *VAR_5 = &VAR_3->ni.h;
  VAR_1->llmask &= ~(1<<(VAR_4+1));
  VAR_1->llmask |= (1<<(VAR_4));
  FUNC_3(VAR_5);
  FUNC_2(VAR_5, &VAR_1->ll[VAR_4]);
 }
 VAR_2->m_nextpkt = VAR_1->freelist;
 VAR_1->freelist = VAR_2;
 return 0;
}
