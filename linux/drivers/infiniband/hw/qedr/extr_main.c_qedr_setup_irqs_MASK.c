
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ msix_cnt; } ;
struct qedr_dev {TYPE_2__ int_info; int cdev; TYPE_1__* ops; int num_cnq; } ;
struct TYPE_3__ {int (* rdma_set_rdma_int ) (int ,int ) ;int (* rdma_get_rdma_int ) (int ,TYPE_2__*) ;} ;


 int FUNC_0 (struct qedr_dev*,int ,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (struct qedr_dev*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(struct qedr_dev *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1, VAR_0, "qedr_setup_irqs\n");


 VAR_2 = VAR_1->ops->rdma_set_rdma_int(VAR_1->cdev, VAR_1->num_cnq);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_2 = VAR_1->ops->rdma_get_rdma_int(VAR_1->cdev, &VAR_1->int_info);
 if (VAR_2) {
  FUNC_0(VAR_1, VAR_0, "get_rdma_int failed\n");
  return VAR_2;
 }

 if (VAR_1->int_info.msix_cnt) {
  FUNC_0(VAR_1, VAR_0, "rdma msix_cnt = %d\n",
    VAR_1->int_info.msix_cnt);
  VAR_2 = FUNC_1(VAR_1);
  if (VAR_2)
   return VAR_2;
 }

 FUNC_0(VAR_1, VAR_0, "qedr_setup_irqs succeeded\n");

 return 0;
}
