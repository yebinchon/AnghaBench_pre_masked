
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int device; } ;
struct rvt_qp {TYPE_2__ ibqp; int port_num; struct hfi1_qp_priv* priv; } ;
struct hfi1_qp_priv {TYPE_1__* s_sde; int s_iowait; } ;
struct hfi1_pportdata {int hfi1_wq; } ;
struct hfi1_ibport {int dummy; } ;
struct hfi1_devdata {int node; } ;
struct TYPE_3__ {int cpu; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct hfi1_devdata* FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ) ;
 struct hfi1_pportdata* FUNC_4 (struct hfi1_ibport*) ;
 struct hfi1_ibport* FUNC_5 (int ,int ) ;

bool FUNC_6(struct rvt_qp *VAR_0)
{
 struct hfi1_qp_priv *VAR_1 = VAR_0->priv;
 struct hfi1_ibport *VAR_2 =
  FUNC_5(VAR_0->ibqp.device, VAR_0->port_num);
 struct hfi1_pportdata *VAR_3 = FUNC_4(VAR_2);
 struct hfi1_devdata *VAR_4 = FUNC_2(VAR_0->ibqp.device);

 return FUNC_3(&VAR_1->s_iowait, VAR_3->hfi1_wq,
          VAR_1->s_sde ?
          VAR_1->s_sde->cpu :
          FUNC_0(FUNC_1(VAR_4->node)));
}
