
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siw_srq {int lock; int limit; int max_sge; int num_rqe; } ;
struct ib_srq_attr {int srq_limit; int max_sge; int max_wr; } ;
struct ib_srq {int dummy; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct siw_srq* FUNC_2 (struct ib_srq*) ;

int FUNC_3(struct ib_srq *VAR_0, struct ib_srq_attr *VAR_1)
{
 struct siw_srq *VAR_2 = FUNC_2(VAR_0);
 unsigned long VAR_3;

 FUNC_0(&VAR_2->lock, VAR_3);

 VAR_1->max_wr = VAR_2->num_rqe;
 VAR_1->max_sge = VAR_2->max_sge;
 VAR_1->srq_limit = VAR_2->limit;

 FUNC_1(&VAR_2->lock, VAR_3);

 return 0;
}
