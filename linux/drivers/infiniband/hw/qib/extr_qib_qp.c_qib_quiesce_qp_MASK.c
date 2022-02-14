
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvt_qp {struct qib_qp_priv* priv; } ;
struct qib_qp_priv {int * s_tx; int s_dma_busy; int wait_dma; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int) ;

void FUNC_3(struct rvt_qp *VAR_0)
{
 struct qib_qp_priv *VAR_1 = VAR_0->priv;

 FUNC_2(VAR_1->wait_dma, !FUNC_0(&VAR_1->s_dma_busy));
 if (VAR_1->s_tx) {
  FUNC_1(VAR_1->s_tx);
  VAR_1->s_tx = ((void*)0);
 }
}
