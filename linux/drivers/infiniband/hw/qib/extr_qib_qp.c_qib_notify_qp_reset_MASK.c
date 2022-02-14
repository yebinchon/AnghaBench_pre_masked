
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvt_qp {struct qib_qp_priv* priv; } ;
struct qib_qp_priv {int s_dma_busy; } ;


 int FUNC_0 (int *,int ) ;

void FUNC_1(struct rvt_qp *VAR_0)
{
 struct qib_qp_priv *VAR_1 = VAR_0->priv;

 FUNC_0(&VAR_1->s_dma_busy, 0);
}
