
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qedr_iw_ep {struct qedr_dev* dev; } ;
struct qedr_dev {int rdma_ctx; TYPE_1__* ops; } ;
struct qed_iwarp_send_rtr_in {int ep_context; } ;
struct qed_iwarp_cm_event_params {int ep_context; } ;
struct TYPE_2__ {int (* iwarp_send_rtr ) (int ,struct qed_iwarp_send_rtr_in*) ;} ;


 int FUNC_0 (int ,struct qed_iwarp_send_rtr_in*) ;

__attribute__((used)) static int
FUNC_1(void *VAR_0, struct qed_iwarp_cm_event_params *VAR_1)
{
 struct qedr_iw_ep *VAR_2 = (struct qedr_iw_ep *)VAR_0;
 struct qedr_dev *VAR_3 = VAR_2->dev;
 struct qed_iwarp_send_rtr_in VAR_4;

 VAR_4.ep_context = VAR_1->ep_context;

 return VAR_3->ops->iwarp_send_rtr(VAR_3->rdma_ctx, &VAR_4);
}
