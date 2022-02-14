
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_qp {struct ib_device* device; } ;
struct rvt_qp {int s_flags; struct ib_qp ibqp; struct hfi1_qp_priv* priv; } ;
struct ib_device {int dummy; } ;
struct TYPE_2__ {int * lock; int list; } ;
struct hfi1_qp_priv {TYPE_1__ s_iowait; } ;
struct hfi1_ibdev {int iowait_lock; int memwait; int mem_timer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (struct rvt_qp*) ;
 struct hfi1_ibdev* FUNC_4 (struct ib_device*) ;
 int FUNC_5 (struct rvt_qp*,int ) ;

void FUNC_6(struct rvt_qp *VAR_2)
{
 struct hfi1_qp_priv *VAR_3 = VAR_2->priv;
 struct ib_qp *VAR_4 = &VAR_2->ibqp;
 struct ib_device *VAR_5 = VAR_4->device;
 struct hfi1_ibdev *VAR_6 = FUNC_4(VAR_5);

 if (FUNC_1(&VAR_3->s_iowait.list)) {
  if (FUNC_1(&VAR_6->memwait))
   FUNC_2(&VAR_6->mem_timer, VAR_1 + 1);
  VAR_2->s_flags |= VAR_0;
  FUNC_0(&VAR_3->s_iowait.list, &VAR_6->memwait);
  VAR_3->s_iowait.lock = &VAR_6->iowait_lock;
  FUNC_5(VAR_2, VAR_0);
  FUNC_3(VAR_2);
 }
}
