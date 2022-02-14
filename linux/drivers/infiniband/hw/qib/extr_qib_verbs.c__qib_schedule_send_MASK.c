
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int device; } ;
struct rvt_qp {struct qib_qp_priv* priv; int port_num; TYPE_1__ ibqp; } ;
struct qib_qp_priv {int s_work; } ;
struct qib_pportdata {int qib_wq; } ;
struct qib_ibport {int dummy; } ;


 struct qib_pportdata* FUNC_0 (struct qib_ibport*) ;
 int FUNC_1 (int ,int *) ;
 struct qib_ibport* FUNC_2 (int ,int ) ;

bool FUNC_3(struct rvt_qp *VAR_0)
{
 struct qib_ibport *VAR_1 =
  FUNC_2(VAR_0->ibqp.device, VAR_0->port_num);
 struct qib_pportdata *VAR_2 = FUNC_0(VAR_1);
 struct qib_qp_priv *VAR_3 = VAR_0->priv;

 return FUNC_1(VAR_2->qib_wq, &VAR_3->s_work);
}
