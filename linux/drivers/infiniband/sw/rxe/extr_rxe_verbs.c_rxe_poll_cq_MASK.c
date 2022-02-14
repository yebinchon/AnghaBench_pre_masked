
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxe_cqe {int ibwc; } ;
struct rxe_cq {int cq_lock; int queue; } ;
struct ib_wc {int dummy; } ;
struct ib_cq {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int) ;
 struct rxe_cqe* FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct rxe_cq* FUNC_5 (struct ib_cq*) ;

__attribute__((used)) static int FUNC_6(struct ib_cq *VAR_0, int VAR_1, struct ib_wc *VAR_2)
{
 int VAR_3;
 struct rxe_cq *VAR_4 = FUNC_5(VAR_0);
 struct rxe_cqe *VAR_5;
 unsigned long VAR_6;

 FUNC_3(&VAR_4->cq_lock, VAR_6);
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_5 = FUNC_2(VAR_4->queue);
  if (!VAR_5)
   break;

  FUNC_1(VAR_2++, &VAR_5->ibwc, sizeof(*VAR_2));
  FUNC_0(VAR_4->queue);
 }
 FUNC_4(&VAR_4->cq_lock, VAR_6);

 return VAR_3;
}
