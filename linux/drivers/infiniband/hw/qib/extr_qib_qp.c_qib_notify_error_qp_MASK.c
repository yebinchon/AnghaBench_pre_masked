
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int device; } ;
struct rvt_qp {int s_flags; int * s_rdma_mr; scalar_t__ s_hdrwords; TYPE_1__ ibqp; struct qib_qp_priv* priv; } ;
struct qib_qp_priv {int * s_tx; int iowait; } ;
struct TYPE_4__ {int pending_lock; } ;
struct qib_ibdev {TYPE_2__ rdi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct qib_ibdev* FUNC_6 (int ) ;

void FUNC_7(struct rvt_qp *VAR_2)
{
 struct qib_qp_priv *VAR_3 = VAR_2->priv;
 struct qib_ibdev *VAR_4 = FUNC_6(VAR_2->ibqp.device);

 FUNC_4(&VAR_4->rdi.pending_lock);
 if (!FUNC_1(&VAR_3->iowait) && !(VAR_2->s_flags & VAR_1)) {
  VAR_2->s_flags &= ~VAR_0;
  FUNC_0(&VAR_3->iowait);
 }
 FUNC_5(&VAR_4->rdi.pending_lock);

 if (!(VAR_2->s_flags & VAR_1)) {
  VAR_2->s_hdrwords = 0;
  if (VAR_2->s_rdma_mr) {
   FUNC_3(VAR_2->s_rdma_mr);
   VAR_2->s_rdma_mr = ((void*)0);
  }
  if (VAR_3->s_tx) {
   FUNC_2(VAR_3->s_tx);
   VAR_3->s_tx = ((void*)0);
  }
 }
}
