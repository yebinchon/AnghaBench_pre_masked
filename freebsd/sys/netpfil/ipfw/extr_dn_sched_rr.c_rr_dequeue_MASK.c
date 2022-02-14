
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct rr_si {struct rr_queue* head; } ;
struct TYPE_5__ {struct mbuf* head; } ;
struct TYPE_6__ {TYPE_2__ mq; } ;
struct rr_queue {TYPE_3__ q; scalar_t__ credit; scalar_t__ quantum; } ;
struct TYPE_4__ {scalar_t__ len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct dn_sch_inst {int dummy; } ;


 struct mbuf* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct rr_si*) ;
 int FUNC_2 (struct rr_si*) ;

__attribute__((used)) static struct mbuf *
FUNC_3(struct dn_sch_inst *VAR_0)
{

 struct rr_si *VAR_1 = (struct rr_si *)(VAR_0 + 1);
 struct rr_queue *VAR_2;
 uint64_t VAR_3;

 while ( (VAR_2 = VAR_1->head) ) {
  struct mbuf *VAR_4 = VAR_2->q.mq.head;
  if ( VAR_4 == ((void*)0)) {

   FUNC_2(VAR_1);
   continue;
  }
  VAR_3 = VAR_4->m_pkthdr.len;

  if (VAR_3 > VAR_2->credit) {

   VAR_2->credit += VAR_2->quantum;

   FUNC_1(VAR_1);
  } else {
   VAR_2->credit -= VAR_3;
   return FUNC_0(&VAR_2->q);
  }
 }


 return ((void*)0);
}
