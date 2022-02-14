
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rdma_counter {int lock; struct ib_device* device; } ;
struct TYPE_2__ {int (* counter_update_stats ) (struct rdma_counter*) ;} ;
struct ib_device {TYPE_1__ ops; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rdma_counter*) ;

int FUNC_3(struct rdma_counter *VAR_1)
{
 struct ib_device *VAR_2 = VAR_1->device;
 int VAR_3;

 if (!VAR_2->ops.counter_update_stats)
  return -VAR_0;

 FUNC_0(&VAR_1->lock);
 VAR_3 = VAR_2->ops.counter_update_stats(VAR_1);
 FUNC_1(&VAR_1->lock);

 return VAR_3;
}
