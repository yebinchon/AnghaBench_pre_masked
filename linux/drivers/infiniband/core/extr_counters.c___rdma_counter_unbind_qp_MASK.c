
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rdma_counter {int lock; } ;
struct ib_qp {TYPE_2__* device; struct rdma_counter* counter; } ;
struct TYPE_3__ {int (* counter_unbind_qp ) (struct ib_qp*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ib_qp*) ;

__attribute__((used)) static int FUNC_3(struct ib_qp *VAR_1)
{
 struct rdma_counter *VAR_2 = VAR_1->counter;
 int VAR_3;

 if (!VAR_1->device->ops.counter_unbind_qp)
  return -VAR_0;

 FUNC_0(&VAR_2->lock);
 VAR_3 = VAR_1->device->ops.counter_unbind_qp(VAR_1);
 FUNC_1(&VAR_2->lock);

 return VAR_3;
}
