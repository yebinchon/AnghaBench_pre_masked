
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rdma_port_counter {TYPE_3__* hstats; } ;
struct rdma_counter {size_t port; TYPE_1__* stats; struct ib_device* device; } ;
struct ib_device {TYPE_2__* port_data; } ;
struct TYPE_6__ {int * value; } ;
struct TYPE_5__ {struct rdma_port_counter port_counter; } ;
struct TYPE_4__ {int num_counters; scalar_t__* value; } ;



__attribute__((used)) static void FUNC_0(const struct rdma_counter *VAR_0)
{
 struct ib_device *VAR_1 = VAR_0->device;
 struct rdma_port_counter *VAR_2;
 int VAR_3;

 VAR_2 = &VAR_1->port_data[VAR_0->port].port_counter;
 if (!VAR_2->hstats)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_0->stats->num_counters; VAR_3++)
  VAR_2->hstats->value[VAR_3] += VAR_0->stats->value[VAR_3];
}
