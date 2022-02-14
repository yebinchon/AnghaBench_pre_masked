
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tid_rdma_params {int qp; int urg; int timeout; int max_write; int max_read; int jkey; int max_len; } ;
struct rvt_qp {int timeout; struct hfi1_qp_priv* priv; } ;
struct hfi1_qp_priv {TYPE_1__* rcd; } ;
struct TYPE_2__ {int ctxt; int jkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_3 ;

void FUNC_1(struct rvt_qp *VAR_4, struct tid_rdma_params *VAR_5)
{
 struct hfi1_qp_priv *VAR_6 = VAR_4->priv;

 VAR_5->qp = (VAR_3 << 16) | VAR_6->rcd->ctxt;
 VAR_5->max_len = VAR_1;
 VAR_5->jkey = VAR_6->rcd->jkey;
 VAR_5->max_read = VAR_0;
 VAR_5->max_write = VAR_2;
 VAR_5->timeout = VAR_4->timeout;
 VAR_5->urg = FUNC_0(VAR_6->rcd);
}
