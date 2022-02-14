
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvt_qp {struct qib_qp_priv* priv; } ;
struct rvt_dev_info {int dummy; } ;
struct qib_qp_priv {struct qib_qp_priv* s_hdr; } ;


 int FUNC_0 (struct qib_qp_priv*) ;

void FUNC_1(struct rvt_dev_info *VAR_0, struct rvt_qp *VAR_1)
{
 struct qib_qp_priv *VAR_2 = VAR_1->priv;

 FUNC_0(VAR_2->s_hdr);
 FUNC_0(VAR_2);
}
