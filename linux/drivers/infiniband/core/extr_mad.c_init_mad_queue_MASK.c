
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_mad_queue {int list; int lock; scalar_t__ count; struct ib_mad_qp_info* qp_info; } ;
struct ib_mad_qp_info {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct ib_mad_qp_info *VAR_0,
      struct ib_mad_queue *VAR_1)
{
 VAR_1->qp_info = VAR_0;
 VAR_1->count = 0;
 FUNC_1(&VAR_1->lock);
 FUNC_0(&VAR_1->list);
}
