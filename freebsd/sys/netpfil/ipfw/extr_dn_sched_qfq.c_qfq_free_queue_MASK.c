
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qfq_sched {int wsum; int iwsum; } ;
struct qfq_class {int inv_w; } ;
struct dn_queue {scalar_t__ _si; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct dn_queue *VAR_1)
{
 struct qfq_sched *VAR_2 = (struct qfq_sched *)(VAR_1->_si + 1);
 struct qfq_class *VAR_3 = (struct qfq_class *)VAR_1;
 if (VAR_3->inv_w) {
  VAR_2->wsum -= VAR_0/VAR_3->inv_w;
  if (VAR_2->wsum != 0)
   VAR_2->iwsum = VAR_0 / VAR_2->wsum;
  VAR_3->inv_w = 0;
 }
 return 0;
}
