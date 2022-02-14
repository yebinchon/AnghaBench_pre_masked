
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qedr_iw_listener {scalar_t__ qed_handle; } ;
struct qedr_dev {int rdma_ctx; TYPE_1__* ops; } ;
struct iw_cm_id {int (* rem_ref ) (struct iw_cm_id*) ;int device; struct qedr_iw_listener* provider_data; } ;
struct TYPE_2__ {int (* iwarp_destroy_listen ) (int ,scalar_t__) ;} ;


 struct qedr_dev* FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct iw_cm_id*) ;

int FUNC_3(struct iw_cm_id *VAR_0)
{
 struct qedr_iw_listener *VAR_1 = VAR_0->provider_data;
 struct qedr_dev *VAR_2 = FUNC_0(VAR_0->device);
 int VAR_3 = 0;

 if (VAR_1->qed_handle)
  VAR_3 = VAR_2->ops->iwarp_destroy_listen(VAR_2->rdma_ctx,
          VAR_1->qed_handle);

 VAR_0->rem_ref(VAR_0);
 return VAR_3;
}
