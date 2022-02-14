
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct qedr_iw_ep {int * qp; int qed_context; struct qedr_dev* dev; } ;
struct qedr_dev {int rdma_ctx; TYPE_1__* ops; } ;
struct qed_iwarp_reject_in {int private_data_len; void const* private_data; struct qedr_iw_ep* cb_context; int ep_context; } ;
struct iw_cm_id {scalar_t__ provider_data; } ;
struct TYPE_2__ {int (* iwarp_reject ) (int ,struct qed_iwarp_reject_in*) ;} ;


 int FUNC_0 (int ,struct qed_iwarp_reject_in*) ;

int FUNC_1(struct iw_cm_id *VAR_0, const void *VAR_1, u8 VAR_2)
{
 struct qedr_iw_ep *VAR_3 = (struct qedr_iw_ep *)VAR_0->provider_data;
 struct qedr_dev *VAR_4 = VAR_3->dev;
 struct qed_iwarp_reject_in VAR_5;

 VAR_5.ep_context = VAR_3->qed_context;
 VAR_5.cb_context = VAR_3;
 VAR_5.private_data = VAR_1;
 VAR_5.private_data_len = VAR_2;
 VAR_3->qp = ((void*)0);

 return VAR_4->ops->iwarp_reject(VAR_4->rdma_ctx, &VAR_5);
}
