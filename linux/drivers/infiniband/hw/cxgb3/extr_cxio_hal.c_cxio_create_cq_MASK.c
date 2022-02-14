
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct t3_cqe {int dummy; } ;
struct t3_cq {unsigned long size_log2; scalar_t__ dma_addr; scalar_t__ cqid; int sw_queue; int queue; } ;
struct rdma_cq_setup {unsigned long size; int credits; int credit_thres; int ovfl_mode; scalar_t__ base_addr; scalar_t__ id; } ;
struct TYPE_5__ {TYPE_1__* pdev; } ;
struct cxio_rdev {TYPE_3__* t3cdev_p; TYPE_2__ rnic_info; int rscp; } ;
struct TYPE_6__ {scalar_t__ type; int (* ctl ) (TYPE_3__*,int ,struct rdma_cq_setup*) ;} ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int,scalar_t__*,int ) ;
 int FUNC_2 (struct t3_cq*,int ,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int VAR_4 ;
 int FUNC_5 (TYPE_3__*,int ,struct rdma_cq_setup*) ;

int FUNC_6(struct cxio_rdev *VAR_5, struct t3_cq *VAR_6, int VAR_7)
{
 struct rdma_cq_setup VAR_8;
 int VAR_9 = (1UL << (VAR_6->size_log2)) * sizeof(struct t3_cqe);

 VAR_9 += 1;
 VAR_6->cqid = FUNC_0(VAR_5->rscp);
 if (!VAR_6->cqid)
  return -VAR_0;
 if (VAR_7) {
  VAR_6->sw_queue = FUNC_4(VAR_9, VAR_1);
  if (!VAR_6->sw_queue)
   return -VAR_0;
 }
 VAR_6->queue = FUNC_1(&(VAR_5->rnic_info.pdev->dev), VAR_9,
          &(VAR_6->dma_addr), VAR_1);
 if (!VAR_6->queue) {
  FUNC_3(VAR_6->sw_queue);
  return -VAR_0;
 }
 FUNC_2(VAR_6, VAR_4, VAR_6->dma_addr);
 VAR_8.id = VAR_6->cqid;
 VAR_8.base_addr = (u64) (VAR_6->dma_addr);
 VAR_8.size = 1UL << VAR_6->size_log2;
 VAR_8.credits = 65535;
 VAR_8.credit_thres = 1;
 if (VAR_5->t3cdev_p->type != VAR_3)
  VAR_8.ovfl_mode = 0;
 else
  VAR_8.ovfl_mode = 1;
 return (VAR_5->t3cdev_p->ctl(VAR_5->t3cdev_p, VAR_2, &VAR_8));
}
