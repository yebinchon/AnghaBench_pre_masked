
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rdma_cq_setup {scalar_t__ ovfl_mode; scalar_t__ credit_thres; scalar_t__ credits; scalar_t__ size; scalar_t__ base_addr; int id; } ;
struct cxio_rdev {TYPE_1__* t3cdev_p; } ;
struct TYPE_2__ {int (* ctl ) (TYPE_1__*,int ,struct rdma_cq_setup*) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,struct rdma_cq_setup*) ;

__attribute__((used)) static int FUNC_1(struct cxio_rdev *VAR_1, u32 VAR_2)
{
 struct rdma_cq_setup VAR_3;
 VAR_3.id = VAR_2;
 VAR_3.base_addr = 0;
 VAR_3.size = 0;
 VAR_3.credits = 0;
 VAR_3.credit_thres = 0;
 VAR_3.ovfl_mode = 0;
 return (VAR_1->t3cdev_p->ctl(VAR_1->t3cdev_p, VAR_0, &VAR_3));
}
