
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rdma_counter {int lock; } ;
struct ib_qp {TYPE_2__* device; scalar_t__ counter; } ;
struct TYPE_3__ {int (* counter_bind_qp ) (struct rdma_counter*,struct ib_qp*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rdma_counter*,struct ib_qp*) ;

__attribute__((used)) static int FUNC_3(struct rdma_counter *VAR_2,
      struct ib_qp *VAR_3)
{
 int VAR_4;

 if (VAR_3->counter)
  return -VAR_0;

 if (!VAR_3->device->ops.counter_bind_qp)
  return -VAR_1;

 FUNC_0(&VAR_2->lock);
 VAR_4 = VAR_3->device->ops.counter_bind_qp(VAR_2, VAR_3);
 FUNC_1(&VAR_2->lock);

 return VAR_4;
}
