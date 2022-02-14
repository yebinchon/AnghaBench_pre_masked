
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct ib_qp {int mr_lock; int mrs_used; } ;
struct ib_mr {int qp_entry; } ;


 int FUNC_0 (int *,struct list_head*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct ib_qp *VAR_0, struct list_head *VAR_1, struct ib_mr *VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(&VAR_0->mr_lock, VAR_3);
 FUNC_0(&VAR_2->qp_entry, VAR_1);
 VAR_0->mrs_used--;
 FUNC_2(&VAR_0->mr_lock, VAR_3);
}
