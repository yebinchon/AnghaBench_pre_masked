
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int device; } ;
struct ocrdma_qp {scalar_t__ sq_cq; scalar_t__ rq_cq; int srq; TYPE_1__ ibqp; } ;
struct ocrdma_dev {int * cqe_err_stats; } ;
struct ocrdma_cqe {int dummy; } ;
struct ib_wc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct ocrdma_dev* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct ocrdma_qp*) ;
 int FUNC_3 (struct ocrdma_qp*) ;
 int FUNC_4 (struct ib_wc*,struct ocrdma_cqe*,struct ocrdma_qp*,int) ;
 int FUNC_5 (struct ib_wc*,struct ocrdma_cqe*,struct ocrdma_qp*,int) ;

__attribute__((used)) static bool FUNC_6(struct ocrdma_qp *VAR_2, struct ocrdma_cqe *VAR_3,
    struct ib_wc *VAR_4, bool *VAR_5, bool *VAR_6,
    int VAR_7)
{
 bool VAR_8;
 struct ocrdma_dev *VAR_9 = FUNC_1(VAR_2->ibqp.device);

 if (VAR_7 < VAR_1)
  FUNC_0(&VAR_9->cqe_err_stats[VAR_7]);




 if (FUNC_2(VAR_2) && !FUNC_3(VAR_2)) {
  if (!VAR_2->srq && (VAR_2->sq_cq == VAR_2->rq_cq)) {
   *VAR_5 = 1;
   VAR_7 = VAR_0;
   VAR_8 = FUNC_5(VAR_4, VAR_3, VAR_2, VAR_7);
  } else {
   *VAR_5 = 0;
   *VAR_6 = 1;
   VAR_8 = 0;
  }
 } else if (FUNC_2(VAR_2)) {

  VAR_8 = 0;
  *VAR_5 = 0;
  *VAR_6 = 0;
 } else {
  *VAR_5 = 1;
  VAR_8 = FUNC_4(VAR_4, VAR_3, VAR_2, VAR_7);
 }
 return VAR_8;
}
