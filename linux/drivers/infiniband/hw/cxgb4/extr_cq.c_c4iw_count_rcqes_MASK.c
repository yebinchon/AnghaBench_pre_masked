
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_2__ {scalar_t__ qid; } ;
struct t4_wq {TYPE_1__ sq; } ;
struct t4_cqe {int dummy; } ;
struct t4_cq {size_t sw_cidx; size_t sw_pidx; size_t size; struct t4_cqe* sw_queue; } ;


 scalar_t__ FUNC_0 (struct t4_cqe*) ;
 scalar_t__ FUNC_1 (struct t4_cqe*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (struct t4_cqe*) ;
 scalar_t__ FUNC_3 (struct t4_cqe*,struct t4_wq*) ;
 int FUNC_4 (char*,...) ;

void FUNC_5(struct t4_cq *VAR_1, struct t4_wq *VAR_2, int *VAR_3)
{
 struct t4_cqe *VAR_4;
 u32 VAR_5;

 *VAR_3 = 0;
 FUNC_4("count zero %d\n", *VAR_3);
 VAR_5 = VAR_1->sw_cidx;
 while (VAR_5 != VAR_1->sw_pidx) {
  VAR_4 = &VAR_1->sw_queue[VAR_5];
  if (FUNC_2(VAR_4) && (FUNC_0(VAR_4) != VAR_0) &&
      (FUNC_1(VAR_4) == VAR_2->sq.qid) && FUNC_3(VAR_4, VAR_2))
   (*VAR_3)++;
  if (++VAR_5 == VAR_1->size)
   VAR_5 = 0;
 }
 FUNC_4("cq %p count %d\n", VAR_1, *VAR_3);
}
