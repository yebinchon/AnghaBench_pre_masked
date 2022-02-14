
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvt_qp {struct hfi1_qp_priv* priv; } ;
struct hfi1_qp_priv {int s_iowait; } ;


 int FUNC_0 (struct rvt_qp*) ;
 int FUNC_1 (struct rvt_qp*) ;
 int FUNC_2 (struct rvt_qp*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct rvt_qp*) ;

void FUNC_5(struct rvt_qp *VAR_0)
{
 struct hfi1_qp_priv *VAR_1 = VAR_0->priv;

 FUNC_1(VAR_0);
 FUNC_2(VAR_0);
 FUNC_3(&VAR_1->s_iowait);
 FUNC_4(VAR_0);
 FUNC_0(VAR_0);
}
