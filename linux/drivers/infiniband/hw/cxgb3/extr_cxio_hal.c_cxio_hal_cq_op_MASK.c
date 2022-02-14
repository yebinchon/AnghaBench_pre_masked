
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct t3_cqe {int dummy; } ;
struct t3_cq {int size_log2; struct t3_cqe* queue; scalar_t__ rptr; int cqid; } ;
struct rdma_cq_op {int op; scalar_t__ credits; int id; } ;
struct cxio_rdev {int dev_name; TYPE_1__* t3cdev_p; } ;
typedef enum t3_cq_opcode { ____Placeholder_t3_cq_opcode } t3_cq_opcode ;
struct TYPE_2__ {int (* ctl ) (TYPE_1__*,int ,struct rdma_cq_op*) ;} ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,struct t3_cqe*) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int ) ;
 int VAR_2 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (TYPE_1__*,int ,struct rdma_cq_op*) ;
 int FUNC_4 (int) ;

int FUNC_5(struct cxio_rdev *VAR_3, struct t3_cq *VAR_4,
     enum t3_cq_opcode VAR_5, u32 VAR_6)
{
 int VAR_7;
 struct t3_cqe *VAR_8;
 u32 VAR_9;

 struct rdma_cq_op VAR_10;
 VAR_10.id = VAR_4->cqid;
 VAR_10.credits = (VAR_5 == VAR_0) ? VAR_6 : 0;
 VAR_10.op = VAR_5;
 VAR_7 = VAR_3->t3cdev_p->ctl(VAR_3->t3cdev_p, VAR_2, &VAR_10);

 if ((VAR_7 < 0) || (VAR_5 == VAR_0))
  return VAR_7;






 if (FUNC_1((VAR_4->rptr), VAR_4->size_log2) != VAR_7) {
  int VAR_11=0;

  VAR_9 = VAR_4->rptr;





  while (FUNC_1((VAR_9+1), VAR_4->size_log2) != VAR_7)
   VAR_9++;






  VAR_8 = VAR_4->queue + FUNC_1(VAR_9, VAR_4->size_log2);
  while (!FUNC_0(VAR_9, VAR_4->size_log2, VAR_8)) {
   FUNC_4(1);
   if (VAR_11++ > 1000000) {
    FUNC_2("%s: stalled rnic\n", VAR_3->dev_name);
    return -VAR_1;
   }
  }

  return 1;
 }

 return 0;
}
