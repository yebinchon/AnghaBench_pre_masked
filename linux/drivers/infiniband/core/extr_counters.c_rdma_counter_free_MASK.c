
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ mode; } ;
struct rdma_port_counter {int lock; TYPE_3__ mode; int num_counters; } ;
struct rdma_counter {size_t port; struct rdma_counter* stats; int res; TYPE_2__* device; } ;
struct TYPE_5__ {TYPE_1__* port_data; } ;
struct TYPE_4__ {struct rdma_port_counter port_counter; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,int ) ;
 int FUNC_1 (struct rdma_counter*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct rdma_counter *VAR_2)
{
 struct rdma_port_counter *VAR_3;

 VAR_3 = &VAR_2->device->port_data[VAR_2->port].port_counter;
 FUNC_2(&VAR_3->lock);
 VAR_3->num_counters--;
 if (!VAR_3->num_counters &&
     (VAR_3->mode.mode == VAR_0))
  FUNC_0(&VAR_3->mode, VAR_1,
       0);

 FUNC_3(&VAR_3->lock);

 FUNC_4(&VAR_2->res);
 FUNC_1(VAR_2->stats);
 FUNC_1(VAR_2);
}
