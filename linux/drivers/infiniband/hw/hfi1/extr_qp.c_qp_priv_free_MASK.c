
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvt_qp {struct hfi1_qp_priv* priv; } ;
struct rvt_dev_info {int dummy; } ;
struct hfi1_qp_priv {struct hfi1_qp_priv* s_ahg; } ;


 int FUNC_0 (struct rvt_dev_info*,struct rvt_qp*) ;
 int FUNC_1 (struct hfi1_qp_priv*) ;

void FUNC_2(struct rvt_dev_info *VAR_0, struct rvt_qp *VAR_1)
{
 struct hfi1_qp_priv *VAR_2 = VAR_1->priv;

 FUNC_0(VAR_0, VAR_1);
 FUNC_1(VAR_2->s_ahg);
 FUNC_1(VAR_2);
}
