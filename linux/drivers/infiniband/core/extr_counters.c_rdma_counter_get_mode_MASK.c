
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_4__ {int mode; int mask; } ;
struct rdma_port_counter {TYPE_2__ mode; } ;
struct ib_device {TYPE_1__* port_data; } ;
typedef enum rdma_nl_counter_mode { ____Placeholder_rdma_nl_counter_mode } rdma_nl_counter_mode ;
typedef enum rdma_nl_counter_mask { ____Placeholder_rdma_nl_counter_mask } rdma_nl_counter_mask ;
struct TYPE_3__ {struct rdma_port_counter port_counter; } ;



int FUNC_0(struct ib_device *VAR_0, u8 VAR_1,
     enum rdma_nl_counter_mode *VAR_2,
     enum rdma_nl_counter_mask *VAR_3)
{
 struct rdma_port_counter *VAR_4;

 VAR_4 = &VAR_0->port_data[VAR_1].port_counter;
 *VAR_2 = VAR_4->mode.mode;
 *VAR_3 = VAR_4->mode.mask;

 return 0;
}
