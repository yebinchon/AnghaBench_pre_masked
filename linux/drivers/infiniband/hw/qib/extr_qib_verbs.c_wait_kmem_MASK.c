
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rvt_qp {size_t state; int s_lock; int s_flags; struct qib_qp_priv* priv; } ;
struct qib_qp_priv {int iowait; } ;
struct TYPE_2__ {int pending_lock; } ;
struct qib_ibdev {TYPE_1__ rdi; int memwait; int mem_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct qib_ibdev *VAR_6, struct rvt_qp *VAR_7)
{
 struct qib_qp_priv *VAR_8 = VAR_7->priv;
 unsigned long VAR_9;
 int VAR_10 = 0;

 FUNC_4(&VAR_7->s_lock, VAR_9);
 if (VAR_4[VAR_7->state] & VAR_1) {
  FUNC_3(&VAR_6->rdi.pending_lock);
  if (FUNC_1(&VAR_8->iowait)) {
   if (FUNC_1(&VAR_6->memwait))
    FUNC_2(&VAR_6->mem_timer, VAR_5 + 1);
   VAR_7->s_flags |= VAR_3;
   FUNC_0(&VAR_8->iowait, &VAR_6->memwait);
  }
  FUNC_5(&VAR_6->rdi.pending_lock);
  VAR_7->s_flags &= ~VAR_2;
  VAR_10 = -VAR_0;
 }
 FUNC_6(&VAR_7->s_lock, VAR_9);

 return VAR_10;
}
