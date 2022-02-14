
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvrdma_qp {int dummy; } ;
struct pvrdma_cq {int cq_lock; } ;
struct ib_wc {int dummy; } ;
struct ib_cq {int dummy; } ;


 scalar_t__ FUNC_0 (struct pvrdma_cq*,struct pvrdma_qp**,struct ib_wc*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct pvrdma_cq* FUNC_3 (struct ib_cq*) ;

int FUNC_4(struct ib_cq *VAR_0, int VAR_1, struct ib_wc *VAR_2)
{
 struct pvrdma_cq *VAR_3 = FUNC_3(VAR_0);
 struct pvrdma_qp *VAR_4 = ((void*)0);
 unsigned long VAR_5;
 int VAR_6;

 if (VAR_1 < 1 || VAR_2 == ((void*)0))
  return 0;

 FUNC_1(&VAR_3->cq_lock, VAR_5);
 for (VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6) {
  if (FUNC_0(VAR_3, &VAR_4, VAR_2 + VAR_6))
   break;
 }

 FUNC_2(&VAR_3->cq_lock, VAR_5);


 return VAR_6;
}
