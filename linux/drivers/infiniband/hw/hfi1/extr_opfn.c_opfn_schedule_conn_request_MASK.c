
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rvt_qp {struct hfi1_qp_priv* priv; } ;
struct TYPE_2__ {int opfn_work; } ;
struct hfi1_qp_priv {TYPE_1__ opfn; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct rvt_qp*) ;

__attribute__((used)) static void FUNC_2(struct rvt_qp *VAR_1)
{
 struct hfi1_qp_priv *VAR_2 = VAR_1->priv;

 FUNC_1(VAR_1);
 FUNC_0(VAR_0, &VAR_2->opfn.opfn_work);
}
