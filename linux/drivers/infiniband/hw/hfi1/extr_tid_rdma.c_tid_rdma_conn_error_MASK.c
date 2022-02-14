
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tid_rdma_params {int dummy; } ;
struct rvt_qp {struct hfi1_qp_priv* priv; } ;
struct TYPE_4__ {int remote; } ;
struct TYPE_3__ {int lock; } ;
struct hfi1_qp_priv {TYPE_2__ tid_rdma; TYPE_1__ opfn; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct tid_rdma_params*,int ) ;
 int FUNC_2 (int *) ;
 struct tid_rdma_params* FUNC_3 (int ,int ) ;
 int VAR_0 ;

void FUNC_4(struct rvt_qp *VAR_1)
{
 struct hfi1_qp_priv *VAR_2 = VAR_1->priv;
 struct tid_rdma_params *VAR_3;

 VAR_3 = FUNC_3(VAR_2->tid_rdma.remote,
     FUNC_2(&VAR_2->opfn.lock));
 FUNC_0(VAR_2->tid_rdma.remote, ((void*)0));
 if (VAR_3)
  FUNC_1(VAR_3, VAR_0);
}
