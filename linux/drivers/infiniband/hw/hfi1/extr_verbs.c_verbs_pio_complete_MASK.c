
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvt_qp {struct hfi1_qp_priv* priv; } ;
struct hfi1_qp_priv {int s_iowait; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, int VAR_1)
{
 struct rvt_qp *VAR_2 = (struct rvt_qp *)VAR_0;
 struct hfi1_qp_priv *VAR_3 = VAR_2->priv;

 if (FUNC_1(&VAR_3->s_iowait))
  FUNC_0(&VAR_3->s_iowait);
}
