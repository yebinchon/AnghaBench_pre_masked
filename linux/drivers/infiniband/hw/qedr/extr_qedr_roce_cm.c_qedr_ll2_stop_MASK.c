
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qedr_dev {scalar_t__ gsi_ll2_handle; int rdma_ctx; TYPE_1__* ops; int gsi_ll2_mac_address; int cdev; } ;
struct TYPE_2__ {int (* ll2_set_mac_filter ) (int ,int ,int *) ;int (* ll2_terminate_connection ) (int ,scalar_t__) ;int (* ll2_release_connection ) (int ,scalar_t__) ;} ;


 int FUNC_0 (struct qedr_dev*,char*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct qedr_dev *VAR_1)
{
 int VAR_2;

 if (VAR_1->gsi_ll2_handle == VAR_0)
  return 0;


 VAR_2 = VAR_1->ops->ll2_set_mac_filter(VAR_1->cdev,
       VAR_1->gsi_ll2_mac_address, ((void*)0));

 VAR_2 = VAR_1->ops->ll2_terminate_connection(VAR_1->rdma_ctx,
      VAR_1->gsi_ll2_handle);
 if (VAR_2)
  FUNC_0(VAR_1, "Failed to terminate LL2 connection (rc=%d)\n", VAR_2);

 VAR_1->ops->ll2_release_connection(VAR_1->rdma_ctx, VAR_1->gsi_ll2_handle);

 VAR_1->gsi_ll2_handle = VAR_0;

 return VAR_2;
}
