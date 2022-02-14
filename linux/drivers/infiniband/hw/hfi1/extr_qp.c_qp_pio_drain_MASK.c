
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rvt_qp {struct hfi1_qp_priv* priv; } ;
struct hfi1_qp_priv {TYPE_1__* s_sendcontext; int s_iowait; } ;
struct TYPE_2__ {int waitlock; } ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct rvt_qp *VAR_0)
{
 struct hfi1_qp_priv *VAR_1 = VAR_0->priv;

 if (!VAR_1->s_sendcontext)
  return;
 while (FUNC_2(&VAR_1->s_iowait)) {
  FUNC_3(&VAR_1->s_sendcontext->waitlock);
  FUNC_0(VAR_1->s_sendcontext, 1);
  FUNC_4(&VAR_1->s_sendcontext->waitlock);
  FUNC_1(&VAR_1->s_iowait);
  FUNC_3(&VAR_1->s_sendcontext->waitlock);
  FUNC_0(VAR_1->s_sendcontext, 0);
  FUNC_4(&VAR_1->s_sendcontext->waitlock);
 }
}
