
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t4_cqe {int dummy; } ;
struct ib_wc {int dummy; } ;
struct c4iw_srq {int lock; } ;
struct c4iw_qp {int lock; struct c4iw_srq* srq; } ;
struct c4iw_cq {int rhp; int cq; } ;


 int FUNC_0 (struct t4_cqe*) ;
 int FUNC_1 (struct c4iw_cq*,struct c4iw_qp*,struct ib_wc*,struct c4iw_srq*) ;
 struct c4iw_qp* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct t4_cqe**) ;

__attribute__((used)) static int FUNC_6(struct c4iw_cq *VAR_0, struct ib_wc *VAR_1)
{
 struct c4iw_srq *VAR_2 = ((void*)0);
 struct c4iw_qp *VAR_3 = ((void*)0);
 struct t4_cqe *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_5(&VAR_0->cq, &VAR_4);

 if (VAR_5)
  return VAR_5;

 VAR_3 = FUNC_2(VAR_0->rhp, FUNC_0(VAR_4));
 if (VAR_3) {
  FUNC_3(&VAR_3->lock);
  VAR_2 = VAR_3->srq;
  if (VAR_2)
   FUNC_3(&VAR_2->lock);
  VAR_5 = FUNC_1(VAR_0, VAR_3, VAR_1, VAR_2);
  FUNC_4(&VAR_3->lock);
  if (VAR_2)
   FUNC_4(&VAR_2->lock);
 } else {
  VAR_5 = FUNC_1(VAR_0, ((void*)0), VAR_1, ((void*)0));
 }
 return VAR_5;
}
