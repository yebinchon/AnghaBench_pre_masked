
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rvt_qp {scalar_t__ state; struct hfi1_qp_priv* priv; } ;
struct TYPE_2__ {int extended; } ;
struct hfi1_qp_priv {TYPE_1__ opfn; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct rvt_qp*) ;

void FUNC_3(struct rvt_qp *VAR_2, u32 VAR_3)
{
 struct hfi1_qp_priv *VAR_4 = VAR_2->priv;

 if (!VAR_4->opfn.extended && FUNC_1(VAR_3) &&
     FUNC_0(VAR_1)) {
  VAR_4->opfn.extended = 1;
  if (VAR_2->state == VAR_0)
   FUNC_2(VAR_2);
 }
}
