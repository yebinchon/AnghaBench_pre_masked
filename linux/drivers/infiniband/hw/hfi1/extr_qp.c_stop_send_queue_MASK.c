
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rvt_qp {struct hfi1_qp_priv* priv; } ;
struct TYPE_2__ {int trigger_work; } ;
struct hfi1_qp_priv {TYPE_1__ tid_rdma; int s_iowait; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rvt_qp*) ;

void FUNC_3(struct rvt_qp *VAR_0)
{
 struct hfi1_qp_priv *VAR_1 = VAR_0->priv;

 FUNC_1(&VAR_1->s_iowait);
 if (FUNC_0(&VAR_1->tid_rdma.trigger_work))
  FUNC_2(VAR_0);
}
