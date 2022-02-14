
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int device; } ;
struct ocrdma_qp {scalar_t__ sq_cq; scalar_t__ rq_cq; int srq; TYPE_1__ ibqp; } ;
struct ocrdma_dev {int * cqe_err_stats; } ;
struct ocrdma_cqe {int flags_status_srcqpn; } ;
struct ib_wc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 struct ocrdma_dev* FUNC_1 (int ) ;
 int FUNC_2 (struct ocrdma_qp*) ;
 scalar_t__ FUNC_3 (struct ocrdma_qp*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ib_wc*,struct ocrdma_cqe*,struct ocrdma_qp*,int) ;
 int FUNC_6 (struct ib_wc*,struct ocrdma_cqe*,struct ocrdma_qp*,int) ;

__attribute__((used)) static bool FUNC_7(struct ocrdma_qp *VAR_4,
     struct ocrdma_cqe *VAR_5, struct ib_wc *VAR_6,
     bool *VAR_7, bool *VAR_8)
{
 bool VAR_9;
 struct ocrdma_dev *VAR_10 = FUNC_1(VAR_4->ibqp.device);
 int VAR_11 = (FUNC_4(VAR_5->flags_status_srcqpn) &
  VAR_0) >> VAR_1;
 if (VAR_11 < VAR_3)
  FUNC_0(&VAR_10->cqe_err_stats[VAR_11]);




 if (FUNC_3(VAR_4) && !FUNC_2(VAR_4)) {



  if (!VAR_4->srq && (VAR_4->sq_cq == VAR_4->rq_cq)) {
   *VAR_7 = 1;
   VAR_11 = VAR_2;
   VAR_9 = FUNC_5(VAR_6, VAR_5, VAR_4, VAR_11);
  } else {





   *VAR_7 = 0;
   *VAR_8 = 1;
   VAR_9 = 0;
  }
 } else if (FUNC_3(VAR_4)) {

  VAR_9 = 0;
  *VAR_7 = 0;
  *VAR_8 = 0;
 } else {
  *VAR_7 = 1;
  VAR_9 = FUNC_6(VAR_6, VAR_5, VAR_4, VAR_11);
 }
 return VAR_9;
}
