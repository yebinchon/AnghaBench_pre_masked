
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int device; } ;
struct rvt_qp {size_t state; int s_lock; int s_flags; TYPE_1__ ibqp; struct qib_qp_priv* priv; } ;
struct qib_qp_priv {int iowait; } ;
struct TYPE_4__ {int pending_lock; } ;
struct qib_ibdev {TYPE_2__ rdi; int piowait; int n_piowait; } ;
struct qib_devdata {int (* f_wantpiobuf_intr ) (struct qib_devdata*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct qib_devdata* FUNC_0 (struct qib_ibdev*) ;
 int* VAR_4 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct qib_devdata*,int) ;
 struct qib_ibdev* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct rvt_qp *VAR_5)
{
 struct qib_qp_priv *VAR_6 = VAR_5->priv;
 struct qib_ibdev *VAR_7 = FUNC_8(VAR_5->ibqp.device);
 struct qib_devdata *VAR_8;
 unsigned long VAR_9;
 int VAR_10 = 0;







 FUNC_4(&VAR_5->s_lock, VAR_9);
 if (VAR_4[VAR_5->state] & VAR_1) {
  FUNC_3(&VAR_7->rdi.pending_lock);
  if (FUNC_2(&VAR_6->iowait)) {
   VAR_7->n_piowait++;
   VAR_5->s_flags |= VAR_3;
   FUNC_1(&VAR_6->iowait, &VAR_7->piowait);
   VAR_8 = FUNC_0(VAR_7);
   VAR_8->f_wantpiobuf_intr(VAR_8, 1);
  }
  FUNC_5(&VAR_7->rdi.pending_lock);
  VAR_5->s_flags &= ~VAR_2;
  VAR_10 = -VAR_0;
 }
 FUNC_6(&VAR_5->s_lock, VAR_9);
 return VAR_10;
}
