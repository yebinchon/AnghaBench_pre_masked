
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int device; } ;
struct rvt_qp {TYPE_1__ ibqp; struct qib_qp_priv* priv; } ;
struct qib_qp_priv {int iowait; } ;
struct TYPE_4__ {int pending_lock; } ;
struct qib_ibdev {TYPE_2__ rdi; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct qib_ibdev* FUNC_4 (int ) ;

void FUNC_5(struct rvt_qp *VAR_0)
{
 struct qib_qp_priv *VAR_1 = VAR_0->priv;
 struct qib_ibdev *VAR_2 = FUNC_4(VAR_0->ibqp.device);

 FUNC_2(&VAR_2->rdi.pending_lock);
 if (!FUNC_1(&VAR_1->iowait))
  FUNC_0(&VAR_1->iowait);
 FUNC_3(&VAR_2->rdi.pending_lock);
}
