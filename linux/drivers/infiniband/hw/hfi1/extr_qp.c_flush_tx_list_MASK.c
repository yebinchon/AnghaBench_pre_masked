
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rvt_qp {struct hfi1_qp_priv* priv; } ;
struct hfi1_qp_priv {int s_iowait; } ;
struct TYPE_4__ {int tx_head; } ;
struct TYPE_3__ {int tx_head; } ;


 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct rvt_qp *VAR_0)
{
 struct hfi1_qp_priv *VAR_1 = VAR_0->priv;

 FUNC_0(&FUNC_1(&VAR_1->s_iowait)->tx_head);
 FUNC_0(&FUNC_2(&VAR_1->s_iowait)->tx_head);
}
