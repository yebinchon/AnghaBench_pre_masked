
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int tail; int max_wqe_idx; } ;
struct ocrdma_qp {TYPE_3__ sq; int ibqp; TYPE_1__* wqe_wr_id_tbl; } ;
struct TYPE_5__ {int wqeidx; } ;
struct ocrdma_cqe {TYPE_2__ wq; } ;
struct ib_wc {int * qp; scalar_t__ wc_flags; int status; } ;
struct TYPE_4__ {int signaled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct ocrdma_qp*,struct ib_wc*,int) ;

__attribute__((used)) static bool FUNC_3(struct ocrdma_qp *VAR_2,
         struct ocrdma_cqe *VAR_3,
         struct ib_wc *VAR_4, bool *VAR_5)
{
 bool VAR_6 = 0;
 int VAR_7 = VAR_2->sq.tail;
 u32 VAR_8;

 if (!VAR_2->wqe_wr_id_tbl[VAR_7].signaled) {
  *VAR_5 = 0;
 } else {
  VAR_4->status = VAR_0;
  VAR_4->wc_flags = 0;
  VAR_4->qp = &VAR_2->ibqp;
  FUNC_2(VAR_2, VAR_4, VAR_7);
  *VAR_5 = 1;
 }
 VAR_8 = (FUNC_0(VAR_3->wq.wqeidx) &
   VAR_1) & VAR_2->sq.max_wqe_idx;
 if (VAR_7 != VAR_8)
  VAR_6 = 1;

 FUNC_1(&VAR_2->sq);
 return VAR_6;
}
