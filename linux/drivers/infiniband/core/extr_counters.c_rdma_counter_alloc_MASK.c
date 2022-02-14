
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
struct rdma_port_counter {int lock; int num_counters; int mode; } ;
struct TYPE_8__ {int mode; } ;
struct TYPE_5__ {int type; } ;
struct rdma_counter {size_t port; struct rdma_counter* stats; int lock; int kref; TYPE_4__ mode; TYPE_1__ res; struct ib_device* device; } ;
struct TYPE_6__ {struct rdma_counter* (* counter_alloc_stats ) (struct rdma_counter*) ;int counter_dealloc; } ;
struct ib_device {TYPE_3__* port_data; TYPE_2__ ops; } ;
typedef enum rdma_nl_counter_mode { ____Placeholder_rdma_nl_counter_mode } rdma_nl_counter_mode ;
struct TYPE_7__ {struct rdma_port_counter port_counter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (struct rdma_counter*) ;
 int FUNC_2 (int *) ;
 struct rdma_counter* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct rdma_counter* FUNC_7 (struct rdma_counter*) ;

__attribute__((used)) static struct rdma_counter *FUNC_8(struct ib_device *VAR_3, u8 VAR_4,
            enum rdma_nl_counter_mode VAR_5)
{
 struct rdma_port_counter *VAR_6;
 struct rdma_counter *VAR_7;
 int VAR_8;

 if (!VAR_3->ops.counter_dealloc || !VAR_3->ops.counter_alloc_stats)
  return ((void*)0);

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_0);
 if (!VAR_7)
  return ((void*)0);

 VAR_7->device = VAR_3;
 VAR_7->port = VAR_4;
 VAR_7->res.type = VAR_2;
 VAR_7->stats = VAR_3->ops.counter_alloc_stats(VAR_7);
 if (!VAR_7->stats)
  goto err_stats;

 VAR_6 = &VAR_3->port_data[VAR_4].port_counter;
 FUNC_5(&VAR_6->lock);
 if (VAR_5 == VAR_1) {
  VAR_8 = FUNC_0(&VAR_6->mode,
      VAR_1, 0);
  if (VAR_8)
   goto err_mode;
 }

 VAR_6->num_counters++;
 FUNC_6(&VAR_6->lock);

 VAR_7->mode.mode = VAR_5;
 FUNC_2(&VAR_7->kref);
 FUNC_4(&VAR_7->lock);

 return VAR_7;

err_mode:
 FUNC_6(&VAR_6->lock);
 FUNC_1(VAR_7->stats);
err_stats:
 FUNC_1(VAR_7);
 return ((void*)0);
}
