
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rr_si {int dummy; } ;
struct rr_queue {int status; } ;
struct mbuf {int dummy; } ;
struct dn_sch_inst {int dummy; } ;
struct TYPE_2__ {struct mbuf* head; } ;
struct dn_queue {TYPE_1__ mq; } ;


 scalar_t__ FUNC_0 (struct dn_queue*,struct mbuf*,int ) ;
 int FUNC_1 (struct rr_queue*,struct rr_si*) ;

__attribute__((used)) static int
FUNC_2(struct dn_sch_inst *VAR_0, struct dn_queue *VAR_1, struct mbuf *VAR_2)
{
 struct rr_si *VAR_3;
 struct rr_queue *VAR_4;

 if (VAR_2 != VAR_1->mq.head) {
  if (FUNC_0(VAR_1, VAR_2, 0))
   return 1;
  if (VAR_2 != VAR_1->mq.head)
   return 0;
 }


 VAR_3 = (struct rr_si *)(VAR_0 + 1);
 VAR_4 = (struct rr_queue *)VAR_1;

 if (VAR_4->status == 1)
  return 0;


 FUNC_1(VAR_4, VAR_3);

 return 0;
}
