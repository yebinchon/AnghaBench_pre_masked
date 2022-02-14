
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct rvt_qp {struct hfi1_qp_priv* priv; } ;
struct TYPE_2__ {int local; } ;
struct hfi1_qp_priv {TYPE_1__ tid_rdma; } ;


 int FUNC_0 (int *) ;

bool FUNC_1(struct rvt_qp *VAR_0, u64 *VAR_1)
{
 struct hfi1_qp_priv *VAR_2 = VAR_0->priv;

 *VAR_1 = FUNC_0(&VAR_2->tid_rdma.local);
 return 1;
}
