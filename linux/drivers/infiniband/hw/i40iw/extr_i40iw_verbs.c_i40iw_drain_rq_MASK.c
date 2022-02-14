
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_qp {int dummy; } ;
struct TYPE_2__ {int rq_ring; } ;
struct i40iw_sc_qp {TYPE_1__ qp_uk; } ;
struct i40iw_qp {int rq_drained; struct i40iw_sc_qp sc_qp; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct i40iw_qp* FUNC_1 (struct ib_qp*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ib_qp *VAR_0)
{
 struct i40iw_qp *VAR_1 = FUNC_1(VAR_0);
 struct i40iw_sc_qp *VAR_2 = &VAR_1->sc_qp;

 if (FUNC_0(VAR_2->qp_uk.rq_ring))
  FUNC_2(&VAR_1->rq_drained);
}
